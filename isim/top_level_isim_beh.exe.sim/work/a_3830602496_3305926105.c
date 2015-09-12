/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "B:/Acad/Course Material/Semester 4/CS223/cpu_trial_two/ram.vhd";
extern char *IEEE_P_3499444699;



static void work_a_3830602496_3305926105_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t12 = xsi_signal_has_event(t1);
    if (t12 == 1)
        goto LAB65;

LAB66:    t6 = (unsigned char)0;

LAB67:    if (t6 == 1)
        goto LAB62;

LAB63:    t4 = (unsigned char)0;

LAB64:    if (t4 == 1)
        goto LAB59;

LAB60:    t3 = (unsigned char)0;

LAB61:    if (t3 != 0)
        goto LAB57;

LAB58:
LAB3:    t1 = (t0 + 3720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 7480);
    t6 = (8U != 8U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 3816);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_delta(t7, 40U, 8U, 0LL);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 7488);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 80U, 8U, 0LL);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 7496);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 88U, 8U, 0LL);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 7504);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 96U, 8U, 0LL);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 7512);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 104U, 8U, 0LL);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 7520);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 112U, 8U, 0LL);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 7528);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 120U, 8U, 0LL);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 7536);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 128U, 8U, 0LL);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 7544);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 136U, 8U, 0LL);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 7552);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB23;

LAB24:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 144U, 8U, 0LL);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 7560);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB25;

LAB26:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 152U, 8U, 0LL);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 7568);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB27;

LAB28:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 160U, 8U, 0LL);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 7576);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB29;

LAB30:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 168U, 8U, 0LL);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 7584);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB31;

LAB32:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 176U, 8U, 0LL);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 7592);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB33;

LAB34:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 184U, 8U, 0LL);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 7600);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB35;

LAB36:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 192U, 8U, 0LL);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 7608);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB37;

LAB38:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 200U, 8U, 0LL);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 7616);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB39;

LAB40:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 208U, 8U, 0LL);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 7624);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB41;

LAB42:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 216U, 8U, 0LL);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 7632);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB43;

LAB44:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 224U, 8U, 0LL);
    xsi_set_current_line(218, ng0);
    t1 = (t0 + 7640);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB45;

LAB46:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 232U, 8U, 0LL);
    xsi_set_current_line(219, ng0);
    t1 = (t0 + 7648);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB47;

LAB48:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 240U, 8U, 0LL);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 7656);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB49;

LAB50:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 248U, 8U, 0LL);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 7664);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB51;

LAB52:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 256U, 8U, 0LL);
    xsi_set_current_line(222, ng0);
    t1 = (t0 + 7672);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB53;

LAB54:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 264U, 8U, 0LL);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 7680);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB55;

LAB56:    t5 = (t0 + 3816);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t5, 272U, 8U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB54;

LAB55:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB56;

LAB57:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 1832U);
    t9 = *((char **)t2);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t2 = (t0 + 6364U);
    t19 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t10, t2);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0U + t22);
    t11 = (t0 + 3816);
    t24 = (t11 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t9, 8U);
    xsi_driver_first_trans_delta(t11, t23, 8U, 0LL);
    goto LAB3;

LAB59:    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB61;

LAB62:    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    t4 = t16;
    goto LAB64;

LAB65:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t6 = t14;
    goto LAB67;

}

static void work_a_3830602496_3305926105_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(245, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t26 = (t0 + 7688);
    t28 = (t0 + 3880);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 8U);
    xsi_driver_first_trans_fast_port(t28);

LAB2:    t33 = (t0 + 3736);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 1992U);
    t13 = *((char **)t3);
    t3 = (t0 + 1672U);
    t14 = *((char **)t3);
    t3 = (t0 + 6364U);
    t15 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t14, t3);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 127, 1, t15);
    t18 = (8U * t17);
    t19 = (0 + t18);
    t20 = (t13 + t19);
    t21 = (t0 + 3880);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t20, 8U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB2;

LAB5:    t3 = (t0 + 1032U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 1512U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;
    goto LAB10;

LAB12:    goto LAB2;

}


extern void work_a_3830602496_3305926105_init()
{
	static char *pe[] = {(void *)work_a_3830602496_3305926105_p_0,(void *)work_a_3830602496_3305926105_p_1};
	xsi_register_didat("work_a_3830602496_3305926105", "isim/top_level_isim_beh.exe.sim/work/a_3830602496_3305926105.didat");
	xsi_register_executes(pe);
}
