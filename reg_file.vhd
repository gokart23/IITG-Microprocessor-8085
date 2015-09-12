----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:08:47 03/18/2015 
-- Design Name: 
-- Module Name:    reg_file - Behavioral 
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
use IEEE.std_logic_arith.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity reg_file is
    Port ( clk : in  STD_LOGIC;
			  reset : in STD_LOGIC;
			  en : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           reg_addr : in  STD_LOGIC_VECTOR (2 downto 0);
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           addr_bus : out  STD_LOGIC_VECTOR (15 downto 0);
			  regb_out : out STD_LOGIC_VECTOR (7 downto 0);
			  regc_out : out STD_LOGIC_VECTOR (7 downto 0);
			  regd_out : out STD_LOGIC_VECTOR (7 downto 0);
			  rege_out : out STD_LOGIC_VECTOR (7 downto 0);
			  regf_out : out STD_LOGIC_VECTOR (7 downto 0);
			  regg_out : out STD_LOGIC_VECTOR (7 downto 0)
);
end reg_file;

architecture regFileArch of reg_file is
type reg_file_mem is array(5 downto 0) of STD_LOGIC_VECTOR(7 downto 0);
signal reg_file : reg_file_mem;
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				reg_file(0) <= x"00"; reg_file(1) <= x"00"; reg_file(2) <= x"00"; reg_file(3) <= x"00";
				reg_file(4) <= x"00"; reg_file(5) <= x"00";
			elsif en_read = '1' and en = '1' then
				reg_file(conv_integer(unsigned(reg_addr)) - 1) <= data_bus;
			end if;
		end if;
	end process;
	
	data_bus <= reg_file(conv_integer(unsigned(reg_addr)) - 1) when reg_addr /= "111" and en_read = '0' and en = '1' else
					"ZZZZZZZZ";
				
	addr_bus <= reg_file(4) & reg_file(5) when reg_addr = "111" and en_read = '0' and en = '1' else
					"ZZZZZZZZZZZZZZZZ";
	regb_out <= reg_file(0);
	regc_out <= reg_file(1);
	regd_out <= reg_file(2);
	rege_out <= reg_file(3);
	regf_out <= reg_file(4);
	regg_out <= reg_file(5);

end regFileArch;

