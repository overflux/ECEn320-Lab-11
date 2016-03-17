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
	
	
signal HS_next, VS_next : STD_LOGIC;
signal blank, last_column, last_row : STD_LOGIC;
signal green_next, red_next, green_disp, red_disp : STD_LOGIC_VECTOR(2 downto 0);
signal pixel_x, pixel_y  : STD_LOGIC_VECTOR (9 downto 0);
signal blue_disp, blue_next : STD_LOGIC_VECTOR ( 1 downto 0);
signal data_in_top : std_logic_vector(15 downto 0);

signal color : std_logic_vector (7 downto 0);
constant black : std_logic_vector(7 downto 0) := "00000000";
constant blue : std_logic_vector(7 downto 0) := "00000011";
constant green : std_logic_vector(7 downto 0) := "00011100";
constant cyan : std_logic_vector(7 downto 0) := "00011111";
constant red : std_logic_vector(7 downto 0) := "11100000";
constant magenta : std_logic_vector(7 downto 0) := "11100011";
constant yellow : std_logic_vector(7 downto 0) := "11111100";
constant white : std_logic_vector(7 downto 0) := "11111111";

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
			h0r <= HS_next;
			v0r <= VS_next;
			h1r <= h1next;
			v1r <= v1next;
			Hsync <= hnext;
			Vsync <= vnext;
			vgaRed <= red_next;
			vgaGreen <= green_next;
			vgaBlue <= blue_next;
			btn0 <= btn0next;
			c_reg <= c_next;
			rowreg <= rownext;
			colreg <= colnext;
			state_reg<=state_next;
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

end Behavioral;

