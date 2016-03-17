library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity framebuffer is
    Port ( clk : in  STD_LOGIC;
           btn0 : in  STD_LOGIC;
           sw : in  STD_LOGIC_VECTOR (4 downto 0);
           Hsync : out  STD_LOGIC;
           Vsync : out  STD_LOGIC;
           vgaRed : out  STD_LOGIC_VECTOR (2 downto 0);
           vgaBlue : out  STD_LOGIC_VECTOR (1 downto 0);
           vgaGreen : out  STD_LOGIC_VECTOR (2 downto 0);
           MemAdr : out  STD_LOGIC_VECTOR (22 downto 0);
           MemOE : out  STD_LOGIC;
           MemWR : out  STD_LOGIC;
           RamCS : out  STD_LOGIC;
           RamLB : out  STD_LOGIC;
           RamUB : out  STD_LOGIC;
           RamCLK : out  STD_LOGIC;
           RamADV : out  STD_LOGIC;
           RamCRE : out  STD_LOGIC;
           MemDB : inout  STD_LOGIC_VECTOR (15 downto 0));
end framebuffer;

architecture Behavioral of framebuffer is
	component vga_timing
		 Port ( clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  HS : out  STD_LOGIC;
				  VS : out  STD_LOGIC;
				  pixel_x : out  STD_LOGIC_VECTOR (9 downto 0);
				  pixel_y : out  STD_LOGIC_VECTOR (9 downto 0);
				  last_column : out  STD_LOGIC;
				  last_row : out  STD_LOGIC;
				  blank : out  STD_LOGIC);
	end component;
	
	component sramController
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
	end component;
	
		
--signals and stuff for the VGA Timer
signal HS_next, VS_next : STD_LOGIC;
signal blank, last_column, last_row : STD_LOGIC;
signal green_next, red_next, green_disp, red_disp : STD_LOGIC_VECTOR(2 downto 0);
signal pixel_x, pixel_y  : STD_LOGIC_VECTOR (9 downto 0);
signal blue_disp, blue_next : STD_LOGIC_VECTOR ( 1 downto 0);
signal data_in_top : std_logic_vector(15 downto 0);
signal addrTop : std_logic_vector(22 downto 0) := (others=>'0');
signal dataintop : std_logic_vector(15 downto 0) := (others=>'0');

signal color : std_logic_vector (7 downto 0);

---- Signals for the SRAM
	signal dataout, dataout_next : std_logic_vector(15 downto 0);
	signal memtop, rwtop : std_logic := '1';
	signal dvtop, readytop, rsttop : std_logic;
	
	-------------------------FIFO SIGNALS------------------------------------====
	constant fifo_DATA_WIDTH  : positive := 16; --the color of 2 pixels
	constant FIFO_DEPTH	: positive := 4; --might not even need this much
	signal fifo_WriteEn	:  STD_LOGIC;
	signal fifo_DataIn	:STD_LOGIC_VECTOR (fifo_DATA_WIDTH - 1 downto 0);
	signal fifo_ReadEn	:STD_LOGIC;
	signal fifo_DataOut	:STD_LOGIC_VECTOR (fifo_DATA_WIDTH - 1 downto 0);
	signal fifo_Empty	: STD_LOGIC;
	signal fifo_Full	: STD_LOGIC;
	--+======================================================================


begin

	main: vga_timing
		port map(clk=>clk, rst=>btn0, 
					HS=>HS_next, VS=>VS_next,
					pixel_x=>pixel_x,
					pixel_y=>pixel_y,
					last_column=>last_column,
					last_row=>last_row,
					blank=>blank
					);
					
	memcon : sramController
	generic map( CLK_RATE=> 50_000_000)
    Port map( clk=>clk, rst=>rsttop,
           addr=>addrTop,
           data_m2s=>dataintop,
           mem=>memtop, rw=>rwtop,
           data_s2m=>dataout_next,
           data_valid=>dvtop,
           ready=>readytop,
           MemAdr=>MemAdr,
           MemOE=>MemOE, MemWR=>MemWR, RamCS=>RamCS, RamLB=>RamLB, RamUB=>RAMUB,
           RamCLK=>RamCLK, RamADV=>RamADV, RamCRE=>RamCRE,
           MemDB=>MemDB );
process(clk)
	begin
	if(clk'event and clk='1') then
			Hsync <= HS_next;
			Vsync <= VS_next;
			vgaRed <= red_next;
			vgaGreen <= green_next;
			vgaBlue <= blue_next;
		end if;
end process;

	red_disp <= color(7 downto 5); -- "111" when upx < 320 else "000";
	green_disp <= color(4 downto 2); -- "000" when upx < 320 else "111";
	blue_disp <= color(1 downto 0);-- "00"; -- blue is always zero for this particular display
	
	red_next <= red_disp when blank = '0' else
			"000";
	green_next <= green_disp when blank = '0' else
				"000";
	blue_next <= blue_disp when blank = '0' else 
			"00";

	--FIFO LOGIC=========================================================================
	
	--this is part of the SRAM process (look in your top module)
		process(clk)
		begin
			if(clk'event and clk='1') then
				dataout <= dataout_next; --dataout_next from SRAMcontroller
			end if;
		end process;
		
	--so when we read from our SRAM, we need set our fifo_writeEn high
	fifo_writeEn <= '1' when dvtop = '1' else --this might not be correct, but its close. 
							'0';
	--use data valid?
	
	
	 fifo_dataIn <= dataout; 
	 
	-- Memory Pointer Process
	fifo_proc : process (CLK)
		type FIFO_Memory is array (0 to FIFO_DEPTH - 1) of STD_LOGIC_VECTOR (fifo_DATA_WIDTH - 1 downto 0);
		variable Memory : FIFO_Memory;
		variable Head : natural range 0 to FIFO_DEPTH - 1;
		variable Tail : natural range 0 to FIFO_DEPTH - 1;
		variable Looped : boolean;
	begin
		if (clk'event and clk = '1') then
			if btn0 = '1' then
				Head := 0;
				Tail := 0;	
				Looped := false;
				fifo_Full  <= '0';
				fifo_Empty <= '1';
			else
				if (fifo_ReadEn = '1') then
					if ((Looped = true) or (Head /= Tail)) then
						-- Update data output
						fifo_DataOut <= Memory(Tail);	
						-- Update Tail pointer as needed
						if (Tail = FIFO_DEPTH - 1) then
							Tail := 0;
							Looped := false;
						else
							Tail := Tail + 1;
						end if;	
					end if;
				end if;
				
				if (fifo_WriteEn = '1') then
					if ((Looped = false) or (Head /= Tail)) then
						-- Write Data to Memory
						Memory(Head) := fifo_DataIn;	
						-- Increment Head pointer as needed
						if (Head = FIFO_DEPTH - 1) then
							Head := 0;
							Looped := true;
						else
							Head := Head + 1;
						end if;
					end if;
				end if;
				
				-- Update Empty and Full flags
				if (Head = Tail) then
					if Looped then
						fifo_Full <= '1';
					else
						fifo_Empty <= '1';
					end if;
				else
					fifo_Empty	<= '0';
					fifo_Full	<= '0';
				end if;
			end if;
		end if;
	end process;
	--=======================================================================

end Behavioral;
