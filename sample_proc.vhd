library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
entity program_counter is
    port (
        clk, en_A, ld, inc, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus: in STD_LOGIC_VECTOR(15 downto 0)
    );
end program_counter;
architecture pcArch of program_counter is
signal pcReg: STD_LOGIC_VECTOR(15 downto 0);
begin
  process(clk) begin
  	if clk'event and clk = '1' then 
  		if reset = '1' then
  			pcReg <= x"0000";
  		elsif ld = '1' then
  			pcReg <= dBus;
  		elsif inc = '1' then
  			pcReg <= pcReg + x"0001";
  		end if;
  	end if;
  end process;
  aBus <= pcReg when en_A = '1' else "ZZZZZZZZZZZZZZZZ";
end pcArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
entity instruction_register is
    port (
        clk, en_A, en_D, ld, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0);
        load, store, add, neg, halt, branch: out STD_LOGIC;
        cbranch, iload, istore, dload, dadd: out STD_LOGIC
    );
end instruction_register;
architecture irArch of instruction_register is
signal irReg: STD_LOGIC_VECTOR(15 downto 0);
begin
  process(clk) begin
  	if clk'event and clk = '0' then
  		if reset = '1' then
  			irReg <= x"0000";
  		elsif ld = '1' then
  			irReg <= dBus;
  		end if;
  	end if;
  end process;
  
  aBus <= "0000" & irReg(11 downto 0) when en_A = '1' else
  	  "ZZZZZZZZZZZZZZZZ";
  dBus <= "0000" & irReg(11 downto 0) when en_D = '1' else
  	  "ZZZZZZZZZZZZZZZZ";
  	  
  load    <= '1' when irReg(15 downto 12) = x"0" 	else '0';
  store   <= '1' when irReg(15 downto 12) = x"1" 	else '0';
  add     <= '1' when irReg(15 downto 12) = x"2" 	else '0';
  neg     <= '1' when irReg = x"3" & x"000" 	else '0';
  halt    <= '1' when irReg = x"3" & x"001" 	else '0';
  branch  <= '1' when irReg(15 downto 12) = x"4" 	else '0';
  cbranch <= '1' when irReg(15 downto 12) = x"5" 	else '0';
  iload   <= '1' when irReg(15 downto 12) = x"6" 	else '0';
  istore  <= '1' when irReg(15 downto 12) = x"7" 	else '0';
  dload   <= '1' when irReg(15 downto 12) = x"8" 	else '0';
  dadd    <= '1' when irReg(15 downto 12) = x"9" 	else '0';  
end irArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
entity indirect_addr_register is
    port (
        clk, en_A, ld, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus:  in STD_LOGIC_VECTOR(15 downto 0)
    );
end indirect_addr_register;
architecture iarArch of indirect_addr_register is
signal iarReg: STD_LOGIC_VECTOR(15 downto 0);
begin
  process(clk) begin
  	if clk'event and clk = '1' then
  		if reset = '1' then
  			iarReg <= x"0000";
  		elsif ld = '1' then
  			iarReg <= dBus;
  		end if;
  	end if;
  end process;
  aBus <= iarReg when en_A = '1' else
  	  "ZZZZZZZZZZZZZZZZ";
end iarArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
entity accumulator is
    port (
        clk, en_D, ld, selAlu, reset: in STD_LOGIC;
        aluD: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0);
        q: out STD_LOGIC_VECTOR(15 downto 0)
    );
end accumulator;
architecture accArch of accumulator is
signal accReg: STD_LOGIC_VECTOR(15 downto 0);
begin
  process(clk) begin
  	if clk'event and clk = '1' then
  		if reset = '1' then
  			accReg <= x"0000";
  		elsif ld = '1' and selAlu = '1' then
  			accReg <= aluD;
  		elsif ld = '1' and selAlu = '0' then
  			accReg <= dBus;
  		end if;
  	end if;
  end process;
  dBus <= accReg when en_D = '1' else
  	  "ZZZZZZZZZZZZZZZZ";
  q <= accReg;
end accArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
entity alu is
    port (
        op: in STD_LOGIC_VECTOR(1 downto 0);
        accD: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: in STD_LOGIC_VECTOR(15 downto 0);
        result: out STD_LOGIC_VECTOR(15 downto 0);
        accZ: out STD_LOGIC
    );
end alu;
architecture aluArch of alu is
begin
  result <= (not accD) + x"0001" when op ="00" else
  	    accD + dBus when op ="01" else
  	    x"0000";
  accZ <= not (accD(0) or  accD(1) or  accD(2) or  accD(3) or
  	       accD(4) or  accD(5) or  accD(6) or  accD(7) or 
  	       accD(8) or  accD(9) or accD(10) or accD(11) or 
  	      accD(12) or accD(13) or accD(14) or accD(15) 
  	  );
end aluArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
entity ram is
    port (
        r_w, en, reset: in STD_LOGIC;
        aBus: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0)
    );
end ram;
architecture ramArch of ram is
type ram_typ is array(0 to 63) of STD_LOGIC_VECTOR(15 downto 0);
signal ram: ram_typ;
begin
  process(reset, r_w) begin
  	if reset = '1' then
  		ram(0) <= x"000A";
  		ram(1) <= x"3000";
  		ram(2) <= x"200B";
  		ram(3) <= x"100C";
  		ram(4) <= x"3001";
  		ram(10) <= x"0010";
  		ram(11) <= x"0011";
  		for i in 12 to 63 loop
  			ram(i) <= x"0000";
  		end loop;
 	elsif r_w'event and r_w = '0' then
  		ram(conv_integer(unsigned(aBus))) <= dBus;
  	end if;
  end process;
  dBus <= ram(conv_integer(unsigned(aBus)))
  		when reset = '0' and en = '1' and r_w = '1' else
	  "ZZZZZZZZZZZZZZZZ";
end ramArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
entity controller is
    port (
    	clk, reset:			in  STD_LOGIC;
    	mem_enD, mem_rw: 			out STD_LOGIC;
    	pc_enA, pc_ld, pc_inc: 	out STD_LOGIC;
    	
    	ir_enA, ir_enD, ir_ld: 	out STD_LOGIC;
    	ir_load, ir_store, ir_add:	in  STD_LOGIC;
	ir_neg, ir_halt, ir_branch: 	in  STD_LOGIC;
        ir_cbranch, ir_iload:			in  STD_LOGIC; 
        ir_istore, ir_mload, ir_madd:	in  STD_LOGIC;
        
    	iar_enA, iar_ld: 			out STD_LOGIC;
    	acc_enD, acc_ld, acc_selAlu: 	out STD_LOGIC;
    	alu_accZ: 			in  STD_LOGIC;
    	alu_op: 			out STD_LOGIC_VECTOR(1 downto 0)
    );
end controller;
architecture controllerArch of controller is
type state_type is (	reset_state,
			fetch0, fetch1,
			load0, load1,
			store0, store1,
			add0, add1,
			negate0, negate1,
			halt,
			branch0, branch1,
			cbranch0, cbranch1,
			iload0, iload1, iload2, iload3,
			istore0, istore1, istore2, istore3,
			mload0, mload1,
			madd0, madd1
			);
signal state: state_type;
			
begin
  process(clk) begin
  	if clk'event and clk = '1' then
  		if reset = '1' then state <= reset_state;
    		else
    			case state is
    			when reset_state => state <= fetch0;
    			when fetch0 => state <= fetch1;
	  		when fetch1 =>
	  			if ir_load = '1' then state <= load0;
	  			elsif ir_store   = '1' then state <= store0;
	  			elsif ir_add     = '1' then state <= add0;
	  			elsif ir_neg     = '1' then state <= negate0;
	  			elsif ir_halt    = '1' then state <= halt;
	  			elsif ir_branch  = '1' then state <= branch0;
	  			elsif ir_cbranch = '1' then state <= cbranch0;
	  			elsif ir_iload   = '1' then state <= iload0;
	  			elsif ir_istore  = '1' then state <= istore0;
	  			elsif ir_mload   = '1' then state <= mload0;
	  			elsif ir_madd    = '1' then state <= madd0;
	  			end if;
  			when load0 => 	state <= load1;
  			when load1 => 	state <= fetch0;
			when store0 => 	state <= store1;
	  		when store1 =>	state <= fetch0;
  		
  			when add0 => 	state <= add1;
  			when add1 => 	state <= fetch0;
  		
  			when negate0 => state <= negate1;
  			when negate1 => state <= fetch0;
  		
  			when halt => 	state <= halt;
  		
  			when branch0 => state <= branch1;	
  			when branch1 => state <= fetch0;
  			when cbranch0 => state <= cbranch1;
  			when cbranch1 => state <= fetch0;
  	
  			when iload0 => 	state <= iload1;
  			when iload1 => 	state <= iload2;
  			when iload2 => 	state <= iload3;
  			when iload3 => 	state <= fetch0;
  		
  			when istore0 => state <= istore1;
  			when istore1 => state <= istore2;
  			when istore2 =>	state <= istore3;
  			when istore3 =>	state <= fetch0;
  		
  			when mload0 => 	state <= mload1;
  			when mload1 => 	state <= fetch0;
  		
  			when madd0 => 	state <= madd1;
  			when madd1 => 	state <= fetch0;
  			when others => 	state <= halt;
  			end case;
  		end if;
  	end if;
  end process;
  process(clk) begin -- special process for memory write timing
  	if clk'event and clk = '0' then
  		if state = store0 or state = istore2 then
  			mem_rw <= '0';
  		else
  			mem_rw <= '1';
  		end if;
  	end if;
  end process;
  
  mem_enD <= '1'   when state =  fetch0 or state =  fetch1 or
  			state =   load0 or state =   load1 or
  			state =    add0 or state =    add1 or
  			state =  iload0 or state =  iload1 or
  			state =  iload2 or state =  iload3 or
  			state = istore0 or state = istore1
  		   else '0';
  pc_enA <= '1'    when state =  fetch0 or state = fetch1
  		   else '0';
  pc_ld <= '1'	   when state = branch0 or (state = cbranch0 and alu_accZ = '1')
  		   else '0';
  pc_inc <= '1'	   when state = fetch1
  		   else '0';
  ir_enA <= '1'	   when state = load0 or state = load1 or
  			state = store0 or state =  store1 or
  			state =  add0 or state =  add1 or
  			state = iload0 or state = iload1 or
  			state = istore0 or state = istore1
  		   else '0';
  ir_enD <= '1'	   when state = branch0 or state = cbranch0 or state = mload0 or
  		 	state =   madd0 or state =    madd1
  		   else '0';
  ir_ld <= '1'	   when state = fetch1
  		   else '0';
  iar_enA <= '1'   when state = iload2 or state = iload3 or
  			state = istore2 or state = istore3
  		   else '0';
  iar_ld <= '1'	   when state = iload1 or state = istore1
  		   else '0';
  acc_enD <= '1'   when state =  store0 or state =  store1 or
  			state = istore2 or state = istore3
  		   else '0';
  acc_ld <= '1'    when state =  load1 or state =   add1 or state = negate1 or
  			state = iload3 or state = mload0 or state =   madd1
  		   else '0';
  acc_selAlu <='1' when state = add1 or state = negate1 or state = madd1
  		   else '0';
  alu_op <= "01"   when state =  add0 or state =  add1 or
  			state = madd0 or state = madd1
  		   else "00";
end controllerArch;
---------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.all;
entity top_level is
    port (
        clk, reset:			in  STD_LOGIC;
        abusX: 				out STD_LOGIC_VECTOR(15 downto 0);
        dbusX: 				out STD_LOGIC_VECTOR(15 downto 0);
        mem_enDX, mem_rwX: 		out STD_LOGIC;
        pc_enAX, pc_ldX, pc_incX:	out STD_LOGIC;
        ir_enAX, ir_enDX, ir_ldX:	out STD_LOGIC;
        iar_enAX, iar_ldX:		out STD_LOGIC;
        acc_enDX, acc_ldX, acc_selAluX:	out STD_LOGIC;
        acc_QX:				out STD_LOGIC_VECTOR(15 downto 0);
        alu_accZX:			out STD_LOGIC;
        alu_opX:			out STD_LOGIC_VECTOR(1 downto 0)
    );
end top_level;
architecture topArch of top_level is
component program_counter
    port (
        clk, en_A, ld, inc, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus: in STD_LOGIC_VECTOR(15 downto 0)
    );
end component;
component instruction_register
    port (
        clk, en_A, en_D, ld, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0);
        load, store, add, neg, halt, branch: out STD_LOGIC;
        cbranch, iload, istore, dload, dadd: out STD_LOGIC
    );
end component;
component indirect_addr_register
    port (
        clk, en_A, ld, reset: in STD_LOGIC;
        aBus: out STD_LOGIC_VECTOR(15 downto 0);
        dBus:  in STD_LOGIC_VECTOR(15 downto 0)
    );
end component;
component accumulator
    port (
        clk, en_D, ld, selAlu, reset: in STD_LOGIC;
        aluD: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0);
        q: out STD_LOGIC_VECTOR(15 downto 0)
    );
end component;
component alu
    port (
        op: in STD_LOGIC_VECTOR(1 downto 0);
        accD: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: in STD_LOGIC_VECTOR(15 downto 0);
        result: out STD_LOGIC_VECTOR(15 downto 0);
        accZ: out STD_LOGIC
    );
end component;
component ram
    port (
        r_w, en, reset: in STD_LOGIC;
        aBus: in STD_LOGIC_VECTOR(15 downto 0);
        dBus: inout STD_LOGIC_VECTOR(15 downto 0)
    );
end component;
component controller
    port (
    	clk, reset:			in  STD_LOGIC;
    	mem_enD, mem_rw: 		out STD_LOGIC;
    	pc_enA, pc_ld, pc_inc: 		out STD_LOGIC;   	
    	ir_enA, ir_enD, ir_ld: 		out STD_LOGIC;
    	ir_load, ir_store, ir_add:	in  STD_LOGIC;
	ir_neg, ir_halt, ir_branch: 	in  STD_LOGIC;
        ir_cbranch, ir_iload:		in  STD_LOGIC; 
        ir_istore, ir_mload, ir_madd:	in  STD_LOGIC;       
    	iar_enA, iar_ld: 		out STD_LOGIC;
    	acc_enD, acc_ld, acc_selAlu: 	out STD_LOGIC;
    	alu_accZ: 			in  STD_LOGIC;
    	alu_op: 			out STD_LOGIC_VECTOR(1 downto 0)
    );
end component;
signal	abus: 				STD_LOGIC_VECTOR(15 downto 0);
signal	dbus: 				STD_LOGIC_VECTOR(15 downto 0);
signal	mem_enD, mem_rw: 		STD_LOGIC;
signal	pc_enA, pc_ld, pc_inc:		STD_LOGIC;
signal	ir_enA, ir_enD, ir_ld:		STD_LOGIC;
signal	ir_load, ir_store, ir_add:	STD_LOGIC;
signal	ir_negate, ir_halt, ir_branch:	STD_LOGIC;
signal	ir_cbranch, ir_iload, ir_istore:STD_LOGIC;
signal	ir_mload, ir_sub:		STD_LOGIC;
signal	iar_enA, iar_ld:		STD_LOGIC;
signal	acc_enD, acc_ld, acc_selAlu:	STD_LOGIC;
signal	acc_Q:				STD_LOGIC_VECTOR(15 downto 0);
signal	alu_op:				STD_LOGIC_VECTOR(1 downto 0);
signal	alu_accZ:			STD_LOGIC;
signal	alu_result:			STD_LOGIC_VECTOR(15 downto 0);
begin
  pc: program_counter port map(clk, pc_enA, pc_ld, pc_inc, reset, abus, dbus);
  
  ir: instruction_register port map(clk, ir_enA, ir_enD, ir_ld, reset, abus, dbus,
  					 ir_load, ir_store, ir_add,
  					 ir_negate, ir_halt, ir_branch,
  					 ir_cbranch, ir_iload, ir_istore,
  					 ir_mload, ir_sub);
  					 
  iar: indirect_addr_register port map(clk, iar_enA, iar_ld, reset, abus, dbus);
  
  acc: accumulator port map(clk, acc_enD, acc_ld, acc_selAlu, reset, alu_result, dbus, acc_Q);
  
  aluu: alu port map(alu_op, acc_Q, dbus, alu_result, alu_accZ);
  
  mem: ram port map(mem_rw, mem_enD, reset, abus, dbus);
  
  ctl: controller port map(clk, reset, mem_enD, mem_rw, pc_enA, pc_ld, pc_inc,
  				ir_enA, ir_enD, ir_ld, ir_load, ir_store, ir_add,
  				ir_negate, ir_halt, ir_branch, ir_cbranch, ir_iload,
  				ir_istore, ir_mload, ir_sub,
  				iar_enA, iar_ld, acc_enD, acc_ld, acc_selAlu,
  				alu_accZ, alu_op);
  				
   abusX <= abus;
   dbusX <= dbus;
   mem_enDX <= mem_enD;
   mem_rwX <= mem_rw;
   pc_enAX <= pc_enA;
   pc_ldX <= pc_ld;
   pc_incX <= pc_inc;
   ir_enAX <= ir_enA;
   ir_enDX <= ir_enD;
   ir_ldX <= ir_ld;
   iar_enAX <= iar_enA;
   iar_ldX <= iar_ld;
   acc_enDX <= acc_enD;
   acc_ldX <= acc_ld;
   acc_selAluX <= acc_selAlu;
   acc_QX <= acc_Q;
   alu_opX <= alu_op;
   alu_accZX <= alu_accZ;
end topArch;
 