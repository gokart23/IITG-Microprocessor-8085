----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:38:41 03/18/2015 
-- Design Name: 
-- Module Name:    mbr - Behavioral 
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

entity mbr is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           ram_data : inout  STD_LOGIC_VECTOR (7 downto 0);
           data_src : in STD_LOGIC;
			  en_read : in STD_LOGIC;
			  en : in  STD_LOGIC;
			  mbr_out : out STD_LOGIC_VECTOR(7 downto 0) );
end mbr;

architecture mbrArch of mbr is
signal mbrReg : STD_LOGIC_VECTOR(7 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				mbrReg <= x"00";
			elsif data_src = '1' and en_read = '1' and en = '1' then
				mbrReg <= data_bus;
			elsif data_src = '0' and en_read = '1' and en = '1' then
				mbrReg <= ram_data;
			end if;
		end if;
	end process;
	data_bus <= mbrReg when en_read = '0' and data_src = '1' and en = '1' else
					"ZZZZZZZZ";
	ram_data <= mbrReg when en_read = '0' and data_src = '0' and en = '1' else
					"ZZZZZZZZ";
	mbr_out <= mbrReg;
end mbrArch;

