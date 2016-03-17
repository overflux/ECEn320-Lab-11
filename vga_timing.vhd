library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity vga_timing is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           HS : out  STD_LOGIC;
           VS : out  STD_LOGIC;
           pixel_x : out  STD_LOGIC_VECTOR (9 downto 0);
           pixel_y : out  STD_LOGIC_VECTOR (9 downto 0);
           last_column : out  STD_LOGIC;
           last_row : out  STD_LOGIC;
           blank : out  STD_LOGIC);
end vga_timing;

architecture Behavioral of vga_timing is
	signal pixel_en, q_reg, q_next : STD_LOGIC;
	signal cHor_reg, cHor_next : UNSIGNED (9 downto 0) := (others => '0');
	signal cVer_reg, cVer_next : UNSIGNED (9 downto 0) := (others => '0');

begin
	process(clk)
	begin
		if(rst = '1') then
			q_reg <= '0';
			cHor_reg <= (others=>'0');
			cVer_reg <= (others=>'0');
		elsif(clk'event and clk='1') then
			q_reg <= q_next;
			cHor_reg <= cHor_next;
			cVer_reg <= cVer_next;
		end if;
	end process;
	--- Horizontal Things
	-- 0-639 Tdisp
	-- 640-655 Tfp
	-- 656-751 Tpw
	-- 752-799 Tbp
	
	--- Vertical Things
	-- 0-479 Tdisp
	-- 480-489 Tfp
	-- 490-491 Tpw
	-- 492-520 Tbp
	
	-- next state logic
	q_next <= not q_reg;
	
	cHor_next <= (others=>'0') when cHor_reg = 799 and pixel_en = '1' else
						cHor_reg + 1 when pixel_en = '1' else
						cHor_reg;
						
	cVer_next <= (others=>'0') when cVer_reg = 520 and pixel_en = '1' and cHor_reg = 799 else
						cVer_reg + 1 when pixel_en = '1' and cHor_reg = 799 else
						cVer_reg;
	last_column <= '1' when cHor_reg = 639 else
						'0';
	last_row <= '1' when cVer_reg = 479 else
						'0';
	blank <= '1' when cHor_reg > 639 else
				'1' when cVer_reg > 479 else
				'0';
				
	HS <= '0' when (cHor_reg > 655 and cHor_reg < 752) else
			'1';
	VS <= '0' when (cVer_reg > 489 and cVer_reg < 492) else
			'1';
	
	--output logic
	pixel_en <= q_reg;
	pixel_x <= std_logic_vector(cHor_reg);
	pixel_y <= std_logic_vector(cVer_reg);

end Behavioral;

