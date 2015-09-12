----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:54:15 03/18/2015 
-- Design Name: 
-- Module Name:    flag_reg - Behavioral 
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

entity flag_reg is
    Port ( clk : in  STD_LOGIC;
			  reset : in  STD_LOGIC;
			  set_zero : in  STD_LOGIC;
           set_carry : in  STD_LOGIC;
           set_overflow : in  STD_LOGIC;
           set_signed : in  STD_LOGIC;
           is_zero : out  STD_LOGIC;
           is_carry : out  STD_LOGIC;
           is_overflow : out  STD_LOGIC;
           is_signed : out  STD_LOGIC);
end flag_reg;

architecture flagArch of flag_reg is
signal flagReg : STD_LOGIC_VECTOR(7 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '0' then
			if reset = '1' then
				flagReg <= x"00";			
			else
				flagReg(0) <= set_zero;
				flagReg(1) <= set_carry;
				flagReg(2) <= set_overflow;
				flagReg(3) <= set_signed;
			end if;
		end if;
	end process;
	is_zero <= flagReg(0);
	is_carry <= flagReg(1);
	is_overflow <= flagReg(2);
	is_signed <= flagReg(3);
end flagArch;

