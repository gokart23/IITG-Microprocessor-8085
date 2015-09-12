----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:26:25 03/18/2015 
-- Design Name: 
-- Module Name:    stack_pointer - Behavioral 
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

entity stack_pointer is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;			  
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           addr_bus : out  STD_LOGIC_VECTOR (15 downto 0);
           en_read : in  STD_LOGIC;
           incr_sp : in  STD_LOGIC);
end stack_pointer;

architecture spArch of stack_pointer is
signal spReg : STD_LOGIC_VECTOR(15 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				spReg <= x"00FA"; --IMP : Init stack pointer location??
			elsif en_read = '1' and incr_sp = '0' and en = '1'  then
				spReg <= std_logic_vector(SIGNED(spReg) - 1);
			elsif en_read = '1' and incr_sp = '1' and en = '1'  then
				spReg <= std_logic_vector(SIGNED(spReg) + 1);
			end if;
		end if;
	end process;
	addr_bus <= spReg when en_read = '0' and en = '1' else
					"ZZZZZZZZZZZZZZZZ";
end spArch;