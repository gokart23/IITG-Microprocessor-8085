----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:45:42 03/17/2015 
-- Design Name: 
-- Module Name:    alu - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;
entity alu is
    Port ( op : in  STD_LOGIC_VECTOR (2 downto 0);
           acc_data : in  STD_LOGIC_VECTOR (7 downto 0);
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           result : out  STD_LOGIC_VECTOR (7 downto 0);			  
           is_zero : out  STD_LOGIC;
           is_overflow : out  STD_LOGIC;
           is_signed : out  STD_LOGIC;
           is_carry : out  STD_LOGIC);
end alu;

architecture Behavioral of alu is
signal mult : STD_LOGIC_VECTOR(15 downto 0);
signal add, sub : STD_LOGIC_VECTOR(7 downto 0);
begin	
	mult <= std_logic_vector(signed(acc_data) * signed(data_bus));
	add <= std_logic_vector(signed(acc_data) + signed(data_bus));
	sub <= std_logic_vector(signed(acc_data) - signed(data_bus));
	result <= mult(7 downto 0) when op = "010" else--add when op = "000" else --(acc_data + data_bus)
				 sub when op = "001" else
				 --mult(7 downto 0) when op = "010"; -- else
--				 std_logic_vector(signed(acc_data) / signed(data_bus)) when op = "011" else
				 --(NOT acc_data) when op = "100" else
				 --(acc_data AND data_bus) when op = "101" else
				 --(acc_data OR data_bus) when op = "110" else
				 --(acc_data XOR data_bus) when op = "111";
				 "10101010";
	-- FLAGS NOT IMPLEMENTED
	is_zero <= '1' when acc_data = x"00" else '0';
	is_overflow <= '0';
	is_signed <= '0' when (SIGNED(acc_data) > 0) else '1';
	is_carry <= '0';
end Behavioral;

