--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:45:05 03/18/2015
-- Design Name:   
-- Module Name:   B:/Acad/Course Material/Semester 4/CS223/cpu_trial_one/test_pc.vhd
-- Project Name:  cpu_trial_one
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: program_counter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_pc IS
END test_pc;
 
ARCHITECTURE behavior OF test_pc IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT program_counter
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         en : IN  std_logic;
         en_read : IN  std_logic;
         inc : IN  std_logic;
         ld_high : IN  std_logic;
         addr_bus : OUT  std_logic_vector(15 downto 0);
         data_bus : IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal en : std_logic := '0';
   signal en_read : std_logic := '0';
   signal inc : std_logic := '0';
   signal ld_high : std_logic := '0';
   signal data_bus : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal addr_bus : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: program_counter PORT MAP (
          clk => clk,
          reset => reset,
          en => en,
          en_read => en_read,
          inc => inc,
          ld_high => ld_high,
          addr_bus => addr_bus,
          data_bus => data_bus
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;
		en <= '1';
		reset <= '1';
		wait for clk_period;
		reset <= '0';
--		en <= '0';
      wait for clk_period;
		-- insert stimulus here 

      wait;
   end process;

END;
