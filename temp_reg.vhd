----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:01:12 03/17/2015 
-- Design Name: 
-- Module Name:    temp_reg - Behavioral 
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

entity temp_reg is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);			  
           ld_high : in  STD_LOGIC);
end temp_reg;

architecture tempRegArch of temp_reg is
signal tempReg : STD_LOGIC_VECTOR(15 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				tempReg <= x"0000";
			elsif (en_read = '1') and en = '1' then
				tempReg(7 downto 0) <= data_bus;
			end if;
		end if;
	end process;
	
	data_bus <= tempReg(7 downto 0) when ((en_read = '0') and en = '1') else
					"ZZZZZZZZ";
end tempRegArch;

