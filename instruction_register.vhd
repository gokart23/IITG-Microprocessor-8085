----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:53:54 03/17/2015 
-- Design Name: 
-- Module Name:    instruction_register - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instruction_register is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           ir_out : out  STD_LOGIC_VECTOR (7 downto 0));
end instruction_register;

architecture irArch of instruction_register is
signal irReg: STD_LOGIC_VECTOR(7 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '0' then
			if reset = '1' then
				irReg <= x"00";
			elsif en_read = '1' then
				irReg <= data_bus;
			end if;
		end if;
	end process;
	ir_out <= irReg;
end irArch;

