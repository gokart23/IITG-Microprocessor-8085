----------------------------------------------------------------------------------
-- Company: IIT Guwahati
-- Engineer: Group 8
-- 
-- Create Date:    22:38:00 03/17/2015 
-- Design Name: 
-- Module Name:    program_counter - Behavioral 
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

entity program_counter is
    Port ( clk : in  STD_LOGIC;
			  reset : in STD_LOGIC;	
			  en : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           inc : in  STD_LOGIC;
           ld_high : in  STD_LOGIC;
           addr_bus : out  STD_LOGIC_VECTOR (15 downto 0);
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
			  pc_out : out STD_LOGIC_VECTOR(15 downto 0));
end program_counter;

architecture pcArch of program_counter is

signal pcReg: STD_LOGIC_VECTOR(15 downto 0);-- := x"0008";
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then
				pcReg <= x"000A"; -- given that we need to start reading from 0100H
			elsif en_read = '1' and ld_high = '0' and en = '1' then
				pcReg(7 downto 0) <= data_bus;
			elsif en_read = '1' and ld_high = '1' and en = '1' then
				pcReg(15 downto 8) <= data_bus;
			elsif inc = '1' and en = '1' then
				pcReg <= std_logic_vector(to_unsigned(to_integer(unsigned( pcReg )) + 1, 16));
			end if;
		end if;
	end process;
	addr_bus <= pcReg when en_read = '0' and en = '1' else "ZZZZZZZZZZZZZZZZ";
	pc_out <= pcReg;
end pcArch;

