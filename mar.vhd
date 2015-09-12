----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:33:01 03/18/2015 
-- Design Name: 
-- Module Name:    mar - Behavioral 
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

entity mar is
    Port ( clk : in  STD_LOGIC;
			  en_read : in  STD_LOGIC;
			  addr_bus : in  STD_LOGIC_VECTOR (15 downto 0);
           ram_addr : out  STD_LOGIC_VECTOR (15 downto 0);
			  mar_out : out STD_LOGIC_VECTOR (15 downto 0) );
end mar;

architecture marArch of mar is
signal marReg : STD_LOGIC_VECTOR(15 downto 0);
begin
	process(clk) begin		
		if clk'event and clk = '1' then
			if en_read = '1' then
				marReg <= addr_bus;
			end if;
		end if;
	end process;
	ram_addr <= marReg;
	mar_out <= marReg;
end marArch;

