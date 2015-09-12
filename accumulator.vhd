----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:20:32 03/17/2015 
-- Design Name: 
-- Module Name:    accumulator - Behavioral 
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

entity accumulator is
    Port ( 
			  data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           alu_data : in  STD_LOGIC_VECTOR (7 downto 0);
           state : out  STD_LOGIC_VECTOR (7 downto 0); 
			  clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;
           alu_select : in  STD_LOGIC;
           en_read : in  STD_LOGIC);
end accumulator;

architecture accArch of accumulator is
signal accReg : STD_LOGIC_VECTOR(7 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				accReg <= x"00";
			elsif en_read = '1' and alu_select = '0' and en = '1' then
				accReg <= alu_data;
			elsif en_read = '1' and alu_select = '1' and en = '1' then
				accReg <= data_bus;	
			end if;
		end if;
	end process;
--	process(alu_select, en_read, en) begin
--		if alu_select = '0' and en_read = '1' and en = '1' then
--			accReg <= alu_data;
--		end if;
--	end process;
	data_bus <= accReg when (en_read = '0' and en = '1') else 
					"ZZZZZZZZ";
	state <= accReg;
end accArch;

