--------------------------------------------
--
-- Testbench for SRAM controller lab
--
--
--  Version 1.1
--
-- Author: Mike Wirthlin, BYU
--
--------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

library std;
use std.textio.all;

entity tb_sramController is
end tb_sramController;

architecture tb of tb_sramController is
  signal sram_ce, sram_we, sram_oe, sram_ub, sram_lb, sram_adv,
     sram_cre, sram_clk: std_logic;
  signal mem, rw, ready : std_logic;
  signal clk, tb_rst : std_logic := '0';
  signal addr, sram_addr : std_logic_vector(22 downto 0);
  signal write_data, read_data, sram_data : std_logic_vector(15 downto 0);
  signal data_valid : std_logic;
  signal ready_has_gone_high : std_logic := '0';
  
  -- Memory Test Cases
  type MEMORY_TEST_TYPE is record
    addr : std_logic_vector(22 downto 0);
    data : std_logic_vector(15 downto 0);
  end record;
  type MEMORY_TESTS_TYPE is array(natural range <>) of MEMORY_TEST_TYPE;

  -- This constant array defines the memory tests that will be performed.
  constant TEST_DATA_VALUES : MEMORY_TESTS_TYPE := (
      ("000" & X"00000", X"0000"),
      ("000" & X"000FF", X"F0F0"),
      ("000" & X"0004C", X"0F0F"),
      ("000" & X"01234", X"FFFF")
    );

  constant CLK_RATE : natural := 50_000_000;
  constant CLK_PERIOD : time := 1000 ms / CLK_RATE;
  constant HALF_CLOCK_PERIOD : time := CLK_PERIOD / 2;
  
  component IS61LV25616AL
    port (
      Address : in  std_logic_vector(17 downto 0);
      dataIO : inout std_logic_vector(15 downto 0);
      CE_bar : in std_logic;
      OE_bar : in std_logic;
      WE_bar : in std_logic;
      UB_bar : in std_logic;
      LB_bar : in std_logic
      );
  end component;

  component sramController
    generic(
      CLK_RATE : Natural := 50_000_000    
    );
    port(
      clk : in std_logic;
      rst : in std_logic;    

      addr : in std_logic_vector(22 downto 0);
      data_m2s : in std_logic_Vector(15 downto 0);
      mem : in std_logic;
      rw : in std_logic;
      data_s2m : out std_logic_vector(15 downto 0);
      ready : out std_logic;
      data_valid : out std_logic;

      MemAdr : out std_logic_vector(22 downto 0);
      MemOE : out std_logic;
      MemWR: out std_logic;
      RamCS: out std_logic;
      RamLB: out std_logic;
      RamUB: out std_logic;
      RamCLK: out std_logic;
      RamADV: out std_logic;
      RamCRE: out std_logic;
      MemDB : inout std_logic_vector(15 downto 0)
      );
  end component;
  
begin

  -- clock generator
  clk <= not clk after HALF_CLOCK_PERIOD;

  -- Test process. This process will call the read_mem and write_mem
  -- functions to perform a number of reads and writes on the sram.
  process
    variable pass_tests : boolean := true;
    variable L : LINE;
  begin

    -- Initial wait
    wait for 100 ns; 

    tb_rst <= '1';
    wait for 100 ns; 

    tb_rst <= '0';
    wait for 100 ns;
    
    -- set initial values
    mem <= '1';
    rw <= '0';
    addr <= (others => '0');
    
    -- Initialization power up time (150 us)
    wait until ready = '1';
    
    -- Write followed by a read
    for i in TEST_DATA_VALUES'range loop
      -- Write a data value to memory

      -- wait until negative edge of clk
      wait until clk'event and clk = '0';
      -- Assert the address, data, and control signals
      addr <= TEST_DATA_VALUES(i).addr;
      write_data <= TEST_DATA_VALUES(i).data;
      rw <= '0';
      mem <= '0';
      wait until clk'event and clk = '1';
--       write(L, string'("Writing value="));
--       write(L, to_bitvector(TEST_DATA_VALUES(i).data));
--       write(L, string'(" to location="));
--       write(L, to_bitvector(TEST_DATA_VALUES(i).addr));
--       write(L, string'(" at time "));
--       write(L, NOW);
--       writeline(output, L);
      -- De assert write
      wait until clk'event and clk = '0';
      mem <= '1';
      -- Wait until the write is complete
      wait until ready = '1';

      addr <= (others => '0');
      write_data <= (others => '0');

      wait for 150 ns;

      -- Read the data value from memory that was just written
      -- wait until negative edge of clk to set the signals for the read
      wait until clk'event and clk = '0';
      -- Assert the address, data, and control signals for a read
      addr <= TEST_DATA_VALUES(i).addr;
      rw <= '1';
      mem <= '0';
      wait until clk'event and clk = '1';
      -- Read cycle is occuring.
      wait for 1 ns;
      mem <= '1';
      -- Read should be done
      wait until ready = '1';  
      wait for 1 ns;
      
      -- Print results of read
      
--       write(L, string'("Reading data="));
--       write(L, to_bitvector(read_data));
--       write(L, string'(" from location="));
--       write(L, to_bitvector(TEST_DATA_VALUES(i).addr));
--       write(L, string'(" at time "));
--       write(L, NOW);
--       writeline(output, L);

      addr <= (others => '0');

      -- Check to see if the data value read from memory equals the data value written to memory
      if (read_data /= TEST_DATA_VALUES(i).data) then
        write(L, NOW);
        write(L, string'(":Memory Test Error. Expecting="));
        write(L, to_bitvector(TEST_DATA_VALUES(i).data));
        write(L, string'(" but received="));
        write(L, to_bitvector(read_data));
        writeline(output, L);
        pass_tests := false;
      end if;

      wait for 300 ns;
    end loop;

    -- Read again one at a time (no writing)
    for i in TEST_DATA_VALUES'range loop

      wait until clk'event and clk = '0';
      -- Assert the address, data, and control signals for a read
      addr <= TEST_DATA_VALUES(i).addr;
      rw <= '1';
      mem <= '0';
      wait until clk'event and clk = '1';
      -- Read cycle is occuring.
      wait for 1 ns;
      mem <= '1';
      -- Read should be done
      wait until ready = '1';  
      wait for 1 ns;
      
      -- Print results of read
      
--       write(L, string'("Reading data="));
--       write(L, to_bitvector(read_data));
--       write(L, string'(" from location="));
--       write(L, to_bitvector(TEST_DATA_VALUES(i).addr));
--       write(L, string'(" at time "));
--       write(L, NOW);
--       writeline(output, L);

      if read_data /= TEST_DATA_VALUES(i).data then
        write(L, NOW);
        write(L, string'(":Memory Test Error. Expecting="));
        write(L, to_bitvector(TEST_DATA_VALUES(i).data));
        write(L, string'("but received="));
        write(L, to_bitvector(read_data));
        writeline(output, L);
        pass_tests := false;
      end if;      
    end loop;
    
    if pass_tests then
      write(L, string'("All memory tests PASSED!"));
      writeline(output, L);
    else
      write(L, string'("Memory tests Failed - see console for more details"));
      writeline(output, L);
    end if;
    write(L, string'("DONE!"));
    writeline(output, L);
    
    wait;
  end process;

  -- See if the ready signal is taking too long to go high.
  -- If it hasn't gone high, print a warning message.
  process(ready)
  begin
    if ready'event and ready = '1' then
      ready_has_gone_high <= '1';
    end if;
  end process;

  process
    variable L : LINE;
  begin
    wait for 200 us;
    if (ready_has_gone_high = '0') then
      write(L, string'("Warning: signal 'ready' has not gone high by time:"));
      write(L, NOW);
      write(L, string'(" Power-up sequence may be taking too much time"));
      writeline(output, L);
    end if;
    wait;
  end process;

  -- Instance sram controller  
  sramCtl : sramController
    port map(
      clk => clk,
      rst => tb_rst,
      addr => addr,
      data_m2s => write_data,
      mem => mem,
      rw => rw,
      ready => ready,
      data_valid => data_valid,
      data_s2m => read_data,
      MemAdr => sram_addr,
      RamCS => sram_ce,
      MemWR => sram_we,
      MemOE => sram_oe,
      RamUB => sram_ub,
      RamLB => sram_lb,
      MemDB => sram_data,
      RamADV => sram_adv,
      RamCRE => sram_cre,
      RamCLK => sram_clk
      );

  -- instance memory model
  memModel : entity work.cellram
  port map (
    clk => sram_clk,
    adv_n => sram_adv,
    cre => sram_cre, 
    o_wait => open,
    ce_n => sram_ce,
    oe_n => sram_oe,
    we_n => sram_we,
    lb_n => sram_lb,
    ub_n => sram_ub,
    addr => sram_addr,
    dq => sram_data
    );
  
end tb;
