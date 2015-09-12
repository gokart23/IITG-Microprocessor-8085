----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:56:19 03/18/2015 
-- Design Name: 
-- Module Name:    controller - Behavioral 
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

entity controller is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  
			  acc_en : out  STD_LOGIC;
			  acc_rw : out STD_LOGIC;
			  acc_src : out STD_LOGIC;
			  
			  alu_op : out STD_LOGIC_VECTOR(2 downto 0);
			  
			  ir_rw : out STD_LOGIC;
			  mar_rw : out STD_LOGIC;
			  mbr_en : out STD_LOGIC;
			  mbr_rw : out STD_LOGIC;
			  mbr_src : out STD_LOGIC;
			  
			  pc_en : out STD_LOGIC;
			  pc_rw : out STD_LOGIC;
			  pc_ld : out STD_LOGIC;
			  
			  pc_inc : out STD_LOGIC;
			  
			  ram_en : out STD_LOGIC;
			  ram_rw : out STD_LOGIC;
			  
			  regf_en : out STD_LOGIC;
			  regf_rw : out STD_LOGIC;
			  regf_addr : out STD_LOGIC_VECTOR(2 downto 0);
			  
			  sp_en : out STD_LOGIC;
			  sp_rw : out STD_LOGIC;
			  sp_ld : out STD_LOGIC;
			  
			  tmp_en : out STD_LOGIC;
			  tmp_rw : out STD_LOGIC;
			  tmp_ld : out STD_LOGIC;
			  res_rw : out STD_LOGIC;
			  
           instruction : in  STD_LOGIC_VECTOR (7 downto 0);
           flags : in  STD_LOGIC_VECTOR (7 downto 0));
end controller;

architecture controllerArch of controller is
type controller_state is ( reset_state,
		fetch0, fetch1, fetch2,
		dm_rr0, dm_rr1,
		dm_mr0, dm_mr1, dm_mr2,
		dm_rm0, dm_rm1, dm_rm2,
		alu_r0, alu_r1,
		alu_m0, alu_m1, alu_m2,
		imm_cm0, imm_cm1, imm_dm0, imm_alu0, imm_alu1,
		j_st0, j_st1, j_st2, j_st2half, j_st3, j_st4, j_st5,
		j_alt0, j_alt1,
		push_st0, push_st1,
		pop_st0, pop_st1, pop_st2, pop_st3,
		halt
	);
signal state : controller_state;
begin
	process(clk) begin
		if clk'event and clk = '1' then
			if reset = '1' then state <= reset_state;
			else
				case state is
				when reset_state => state <= fetch0;
				when fetch0 => state <= fetch1;
				when fetch1 => state <= fetch2;
			when fetch2 =>
				if instruction(7 downto 6) = "00" then
					if instruction(5 downto 3) = "111" then
						state <= dm_mr0;
					elsif instruction(2 downto 0) = "111" then
						state <= dm_rm0;
					else
						state <= dm_rr0;
					end if;
				elsif instruction(7 downto 6) = "01" then
					if instruction(2 downto 0) = "111" then
						state <= alu_m0;
					else
						state <= alu_r0;
					end if;
				elsif instruction(7 downto 6) = "10" then
					state <= imm_cm0;
				elsif instruction(7 downto 6) = "11" and instruction(5) = '0' then
					if instruction(5 downto 3) = "000" then
						state <= j_st0;
					elsif instruction(5 downto 3) = "001" and flags(0) = '1' then
						state <= j_st0;
					elsif instruction(5 downto 3) = "010" and (flags(0) = '0' and flags(3) = '0') then
						state <= j_st0;
					elsif instruction(5 downto 3) = "011" and (flags(3) = '1') then
						state <= j_st0;
					else
						state <= j_alt0;
					end if;
				elsif instruction(7 downto 6) = "11" and instruction(5) = '1' then
					if instruction(4 downto 3) = "00" then
						state <= push_st0;
					elsif instruction(4 downto 3) = "01" then
						state <= pop_st0;
					end if;
				end if;
			when dm_rr0 => state <= dm_rr1;
			when dm_rr1 => state <= fetch0;
			when dm_mr0 => state <= dm_mr1;
			when dm_mr1 => state <= dm_mr2;
			when dm_mr2 => state <= fetch0;
			when dm_rm0 => state <= dm_rm1;
			when dm_rm1 => state <= dm_rm2;
			when dm_rm2 => state <= fetch0;
			when alu_r0 => state <= alu_r1;
			when alu_r1 => state <= fetch0;
			when alu_m0 => state <= alu_m1;
			when alu_m1 => state <= alu_m2;
			when alu_m2 => state <= alu_r1;
			when j_alt0 => state <= j_alt1;
			when j_alt1 => state <= fetch0;
			when imm_cm0 => state <= imm_cm1;
			when imm_cm1 =>
				if instruction(5) = '0' then
					state <= imm_dm0;
				else
					state <= imm_alu0;
				end if;
			when imm_dm0 => state <= fetch0;
			when imm_alu0 => state <= imm_alu1;
			when imm_alu1 => state <= fetch0;
			when j_st0 => state <= j_st1;
			when j_st1 => state <= j_st2;
			when j_st2 => state <= j_st2half;
			when j_st2half => state <= j_st3;
			when j_st3 => state <= j_st4;
			when j_st4 => state <= j_st5;
			when j_st5 => state <= fetch0;
			when push_st0 => state <= push_st1;
			when push_st1 => state <= fetch0;
			when pop_st0 => state <= pop_st1;
			when pop_st1 => state <= pop_st2;
			when pop_st2 => state <= pop_st3;
			when pop_st3 => state <= fetch0;
			when others => state <= halt;
				end case;
			end if;
		end if;
	end process;
--	process(clk) begin -- separate process for memory write timing
--		if clk'event and clk = 
--	end process;
	
  acc_en <= '1' when ( (state = dm_rr0 or state = dm_mr0 or state = pop_st3) and instruction(2 downto 0) = "000") 
					 or ( (state = dm_rr1) and (instruction(5 downto 3) = "000") )
					 or ( (state = dm_rm2) and (instruction(5 downto 3) = "000") )
					 or ( (state = imm_dm0 or state = push_st0) and (instruction(2 downto 0) = "000") )
					 or state = alu_r1 or state = imm_alu1
					 else 					 
				'0';
  acc_rw <= '1' when ( (state = dm_rr1 or state = dm_rm2) and instruction(5 downto 3) = "000") 
					 or ( (state = imm_dm0 or state = pop_st3) and (instruction(2 downto 0) = "000") )
					 or state = alu_r1 or state = imm_alu1
				    else 
				'0';
  acc_src <= '1' when ( (state = dm_rr1 or state = dm_rm2) and instruction(5 downto 3) = "000") 
					  or ( (state = imm_dm0 or state = push_st0 or state = pop_st3) and (instruction(2 downto 0) = "000") )
					  else 
				 '0';
  
  alu_op <= instruction(5 downto 3) when state = alu_r0 or state = alu_m2 else
				instruction(4 downto 2) when state = imm_alu0 else --or state = imm_alu1 
				"ZZZ";
  
  ir_rw <= '1' when state = fetch2 else 
			  '0';
  mar_rw <= '1' when state = fetch0 or state = dm_rm0 or state = dm_mr1 or state = alu_m0 or state = imm_cm0 or state = j_st0 or state = j_st2half or state = push_st0 or state = pop_st1 else 
				'0';
  mbr_en <= '1' when state = fetch1 or state = fetch2 or state = dm_rm1 or state = dm_rm2 or state = dm_mr1 or state = dm_mr2 or state = push_st0 or state = push_st1 or state = pop_st2 or state = pop_st3
					 or state = alu_m1 or state = alu_m2 or state = imm_cm1 or state = imm_dm0 or state = imm_alu0 or state = j_st1 or state = j_st3 or state = j_st2 or state = j_st4 else 
				'0';
  mbr_rw <= '1' when state = fetch1 or state = dm_rm1 or state = dm_mr1 or state = alu_m1 or state = imm_cm1 or state = j_st1 or state = j_st3 or state = push_st0 or state = pop_st2 else 
				'0';
  mbr_src <= '1' when state = fetch2 or state = dm_rm2 or state = dm_mr1 or state = alu_m2 or state = imm_dm0 or state = imm_alu0 or state = j_st2 or state = j_st4 or state = push_st0 or state = pop_st3 else 
				 '0';
  
  pc_en <= '1' when state = fetch0 or state = fetch1 or state = imm_cm0 or state = imm_cm1 or state = j_st0 or state = j_st1 or state = j_st3 or state = j_st2half or state = j_st4 or state = j_st5 or state = j_alt0 or state = j_alt1 else 
			  '0';
  pc_rw <= '1' when state = j_st4 or state = j_st5 else 
			  '0';
  pc_ld <= '1' when state = j_st5 else 
			  '0';
  pc_inc <= '1' when state = fetch1 or state = imm_cm1 or state = j_st1 or state = j_st3 or state = j_alt0 or state = j_alt1 else 
				'0';
  
  ram_en <= '1' when state = fetch1 or state = dm_rm1 or state = dm_mr2 or state = alu_m1 or state = imm_cm1 or state = j_st1 or state = j_st3 or state = push_st1 or state = pop_st2 else --or state = alu_r0
				'0';
  ram_rw <= '1' when state = dm_mr2 or state = push_st1 else 
				'0';
  
  regf_en <= '1' when ( (state = dm_rr0 or state = dm_mr0) and instruction(2 downto 0) /= "000") 
					  or ( (state = dm_rr1) and ( instruction(5 downto 3) /= "000") )
					  or ( (state = dm_rm2) and (instruction(5 downto 3) /= "000") )
					  or ( (state = imm_dm0 or state = push_st0 or state = pop_st3) and (instruction(2 downto 0) /= "000") )
					  or state = dm_rm0 or state = dm_mr1 or state = alu_m0 or state = alu_r0
					  else 
				 '0';
  regf_rw <= '1' when ( (state = dm_rr1 or state = dm_rm2) and instruction(5 downto 3) /= "000") 
					  or ( (state = imm_dm0 or state = pop_st3) and (instruction(2 downto 0) /= "000") )
					  else 
				 '0';
  regf_addr <= instruction(2 downto 0) when ( (state = dm_rr0 or state = dm_mr0 or state = imm_dm0 or state = push_st0 or state = pop_st3) and instruction(2 downto 0) /= "000") or state = dm_rm0 or state = alu_r0 or state = alu_m0 else
					instruction(5 downto 3) when ( (state = dm_rr1 or state = dm_rm2) and instruction(5 downto 3) /= "000") or state = dm_mr1 else					
					"ZZZ";
  
  sp_en <= '1' when state = push_st0 or state = push_st1 or state = pop_st0 or state = pop_st1 else 
			  '0';
  sp_rw <= '1' when state = push_st1 or state = pop_st0 else 
			  '0';
  sp_ld <= '1' when state = pop_st0 else 
			  '0';
  
  tmp_en <= '1' when state = dm_rr0 or state = dm_rr1 or state = dm_mr0 or state = dm_mr1 or state = j_st2 or state = j_st5 else 
				'0';
  tmp_rw <= '1' when state = dm_rr0 or state = dm_mr0 or state = j_st2 else 
				'0';
  tmp_ld <= '0';--'1' when else 
				--'0';
  res_rw <= '1' when state = alu_r0 or state = alu_m2 or state = imm_alu0 else
				'0';
end controllerArch;

