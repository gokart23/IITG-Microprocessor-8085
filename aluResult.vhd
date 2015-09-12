library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;
entity aluResult is
	Port ( clk : in STD_LOGIC;
			 reset : in STD_LOGIC;
			 en_read : in STD_LOGIC;
			 alu_result : in STD_LOGIC_VECTOR(7 downto 0);
			 result : out STD_LOGIC_VECTOR(7 downto 0) );
end aluResult;

architecture aluResultArch of aluResult is
signal res : STD_LOGIC_VECTOR(7 downto 0);
begin
	process(clk) begin
		if clk'event and clk = '0' then
			if reset = '1' then
				res <= x"00";
			elsif en_read = '1' then
				res <= alu_result;
			end if;
		end if;
	end process;
	result <= res;
end aluResultArch;
