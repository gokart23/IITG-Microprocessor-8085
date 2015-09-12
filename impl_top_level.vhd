--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:26:54 03/18/2015
-- Design Name:   
-- Module Name:   B:/Acad/Course Material/Semester 4/CS223/cpu_trial_one/top_level.vhd
-- Project Name:  cpu_trial_one
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: controller
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY impl_top_level IS
PORT (
	clk, reset : in STD_LOGIC;	
	led_display : out STD_LOGIC_VECTOR(7 downto 0);
	sel : in  STD_LOGIC_VECTOR(3 downto 0)
);
END impl_top_level;
 
ARCHITECTURE behavior OF impl_top_level IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
	 COMPONENT accumulator
	 PORT(
			  data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           alu_data : in  STD_LOGIC_VECTOR (7 downto 0);
           state : out  STD_LOGIC_VECTOR (7 downto 0); 
			  clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;
           alu_select : in  STD_LOGIC;
           en_read : in  STD_LOGIC
	 );	 
	 END COMPONENT;
	 
	 COMPONENT alu
	 PORT (
			  op : in  STD_LOGIC_VECTOR (2 downto 0);
           acc_data : in  STD_LOGIC_VECTOR (7 downto 0);
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           result : out  STD_LOGIC_VECTOR (7 downto 0);
           is_zero : out  STD_LOGIC;
           is_overflow : out  STD_LOGIC;
           is_signed : out  STD_LOGIC;
           is_carry : out  STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT flag_reg
	 PORT (
			  clk : in  STD_LOGIC;
			  reset : in  STD_LOGIC;
			  set_zero : in  STD_LOGIC;
           set_carry : in  STD_LOGIC;
           set_overflow : in  STD_LOGIC;
           set_signed : in  STD_LOGIC;
           is_zero : out  STD_LOGIC;
           is_carry : out  STD_LOGIC;
           is_overflow : out  STD_LOGIC;
           is_signed : out  STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT instruction_register
	 PORT (
			  clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           ir_out : out  STD_LOGIC_VECTOR (7 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT mar
	 PORT (
		clk : in  STD_LOGIC;
			  en_read : in  STD_LOGIC;
			  addr_bus : in  STD_LOGIC_VECTOR (15 downto 0);
           ram_addr : out  STD_LOGIC_VECTOR (15 downto 0);
			  mar_out : out STD_LOGIC_VECTOR (15 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT mbr
	 PORT (
		clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           ram_data : inout  STD_LOGIC_VECTOR (7 downto 0);
           data_src : in STD_LOGIC;
			  en_read : in STD_LOGIC;
			  en : in  STD_LOGIC;
			  mbr_out : out STD_LOGIC_VECTOR(7 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT program_counter
	 PORT (
		clk : in  STD_LOGIC;
			  reset : in STD_LOGIC;	
			  en : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           inc : in  STD_LOGIC;
           ld_high : in  STD_LOGIC;
           addr_bus : out  STD_LOGIC_VECTOR (15 downto 0);
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
			  pc_out : out STD_LOGIC_VECTOR (15 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT ram
	 PORT (
	 cs : in  STD_LOGIC;
			  clk: in STD_LOGIC;
			  reset : in STD_LOGIC;
           en_read : in  STD_LOGIC;
           addr_bus : in  STD_LOGIC_VECTOR (15 downto 0);
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0)
	 );
	 END COMPONENT;
	 
	 COMPONENT reg_file
	 PORT (
		 clk : in  STD_LOGIC;
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
	 END COMPONENT;
	 
	 COMPONENT stack_pointer
	 PORT (
		clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;
           data_bus : in  STD_LOGIC_VECTOR (7 downto 0);
           addr_bus : out  STD_LOGIC_VECTOR (15 downto 0);
           en_read : in  STD_LOGIC;
           incr_sp : in  STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT temp_reg
	 PORT (
		clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  en : in  STD_LOGIC;
           en_read : in  STD_LOGIC;
           data_bus : inout  STD_LOGIC_VECTOR (7 downto 0);
           ld_high : in  STD_LOGIC
	 );
	 END COMPONENT;
	 
	 COMPONENT aluResult
	 PORT (
		clk : in STD_LOGIC;
			reset : in STD_LOGIC;
			en_read : in STD_LOGIC;
			 alu_result : in STD_LOGIC_VECTOR(7 downto 0);
			 result : out STD_LOGIC_VECTOR(7 downto 0)
	 );
	 END COMPONENT;
	 
    COMPONENT controller
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         acc_en : OUT  std_logic;
         acc_rw : OUT  std_logic;
         acc_src : OUT  std_logic;
         alu_op : OUT  std_logic_vector(2 downto 0);
         ir_rw : OUT  std_logic;
         mar_rw : OUT  std_logic;
         mbr_en : OUT  std_logic;
         mbr_rw : OUT  std_logic;
         mbr_src : OUT  std_logic;
         pc_en : OUT  std_logic;
         pc_rw : OUT  std_logic;
         pc_ld : OUT  std_logic;
         pc_inc : OUT  std_logic;
         ram_en : OUT  std_logic;
         ram_rw : OUT  std_logic;
         regf_en : OUT  std_logic;
         regf_rw : OUT  std_logic;
         regf_addr : OUT  std_logic_vector(2 downto 0);
         sp_en : OUT  std_logic;
         sp_rw : OUT  std_logic;
         sp_ld : OUT  std_logic;
         tmp_en : OUT  std_logic;
         tmp_rw : OUT  std_logic;
         tmp_ld : OUT  std_logic;
			res_rw : OUT std_logic;
         instruction : IN  std_logic_vector(7 downto 0);
         flags : IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal addr_bus : std_logic_vector(15 downto 0);
	signal data_bus : std_logic_vector(7 downto 0);
	signal alu_to_buffer : std_logic_vector(7 downto 0);
	signal state : std_logic_vector(7 downto 0);
	signal ram_addr : std_logic_vector(15 downto 0);
	signal ram_data : std_logic_vector(7 downto 0);
	signal buffer_to_acc : std_logic_vector(7 downto 0);
   signal instruction : std_logic_vector(7 downto 0) := (others => '0');
   signal flags : std_logic_vector(7 downto 0) := (others => '0');
	signal mar_out : std_logic_vector(15 downto 0);
	signal mbr_out : std_logic_vector(7 downto 0);
	signal pc_out : std_logic_vector(15 downto 0);
	signal regb_out : STD_LOGIC_VECTOR (7 downto 0);
	signal regc_out : STD_LOGIC_VECTOR (7 downto 0);
	signal regd_out : STD_LOGIC_VECTOR (7 downto 0);
	signal rege_out : STD_LOGIC_VECTOR (7 downto 0);
	signal regf_out : STD_LOGIC_VECTOR (7 downto 0);
	signal regg_out : STD_LOGIC_VECTOR (7 downto 0);

 	--Outputs
	signal acc_en : std_logic;
   signal acc_rw : std_logic;
   signal acc_src : std_logic;
   signal alu_op : std_logic_vector(2 downto 0);
	signal is_zero, is_overflow, is_signed, is_carry : std_logic;
   signal ir_rw : std_logic;
   signal mar_rw : std_logic := '0';
   signal mbr_en : std_logic;
   signal mbr_rw : std_logic;
   signal mbr_src : std_logic;
   signal pc_en : std_logic;
   signal pc_rw : std_logic;
   signal pc_ld : std_logic;
   signal pc_inc : std_logic;
   signal ram_en : std_logic;
   signal ram_rw : std_logic;
   signal regf_en : std_logic;
   signal regf_rw : std_logic;
   signal regf_addr : std_logic_vector(2 downto 0);
   signal sp_en : std_logic;
   signal sp_rw : std_logic;
   signal sp_ld : std_logic;
   signal tmp_en : std_logic;
   signal tmp_rw : std_logic;
   signal tmp_ld : std_logic;
	signal res_rw : std_logic;

   -- Clock period definitions
   --constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   acc : accumulator PORT MAP (
		data_bus,
		buffer_to_acc,
		state,
		clk,
		reset,
		acc_en,
		acc_src,
		acc_rw
	);
	
	alUnit : alu PORT MAP(
	   alu_op,
		state,
		data_bus,
		alu_to_buffer,
		is_zero,
		is_overflow,
		is_signed,
		is_carry
	);
	
	resultReg : aluResult PORT MAP(
		clk,
		reset,
		res_rw,
		alu_to_buffer,
		buffer_to_acc
	);
	
	flagReg : flag_reg PORT MAP(
		clk,
		reset,
		is_zero,
		is_carry,
		is_overflow,
		is_signed,
		flags(0),
		flags(1),
		flags(2),
		flags(3)
	);
	
	ir : instruction_register PORT MAP(
		clk,
		reset,
		ir_rw,
		data_bus,
		instruction
	);
	
	maReg : mar PORT MAP(
		clk,
		mar_rw,
		addr_bus,
		ram_addr,
		mar_out
	);
	
	mbReg : mbr PORT MAP(
		clk,
		reset,
		data_bus,
		ram_data,
		mbr_src,
		mbr_rw,
		mbr_en,
		mbr_out
	);
	
	pc : program_counter PORT MAP(
		clk,
		reset,
		pc_en,
		pc_rw,
		pc_inc,
		pc_ld,
		addr_bus,
		data_bus,
		pc_out
	);
	
	mem : ram PORT MAP(
		ram_en,
		clk,
		reset,
		ram_rw,
		ram_addr,
		ram_data
	);
	
	regf : reg_file PORT MAP(
		clk,
		reset,
		regf_en,
		regf_rw,
		regf_addr,
		data_bus,
		addr_bus,
		regb_out,
		regc_out,
		regd_out,
		rege_out,
		regf_out,
		regg_out
	);
	
	sp : stack_pointer PORT MAP(
		clk,
		reset,
		sp_en,
		data_bus,
		addr_bus,
		sp_rw,
		sp_ld
	);
	
	tmp : temp_reg PORT MAP(
		clk,
		reset,
		tmp_en,
		tmp_rw,
		data_bus,
		tmp_ld
	);
	
	ctl: controller PORT MAP (
          clk => clk,
          reset => reset,
          acc_en => acc_en,
          acc_rw => acc_rw,
          acc_src => acc_src,
          alu_op => alu_op,
          ir_rw => ir_rw,
          mar_rw => mar_rw,
          mbr_en => mbr_en,
          mbr_rw => mbr_rw,
          mbr_src => mbr_src,
          pc_en => pc_en,
          pc_rw => pc_rw,
          pc_ld => pc_ld,
          pc_inc => pc_inc,
          ram_en => ram_en,
          ram_rw => ram_rw,
          regf_en => regf_en,
          regf_rw => regf_rw,
          regf_addr => regf_addr,
          sp_en => sp_en,
          sp_rw => sp_rw,
          sp_ld => sp_ld,
          tmp_en => tmp_en,
          tmp_rw => tmp_rw,
          tmp_ld => tmp_ld,
			 res_rw => res_rw,
          instruction => instruction,
          flags => flags
        );
		  
		  process(clk) begin
			if clk'event and clk = '1' then
				flags(7 downto 4) <= "0000";
				  case sel is				  
				  when "0000" => led_display <= instruction;
				  when "0001" => led_display <= mar_out(7 downto 0);
				  when "0010" => led_display <= mar_out(15 downto 8);
				  when "0011" => led_display <= pc_out(7 downto 0);
				  when "0100" => led_display <= pc_out(15 downto 8);
				  when "0101" => led_display <= mbr_out;
				  when "1000" => led_display <= state;
				  when "1001" => led_display <= regb_out;
				  when "1010" => led_display <= regc_out;
				  when "1011" => led_display <= regd_out;
				  when "1100" => led_display <= rege_out;
				  when "1101" => led_display <= regf_out;
				  when "1110" => led_display <= regg_out;			  
--				  when "0000" => led_display <= "00000000";--state;
--				  when "1000" => led_display <= "11111111";--instruction;
--				  when "0001" => led_display <= "00011101";--mar_out(7 downto 0);
--				  when "0010" => led_display <= "00000000";--mar_out(15 downto 8);
--				  when "0011" => led_display <= "00011110";--pc_out(7 downto 0);
--				  when "0100" => led_display <= "00000000";--pc_out(15 downto 8);
--				  when "0101" => led_display <= "11111111";--mbr_out;
--				  when "0110" => led_display <= "00000101";--regb_out;
--				  when "0111" => led_display <= "00000000";--regc_out;
--				  when "1001" => led_display <= "00001111";--regd_out;
--				  when "1010" => led_display <= "00000000";--rege_out;
--				  when "1011" => led_display <= "00000001";--regf_out;
--				  when "1100" => led_display <= "00000001";--regg_out;
--				  when "0001" => led_display <= mem_valrw1;
--				  when "0010" => led_display <= mem_valrw2;
--				  when "0011" => led_display <= mem_valrw3;
--				  when "0100" => led_display <= mem_valrw4;
--				  when "0101" => led_display <= mem_valrw5;
--				  when "0110" => led_display <= rega_val;
--				  when "0111" => led_display <= regb_val;
--				  when "1001" => led_display <= mar_val(15 downto 8);
--				  when "1010" => led_display <= mar_val(7 downto 0);
				  when others => led_display <= "10101010";
				  end case;
			end if;
		  end process;

--		process(clk, sel(0)) begin
--			if clk'event and clk = '1' and sel(0) = '1' then
--				led_display <= instruction;
--			end if;
--		end process;
		  
END;
