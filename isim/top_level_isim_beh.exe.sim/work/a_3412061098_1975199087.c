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
static const char *ng0 = "B:/Acad/Course Material/Semester 4/CS223/cpu_trial_two/reg_file.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;



static void work_a_3412061098_1975199087_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB25;

LAB26:    t1 = (unsigned char)0;

LAB27:    if (t1 != 0)
        goto LAB23;

LAB24:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 11083);
    t12 = (8U != 8U);
    if (t12 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 6784);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_delta(t13, 40U, 8U, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 11091);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 6784);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_delta(t5, 32U, 8U, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 11099);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 6784);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_delta(t5, 24U, 8U, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 11107);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 6784);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_delta(t5, 16U, 8U, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 11115);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 6784);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_delta(t5, 8U, 8U, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 11123);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 6784);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_delta(t5, 0U, 8U, 0LL);
    goto LAB9;

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

LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t2 = (t0 + 10844U);
    t18 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t11, t2);
    t19 = (t18 - 1);
    t20 = (t19 - 5);
    t21 = (t20 * -1);
    t22 = (8U * t21);
    t23 = (0U + t22);
    t13 = (t0 + 6784);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 8U);
    xsi_driver_first_trans_delta(t13, t23, 8U, 0LL);
    goto LAB9;

LAB25:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB27;

}

static void work_a_3412061098_1975199087_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 11131);
    t6 = 1;
    if (3U == 3U)
        goto LAB11;

LAB12:    t6 = 0;

LAB13:    if ((!(t6)) == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t31 = (t0 + 11134);
    t33 = (t0 + 6848);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast_port(t33);

LAB2:    t38 = (t0 + 6592);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 3112U);
    t17 = *((char **)t10);
    t10 = (t0 + 1672U);
    t18 = *((char **)t10);
    t10 = (t0 + 10844U);
    t19 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t18, t10);
    t20 = (t19 - 1);
    t21 = (t20 - 5);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, t20);
    t23 = (8U * t22);
    t24 = (0 + t23);
    t25 = (t17 + t24);
    t26 = (t0 + 6848);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t25, 8U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB2;

LAB5:    t10 = (t0 + 1352U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB7;

LAB8:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    t2 = t13;
    goto LAB10;

LAB11:    t7 = 0;

LAB14:    if (t7 < 3U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB12;

LAB16:    t7 = (t7 + 1);
    goto LAB14;

LAB18:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_2(char *t0)
{
    char t29[16];
    char t31[16];
    char t36[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t37;
    int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 11142);
    t6 = 1;
    if (3U == 3U)
        goto LAB11;

LAB12:    t6 = 0;

LAB13:    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB19:    t44 = (t0 + 11145);
    t46 = (t0 + 6912);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t44, 16U);
    xsi_driver_first_trans_fast_port(t46);

LAB2:    t51 = (t0 + 6608);
    *((int *)t51) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 3112U);
    t17 = *((char **)t10);
    t18 = (4 - 5);
    t19 = (t18 * -1);
    t20 = (8U * t19);
    t21 = (0 + t20);
    t10 = (t17 + t21);
    t22 = (t0 + 3112U);
    t23 = *((char **)t22);
    t24 = (5 - 5);
    t25 = (t24 * -1);
    t26 = (8U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t30 = ((IEEE_P_2592010699) + 4024);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 7;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 7);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t36 + 0U);
    t37 = (t33 + 0U);
    *((int *)t37) = 7;
    t37 = (t33 + 4U);
    *((int *)t37) = 0;
    t37 = (t33 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - 7);
    t35 = (t38 * -1);
    t35 = (t35 + 1);
    t37 = (t33 + 12U);
    *((unsigned int *)t37) = t35;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t10, t31, (char)97, t22, t36, (char)101);
    t35 = (8U + 8U);
    t39 = (16U != t35);
    if (t39 == 1)
        goto LAB17;

LAB18:    t37 = (t0 + 6912);
    t40 = (t37 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t28, 16U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB2;

LAB5:    t10 = (t0 + 1352U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB7;

LAB8:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    t2 = t13;
    goto LAB10;

LAB11:    t7 = 0;

LAB14:    if (t7 < 3U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB12;

LAB16:    t7 = (t7 + 1);
    goto LAB14;

LAB17:    xsi_size_not_matching(16U, t35, 0);
    goto LAB18;

LAB20:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (0 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 6976);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6624);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (1 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 7040);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6640);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (2 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 7104);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6656);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(73, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (3 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 7168);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6672);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (4 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 7232);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6688);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3412061098_1975199087_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (5 - 5);
    t4 = (t3 * -1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 7296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6704);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3412061098_1975199087_init()
{
	static char *pe[] = {(void *)work_a_3412061098_1975199087_p_0,(void *)work_a_3412061098_1975199087_p_1,(void *)work_a_3412061098_1975199087_p_2,(void *)work_a_3412061098_1975199087_p_3,(void *)work_a_3412061098_1975199087_p_4,(void *)work_a_3412061098_1975199087_p_5,(void *)work_a_3412061098_1975199087_p_6,(void *)work_a_3412061098_1975199087_p_7,(void *)work_a_3412061098_1975199087_p_8};
	xsi_register_didat("work_a_3412061098_1975199087", "isim/top_level_isim_beh.exe.sim/work/a_3412061098_1975199087.didat");
	xsi_register_executes(pe);
}
