library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity sramController is
	generic( CLK_RATE: Natural := 50_000_000);
    Port ( clk, rst : in  STD_LOGIC;
           addr : in  STD_LOGIC_VECTOR (22 downto 0);
           data_m2s : in  STD_LOGIC_VECTOR (15 downto 0);
           mem, rw : in  STD_LOGIC;
           data_s2m : out  STD_LOGIC_VECTOR (15 downto 0);
           data_valid : out  STD_LOGIC;
           ready : out  STD_LOGIC;
           MemAdr : out  STD_LOGIC_VECTOR (22 downto 0);
           MemOE, MemWR, RamCS, RamLB, RamUB : out  STD_LOGIC;
           RamCLK, RamADV, RamCRE : out  STD_LOGIC;
           MemDB : inout  STD_LOGIC_VECTOR (15 downto 0));
end sramController;

architecture Behavioral of sramController is
   type state_type is
      (power_up, idle, r1, r2, r3, r4, w1, w2, w3, w4);
  signal state_reg, state_next: state_type;
signal Rm2s, Rm2s_next, Rs2m, Rs2m_next : STD_LOGIC_VECTOR(15 downto 0);
signal Raddr, Raddr_next : STD_LOGIC_VECTOR(22 downto 0)  := (others=>'0');
signal tri_en_buf, we_buf, oe_buf: std_logic;
signal tri_en_reg, we_reg, oe_reg: std_logic;
signal c, c_next : unsigned(16 downto 0);

begin
--these outputs should always be low
RamCLK <= '0';
RamADV <= '0';
RamCRE <= '0';
RamLB <= '0';
RamUB <= '0';
--tri-state driver
MEMDB <= Rm2s when tri_en_reg = '1' else (others => 'Z');-- counter to leave power_up state
c_next <= c + 1;
process(clk, rst)
begin
	if(rst='1') then
		state_reg <= power_up;
		Raddr <= (others=>'0');
		rm2s <= (others=>'0');
		rs2m <= (others=>'0');
		c <= (others=>'0');
		tri_en_reg <= '0';
		we_reg <= '1';
		oe_reg <='1';
		
	elsif (clk'event and clk='1') then
		state_reg <= state_next;
		Raddr <= Raddr_next;
		rm2s <= rm2s_next;
		rs2m <= rs2m_next;
		we_reg <= we_buf;
		oe_reg <= oe_buf;
		tri_en_reg <= tri_en_buf;
		c <= c_next;
   end if;
end process;
   -- next-state logic & data path functional units/routing
process(state_reg,mem,rw,addr,data_m2s,
           rm2s,rs2m,raddr,c, MemDB)
   begin
      raddr_next <= raddr;
      rm2s_next <= rm2s;
      rs2m_next <= rs2m;
      ready <= '0';
		RamCS <= '0';
      case state_reg is
			when power_up =>
				RamCS <= '1';
				ready <= '0';
				if c>=7500 then
					state_next <= idle;
				else
					state_next <= power_up;
				end if;
         when idle =>
            if mem='1' then
               state_next <= idle;
            else
               if rw='0' then --write
                  state_next <= w1;
                  raddr_next <= addr;
                  rm2s_next <= data_m2s;
               else -- read
                  state_next <= r1;
                  raddr_next <= addr;
               end if;
            end if;
            ready <= '1';
         when w1 =>
            state_next <= w2;
         when w2 =>
            state_next <= w3;
			when w3 =>
            state_next <= w4;
         when w4 =>
            state_next <= idle;
         when r1 =>
            state_next <= r2;
         when r2 =>
            state_next <= r3;
         when r3 =>
            state_next <= r4;
			when r4 =>
            state_next <= idle;
				if(mem='0' and rw='1') then
					state_next <= r1;
				end if;
            rs2m_next <= MemDB;
      end case;
   end process;
	
-- look-ahead output logic
   process(state_next, state_reg)
   begin
      tri_en_buf <='0';
      oe_buf <= '1';
      we_buf <= '1';
		data_valid <= '0';
      case state_next is
			when power_up =>
         when idle =>
         when w1 =>
         when w2 =>
            we_buf <= '0';
            tri_en_buf <= '1';
			when w3 =>
            we_buf <= '0';
            tri_en_buf <= '1';
         when w4 =>
				we_buf <= '0';
            tri_en_buf <= '1';
         when r1 =>
            --oe_buf <= '0';
         when r2 =>
            oe_buf <= '0';
         when r3 =>
            oe_buf <= '0';
			when r4 =>
            oe_buf <= '0';
      end case;
		
		if(state_reg = r4) then
			data_valid <= '1';
		end if;
   end process;
   --  output
   MemWR <= we_reg;
   MemOE <= oe_reg;
   MemAdr <= raddr;
   data_s2m <= rs2m;
--output stuff
MemAdr <= Raddr;
end Behavioral;

