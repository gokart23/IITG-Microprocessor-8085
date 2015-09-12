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
static const char *ng0 = "B:/Acad/Course Material/Semester 4/CS223/cpu_trial_two/controller.vhd";



static void work_a_1208337864_0628438747_p_0(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned char t39;
    static char *nl0[] = {&&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB37, &&LAB38, &&LAB39, &&LAB40, &&LAB41, &&LAB42, &&LAB29, &&LAB30, &&LAB43, &&LAB44, &&LAB45, &&LAB46, &&LAB47, &&LAB48, &&LAB49};

LAB0:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 13352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 13816);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);

LAB9:    goto LAB3;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 13816);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

LAB13:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB14:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB15:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21895);
    t1 = 1;
    if (2U == 2U)
        goto LAB53;

LAB54:    t1 = 0;

LAB55:    if (t1 != 0)
        goto LAB50;

LAB52:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21903);
    t1 = 1;
    if (2U == 2U)
        goto LAB78;

LAB79:    t1 = 0;

LAB80:    if (t1 != 0)
        goto LAB76;

LAB77:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21908);
    t1 = 1;
    if (2U == 2U)
        goto LAB95;

LAB96:    t1 = 0;

LAB97:    if (t1 != 0)
        goto LAB93;

LAB94:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21910);
    t3 = 1;
    if (2U == 2U)
        goto LAB106;

LAB107:    t3 = 0;

LAB108:    if (t3 == 1)
        goto LAB103;

LAB104:    t1 = (unsigned char)0;

LAB105:    if (t1 != 0)
        goto LAB101;

LAB102:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21924);
    t3 = 1;
    if (2U == 2U)
        goto LAB162;

LAB163:    t3 = 0;

LAB164:    if (t3 == 1)
        goto LAB159;

LAB160:    t1 = (unsigned char)0;

LAB161:    if (t1 != 0)
        goto LAB157;

LAB158:
LAB51:    goto LAB11;

LAB16:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB17:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB18:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB19:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)8;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB20:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB21:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)10;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB22:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)11;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB23:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB24:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)13;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB25:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB26:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)15;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB27:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)16;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB28:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)13;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB29:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)30;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB30:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB31:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)18;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB32:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t32 = (5 - 7);
    t15 = (t32 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB185;

LAB187:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)20;
    xsi_driver_first_trans_fast(t2);

LAB186:    goto LAB11;

LAB33:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB34:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)21;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB35:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB36:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)23;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB37:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)24;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB38:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)25;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB39:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)26;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB40:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)27;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB41:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)28;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB42:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB43:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)32;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB44:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB45:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)34;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB46:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)35;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB47:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)36;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB48:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB49:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)37;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB50:    xsi_set_current_line(101, ng0);
    t13 = (t0 + 5352U);
    t14 = *((char **)t13);
    t19 = (7 - 5);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t22 = (t0 + 21897);
    t3 = 1;
    if (3U == 3U)
        goto LAB62;

LAB63:    t3 = 0;

LAB64:    if (t3 != 0)
        goto LAB59;

LAB61:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 2);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21900);
    t1 = 1;
    if (3U == 3U)
        goto LAB70;

LAB71:    t1 = 0;

LAB72:    if (t1 != 0)
        goto LAB68;

LAB69:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);

LAB60:    goto LAB51;

LAB53:    t18 = 0;

LAB56:    if (t18 < 2U)
        goto LAB57;
    else
        goto LAB55;

LAB57:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB54;

LAB58:    t18 = (t18 + 1);
    goto LAB56;

LAB59:    xsi_set_current_line(102, ng0);
    t27 = (t0 + 13816);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)6;
    xsi_driver_first_trans_fast(t27);
    goto LAB60;

LAB62:    t24 = 0;

LAB65:    if (t24 < 3U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t25 = (t13 + t24);
    t26 = (t22 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB63;

LAB67:    t24 = (t24 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(104, ng0);
    t13 = (t0 + 13816);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    *((unsigned char *)t25) = (unsigned char)9;
    xsi_driver_first_trans_fast(t13);
    goto LAB60;

LAB70:    t18 = 0;

LAB73:    if (t18 < 3U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB71;

LAB75:    t18 = (t18 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(109, ng0);
    t13 = (t0 + 5352U);
    t14 = *((char **)t13);
    t19 = (7 - 2);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t22 = (t0 + 21905);
    t3 = 1;
    if (3U == 3U)
        goto LAB87;

LAB88:    t3 = 0;

LAB89:    if (t3 != 0)
        goto LAB84;

LAB86:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)12;
    xsi_driver_first_trans_fast(t2);

LAB85:    goto LAB51;

LAB78:    t18 = 0;

LAB81:    if (t18 < 2U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB79;

LAB83:    t18 = (t18 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(110, ng0);
    t27 = (t0 + 13816);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)14;
    xsi_driver_first_trans_fast(t27);
    goto LAB85;

LAB87:    t24 = 0;

LAB90:    if (t24 < 3U)
        goto LAB91;
    else
        goto LAB89;

LAB91:    t25 = (t13 + t24);
    t26 = (t22 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB88;

LAB92:    t24 = (t24 + 1);
    goto LAB90;

LAB93:    xsi_set_current_line(115, ng0);
    t13 = (t0 + 13816);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    *((unsigned char *)t25) = (unsigned char)17;
    xsi_driver_first_trans_fast(t13);
    goto LAB51;

LAB95:    t18 = 0;

LAB98:    if (t18 < 2U)
        goto LAB99;
    else
        goto LAB97;

LAB99:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB96;

LAB100:    t18 = (t18 + 1);
    goto LAB98;

LAB101:    xsi_set_current_line(117, ng0);
    t22 = (t0 + 5352U);
    t23 = *((char **)t22);
    t24 = (7 - 5);
    t33 = (t24 * 1U);
    t34 = (0 + t33);
    t22 = (t23 + t34);
    t25 = (t0 + 21912);
    t9 = 1;
    if (3U == 3U)
        goto LAB115;

LAB116:    t9 = 0;

LAB117:    if (t9 != 0)
        goto LAB112;

LAB114:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21915);
    t3 = 1;
    if (3U == 3U)
        goto LAB126;

LAB127:    t3 = 0;

LAB128:    if (t3 == 1)
        goto LAB123;

LAB124:    t1 = (unsigned char)0;

LAB125:    if (t1 != 0)
        goto LAB121;

LAB122:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21918);
    t3 = 1;
    if (3U == 3U)
        goto LAB137;

LAB138:    t3 = 0;

LAB139:    if (t3 == 1)
        goto LAB134;

LAB135:    t1 = (unsigned char)0;

LAB136:    if (t1 != 0)
        goto LAB132;

LAB133:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21921);
    t3 = 1;
    if (3U == 3U)
        goto LAB151;

LAB152:    t3 = 0;

LAB153:    if (t3 == 1)
        goto LAB148;

LAB149:    t1 = (unsigned char)0;

LAB150:    if (t1 != 0)
        goto LAB146;

LAB147:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 13816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)29;
    xsi_driver_first_trans_fast(t2);

LAB113:    goto LAB51;

LAB103:    t13 = (t0 + 5352U);
    t14 = *((char **)t13);
    t32 = (5 - 7);
    t19 = (t32 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t6 = *((unsigned char *)t13);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB105;

LAB106:    t18 = 0;

LAB109:    if (t18 < 2U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB107;

LAB111:    t18 = (t18 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(118, ng0);
    t29 = (t0 + 13816);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t36 = (t31 + 56U);
    t37 = *((char **)t36);
    *((unsigned char *)t37) = (unsigned char)22;
    xsi_driver_first_trans_fast(t29);
    goto LAB113;

LAB115:    t35 = 0;

LAB118:    if (t35 < 3U)
        goto LAB119;
    else
        goto LAB117;

LAB119:    t27 = (t22 + t35);
    t28 = (t25 + t35);
    if (*((unsigned char *)t27) != *((unsigned char *)t28))
        goto LAB116;

LAB120:    t35 = (t35 + 1);
    goto LAB118;

LAB121:    xsi_set_current_line(120, ng0);
    t22 = (t0 + 13816);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)22;
    xsi_driver_first_trans_fast(t22);
    goto LAB113;

LAB123:    t13 = (t0 + 5512U);
    t14 = *((char **)t13);
    t32 = (0 - 7);
    t19 = (t32 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t6 = *((unsigned char *)t13);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB125;

LAB126:    t18 = 0;

LAB129:    if (t18 < 3U)
        goto LAB130;
    else
        goto LAB128;

LAB130:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB127;

LAB131:    t18 = (t18 + 1);
    goto LAB129;

LAB132:    xsi_set_current_line(122, ng0);
    t25 = (t0 + 13816);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)22;
    xsi_driver_first_trans_fast(t25);
    goto LAB113;

LAB134:    t13 = (t0 + 5512U);
    t14 = *((char **)t13);
    t32 = (0 - 7);
    t19 = (t32 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t7 = *((unsigned char *)t13);
    t9 = (t7 == (unsigned char)2);
    if (t9 == 1)
        goto LAB143;

LAB144:    t6 = (unsigned char)0;

LAB145:    t1 = t6;
    goto LAB136;

LAB137:    t18 = 0;

LAB140:    if (t18 < 3U)
        goto LAB141;
    else
        goto LAB139;

LAB141:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB138;

LAB142:    t18 = (t18 + 1);
    goto LAB140;

LAB143:    t22 = (t0 + 5512U);
    t23 = *((char **)t22);
    t38 = (3 - 7);
    t24 = (t38 * -1);
    t33 = (1U * t24);
    t34 = (0 + t33);
    t22 = (t23 + t34);
    t10 = *((unsigned char *)t22);
    t39 = (t10 == (unsigned char)2);
    t6 = t39;
    goto LAB145;

LAB146:    xsi_set_current_line(124, ng0);
    t22 = (t0 + 13816);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)22;
    xsi_driver_first_trans_fast(t22);
    goto LAB113;

LAB148:    t13 = (t0 + 5512U);
    t14 = *((char **)t13);
    t32 = (3 - 7);
    t19 = (t32 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t6 = *((unsigned char *)t13);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB150;

LAB151:    t18 = 0;

LAB154:    if (t18 < 3U)
        goto LAB155;
    else
        goto LAB153;

LAB155:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB152;

LAB156:    t18 = (t18 + 1);
    goto LAB154;

LAB157:    xsi_set_current_line(129, ng0);
    t22 = (t0 + 5352U);
    t23 = *((char **)t22);
    t24 = (7 - 4);
    t33 = (t24 * 1U);
    t34 = (0 + t33);
    t22 = (t23 + t34);
    t25 = (t0 + 21926);
    t9 = 1;
    if (2U == 2U)
        goto LAB171;

LAB172:    t9 = 0;

LAB173:    if (t9 != 0)
        goto LAB168;

LAB170:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t15 = (7 - 4);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 21928);
    t1 = 1;
    if (2U == 2U)
        goto LAB179;

LAB180:    t1 = 0;

LAB181:    if (t1 != 0)
        goto LAB177;

LAB178:
LAB169:    goto LAB51;

LAB159:    t13 = (t0 + 5352U);
    t14 = *((char **)t13);
    t32 = (5 - 7);
    t19 = (t32 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t6 = *((unsigned char *)t13);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB161;

LAB162:    t18 = 0;

LAB165:    if (t18 < 2U)
        goto LAB166;
    else
        goto LAB164;

LAB166:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB163;

LAB167:    t18 = (t18 + 1);
    goto LAB165;

LAB168:    xsi_set_current_line(130, ng0);
    t29 = (t0 + 13816);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t36 = (t31 + 56U);
    t37 = *((char **)t36);
    *((unsigned char *)t37) = (unsigned char)31;
    xsi_driver_first_trans_fast(t29);
    goto LAB169;

LAB171:    t35 = 0;

LAB174:    if (t35 < 2U)
        goto LAB175;
    else
        goto LAB173;

LAB175:    t27 = (t22 + t35);
    t28 = (t25 + t35);
    if (*((unsigned char *)t27) != *((unsigned char *)t28))
        goto LAB172;

LAB176:    t35 = (t35 + 1);
    goto LAB174;

LAB177:    xsi_set_current_line(132, ng0);
    t13 = (t0 + 13816);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    *((unsigned char *)t25) = (unsigned char)33;
    xsi_driver_first_trans_fast(t13);
    goto LAB169;

LAB179:    t18 = 0;

LAB182:    if (t18 < 2U)
        goto LAB183;
    else
        goto LAB181;

LAB183:    t11 = (t2 + t18);
    t12 = (t5 + t18);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB180;

LAB184:    t18 = (t18 + 1);
    goto LAB182;

LAB185:    xsi_set_current_line(153, ng0);
    t5 = (t0 + 13816);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)19;
    xsi_driver_first_trans_fast(t5);
    goto LAB186;

}

static void work_a_1208337864_0628438747_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned char t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned char t59;
    unsigned char t60;
    char *t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    unsigned char t66;
    unsigned char t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned char t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned char t80;
    unsigned char t81;
    char *t82;
    unsigned char t83;
    unsigned char t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;

LAB0:    xsi_set_current_line(182, ng0);
    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)4);
    if (t12 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 5672U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)6);
    t8 = t15;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5672U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)36);
    t7 = t18;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t6 = (unsigned char)0;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t30 = (t0 + 5672U);
    t31 = *((char **)t30);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)5);
    if (t33 == 1)
        goto LAB35;

LAB36:    t29 = (unsigned char)0;

LAB37:    t5 = t29;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t45 = (t0 + 5672U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)11);
    if (t48 == 1)
        goto LAB44;

LAB45:    t44 = (unsigned char)0;

LAB46:    t4 = t44;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t61 = (t0 + 5672U);
    t62 = *((char **)t61);
    t63 = *((unsigned char *)t62);
    t64 = (t63 == (unsigned char)19);
    if (t64 == 1)
        goto LAB56;

LAB57:    t61 = (t0 + 5672U);
    t65 = *((char **)t61);
    t66 = *((unsigned char *)t65);
    t67 = (t66 == (unsigned char)31);
    t60 = t67;

LAB58:    if (t60 == 1)
        goto LAB53;

LAB54:    t59 = (unsigned char)0;

LAB55:    t3 = t59;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t78 = (t0 + 5672U);
    t79 = *((char **)t78);
    t80 = *((unsigned char *)t79);
    t81 = (t80 == (unsigned char)13);
    t2 = t81;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t78 = (t0 + 5672U);
    t82 = *((char **)t78);
    t83 = *((unsigned char *)t82);
    t84 = (t83 == (unsigned char)21);
    t1 = t84;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB65:    t89 = (t0 + 13880);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    *((unsigned char *)t93) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t89);

LAB2:    t94 = (t0 + 13368);
    *((int *)t94) = 1;

LAB1:    return;
LAB3:    t78 = (t0 + 13880);
    t85 = (t78 + 56U);
    t86 = *((char **)t85);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    *((unsigned char *)t88) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t78);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t9 = (t0 + 5352U);
    t19 = *((char **)t9);
    t20 = (7 - 2);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t9 = (t19 + t22);
    t23 = (t0 + 21930);
    t25 = 1;
    if (3U == 3U)
        goto LAB29;

LAB30:    t25 = 0;

LAB31:    t6 = t25;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB29:    t26 = 0;

LAB32:    if (t26 < 3U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t27 = (t9 + t26);
    t28 = (t23 + t26);
    if (*((unsigned char *)t27) != *((unsigned char *)t28))
        goto LAB30;

LAB34:    t26 = (t26 + 1);
    goto LAB32;

LAB35:    t30 = (t0 + 5352U);
    t34 = *((char **)t30);
    t35 = (7 - 5);
    t36 = (t35 * 1U);
    t37 = (0 + t36);
    t30 = (t34 + t37);
    t38 = (t0 + 21933);
    t40 = 1;
    if (3U == 3U)
        goto LAB38;

LAB39:    t40 = 0;

LAB40:    t29 = t40;
    goto LAB37;

LAB38:    t41 = 0;

LAB41:    if (t41 < 3U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t42 = (t30 + t41);
    t43 = (t38 + t41);
    if (*((unsigned char *)t42) != *((unsigned char *)t43))
        goto LAB39;

LAB43:    t41 = (t41 + 1);
    goto LAB41;

LAB44:    t45 = (t0 + 5352U);
    t49 = *((char **)t45);
    t50 = (7 - 5);
    t51 = (t50 * 1U);
    t52 = (0 + t51);
    t45 = (t49 + t52);
    t53 = (t0 + 21936);
    t55 = 1;
    if (3U == 3U)
        goto LAB47;

LAB48:    t55 = 0;

LAB49:    t44 = t55;
    goto LAB46;

LAB47:    t56 = 0;

LAB50:    if (t56 < 3U)
        goto LAB51;
    else
        goto LAB49;

LAB51:    t57 = (t45 + t56);
    t58 = (t53 + t56);
    if (*((unsigned char *)t57) != *((unsigned char *)t58))
        goto LAB48;

LAB52:    t56 = (t56 + 1);
    goto LAB50;

LAB53:    t61 = (t0 + 5352U);
    t68 = *((char **)t61);
    t69 = (7 - 2);
    t70 = (t69 * 1U);
    t71 = (0 + t70);
    t61 = (t68 + t71);
    t72 = (t0 + 21939);
    t74 = 1;
    if (3U == 3U)
        goto LAB59;

LAB60:    t74 = 0;

LAB61:    t59 = t74;
    goto LAB55;

LAB56:    t60 = (unsigned char)1;
    goto LAB58;

LAB59:    t75 = 0;

LAB62:    if (t75 < 3U)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t76 = (t61 + t75);
    t77 = (t72 + t75);
    if (*((unsigned char *)t76) != *((unsigned char *)t77))
        goto LAB60;

LAB64:    t75 = (t75 + 1);
    goto LAB62;

LAB66:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned char t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(189, ng0);
    t6 = (t0 + 5672U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)5);
    if (t9 == 1)
        goto LAB17;

LAB18:    t6 = (t0 + 5672U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)11);
    t5 = t12;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t25 = (t0 + 5672U);
    t26 = *((char **)t25);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)19);
    if (t28 == 1)
        goto LAB29;

LAB30:    t25 = (t0 + 5672U);
    t29 = *((char **)t25);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)36);
    t24 = t31;

LAB31:    if (t24 == 1)
        goto LAB26;

LAB27:    t23 = (unsigned char)0;

LAB28:    t3 = t23;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t42 = (t0 + 5672U);
    t43 = *((char **)t42);
    t44 = *((unsigned char *)t43);
    t45 = (t44 == (unsigned char)13);
    t2 = t45;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t42 = (t0 + 5672U);
    t46 = *((char **)t42);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)21);
    t1 = t48;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB38:    t53 = (t0 + 13944);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    *((unsigned char *)t57) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t53);

LAB2:    t58 = (t0 + 13384);
    *((int *)t58) = 1;

LAB1:    return;
LAB3:    t42 = (t0 + 13944);
    t49 = (t42 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t42);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t6 = (t0 + 5352U);
    t13 = *((char **)t6);
    t14 = (7 - 5);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t6 = (t13 + t16);
    t17 = (t0 + 21942);
    t19 = 1;
    if (3U == 3U)
        goto LAB20;

LAB21:    t19 = 0;

LAB22:    t4 = t19;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t20 = 0;

LAB23:    if (t20 < 3U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t21 = (t6 + t20);
    t22 = (t17 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB21;

LAB25:    t20 = (t20 + 1);
    goto LAB23;

LAB26:    t25 = (t0 + 5352U);
    t32 = *((char **)t25);
    t33 = (7 - 2);
    t34 = (t33 * 1U);
    t35 = (0 + t34);
    t25 = (t32 + t35);
    t36 = (t0 + 21945);
    t38 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t38 = 0;

LAB34:    t23 = t38;
    goto LAB28;

LAB29:    t24 = (unsigned char)1;
    goto LAB31;

LAB32:    t39 = 0;

LAB35:    if (t39 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t40 = (t25 + t39);
    t41 = (t36 + t39);
    if (*((unsigned char *)t40) != *((unsigned char *)t41))
        goto LAB33;

LAB37:    t39 = (t39 + 1);
    goto LAB35;

LAB39:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_3(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    xsi_set_current_line(194, ng0);
    t4 = (t0 + 5672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)5);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 5672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)11);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 5672U);
    t25 = *((char **)t24);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)19);
    if (t27 == 1)
        goto LAB26;

LAB27:    t24 = (t0 + 5672U);
    t28 = *((char **)t24);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)31);
    t23 = t30;

LAB28:    if (t23 == 1)
        goto LAB23;

LAB24:    t24 = (t0 + 5672U);
    t31 = *((char **)t24);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)36);
    t22 = t33;

LAB25:    if (t22 == 1)
        goto LAB20;

LAB21:    t21 = (unsigned char)0;

LAB22:    t1 = t21;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB35:    t49 = (t0 + 14008);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    *((unsigned char *)t53) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t49);

LAB2:    t54 = (t0 + 13400);
    *((int *)t54) = 1;

LAB1:    return;
LAB3:    t44 = (t0 + 14008);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    *((unsigned char *)t48) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t44);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t4 = (t0 + 5352U);
    t11 = *((char **)t4);
    t12 = (7 - 5);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t4 = (t11 + t14);
    t15 = (t0 + 21948);
    t17 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t17 = 0;

LAB16:    t2 = t17;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t18 = 0;

LAB17:    if (t18 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t19 = (t4 + t18);
    t20 = (t15 + t18);
    if (*((unsigned char *)t19) != *((unsigned char *)t20))
        goto LAB15;

LAB19:    t18 = (t18 + 1);
    goto LAB17;

LAB20:    t24 = (t0 + 5352U);
    t34 = *((char **)t24);
    t35 = (7 - 2);
    t36 = (t35 * 1U);
    t37 = (0 + t36);
    t24 = (t34 + t37);
    t38 = (t0 + 21951);
    t40 = 1;
    if (3U == 3U)
        goto LAB29;

LAB30:    t40 = 0;

LAB31:    t21 = t40;
    goto LAB22;

LAB23:    t22 = (unsigned char)1;
    goto LAB25;

LAB26:    t23 = (unsigned char)1;
    goto LAB28;

LAB29:    t41 = 0;

LAB32:    if (t41 < 3U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t42 = (t24 + t41);
    t43 = (t38 + t41);
    if (*((unsigned char *)t42) != *((unsigned char *)t43))
        goto LAB30;

LAB34:    t41 = (t41 + 1);
    goto LAB32;

LAB36:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
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

LAB0:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)12);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)16);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 5672U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)20);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB10:    t31 = (t0 + 21954);
    t33 = (t0 + 14072);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 3U);
    xsi_driver_first_trans_fast_port(t33);

LAB2:    t38 = (t0 + 13416);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 5352U);
    t9 = *((char **)t2);
    t10 = (7 - 5);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t9 + t12);
    t13 = (t0 + 14072);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 3U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t18 = (t0 + 5352U);
    t22 = *((char **)t18);
    t23 = (7 - 4);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t18 = (t22 + t25);
    t26 = (t0 + 14072);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t18, 3U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 14136);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 13432);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 14136);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_6(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(205, ng0);
    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)1);
    if (t12 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 5672U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)9);
    t8 = t15;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5672U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)7);
    t7 = t18;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 5672U);
    t19 = *((char **)t9);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)14);
    t6 = t21;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 5672U);
    t22 = *((char **)t9);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)17);
    t5 = t24;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 5672U);
    t25 = *((char **)t9);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)22);
    t4 = t27;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 5672U);
    t28 = *((char **)t9);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)25);
    t3 = t30;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 5672U);
    t31 = *((char **)t9);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)31);
    t2 = t33;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5672U);
    t34 = *((char **)t9);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)34);
    t1 = t36;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB29:    t41 = (t0 + 14200);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 13448);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 14200);
    t37 = (t9 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB30:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_7(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    unsigned char t51;
    unsigned char t52;
    char *t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    unsigned char t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    unsigned char t66;
    unsigned char t67;
    char *t68;
    unsigned char t69;
    unsigned char t70;
    char *t71;
    unsigned char t72;
    unsigned char t73;
    char *t74;
    unsigned char t75;
    unsigned char t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    xsi_set_current_line(207, ng0);
    t19 = (t0 + 5672U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB56;

LAB57:    t19 = (t0 + 5672U);
    t23 = *((char **)t19);
    t24 = *((unsigned char *)t23);
    t25 = (t24 == (unsigned char)3);
    t18 = t25;

LAB58:    if (t18 == 1)
        goto LAB53;

LAB54:    t19 = (t0 + 5672U);
    t26 = *((char **)t19);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)10);
    t17 = t28;

LAB55:    if (t17 == 1)
        goto LAB50;

LAB51:    t19 = (t0 + 5672U);
    t29 = *((char **)t19);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)11);
    t16 = t31;

LAB52:    if (t16 == 1)
        goto LAB47;

LAB48:    t19 = (t0 + 5672U);
    t32 = *((char **)t19);
    t33 = *((unsigned char *)t32);
    t34 = (t33 == (unsigned char)7);
    t15 = t34;

LAB49:    if (t15 == 1)
        goto LAB44;

LAB45:    t19 = (t0 + 5672U);
    t35 = *((char **)t19);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)8);
    t14 = t37;

LAB46:    if (t14 == 1)
        goto LAB41;

LAB42:    t19 = (t0 + 5672U);
    t38 = *((char **)t19);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)31);
    t13 = t40;

LAB43:    if (t13 == 1)
        goto LAB38;

LAB39:    t19 = (t0 + 5672U);
    t41 = *((char **)t19);
    t42 = *((unsigned char *)t41);
    t43 = (t42 == (unsigned char)32);
    t12 = t43;

LAB40:    if (t12 == 1)
        goto LAB35;

LAB36:    t19 = (t0 + 5672U);
    t44 = *((char **)t19);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)35);
    t11 = t46;

LAB37:    if (t11 == 1)
        goto LAB32;

LAB33:    t19 = (t0 + 5672U);
    t47 = *((char **)t19);
    t48 = *((unsigned char *)t47);
    t49 = (t48 == (unsigned char)36);
    t10 = t49;

LAB34:    if (t10 == 1)
        goto LAB29;

LAB30:    t19 = (t0 + 5672U);
    t50 = *((char **)t19);
    t51 = *((unsigned char *)t50);
    t52 = (t51 == (unsigned char)15);
    t9 = t52;

LAB31:    if (t9 == 1)
        goto LAB26;

LAB27:    t19 = (t0 + 5672U);
    t53 = *((char **)t19);
    t54 = *((unsigned char *)t53);
    t55 = (t54 == (unsigned char)16);
    t8 = t55;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t19 = (t0 + 5672U);
    t56 = *((char **)t19);
    t57 = *((unsigned char *)t56);
    t58 = (t57 == (unsigned char)18);
    t7 = t58;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t19 = (t0 + 5672U);
    t59 = *((char **)t19);
    t60 = *((unsigned char *)t59);
    t61 = (t60 == (unsigned char)19);
    t6 = t61;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t19 = (t0 + 5672U);
    t62 = *((char **)t19);
    t63 = *((unsigned char *)t62);
    t64 = (t63 == (unsigned char)20);
    t5 = t64;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t19 = (t0 + 5672U);
    t65 = *((char **)t19);
    t66 = *((unsigned char *)t65);
    t67 = (t66 == (unsigned char)23);
    t4 = t67;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t19 = (t0 + 5672U);
    t68 = *((char **)t19);
    t69 = *((unsigned char *)t68);
    t70 = (t69 == (unsigned char)26);
    t3 = t70;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t19 = (t0 + 5672U);
    t71 = *((char **)t19);
    t72 = *((unsigned char *)t71);
    t73 = (t72 == (unsigned char)24);
    t2 = t73;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 5672U);
    t74 = *((char **)t19);
    t75 = *((unsigned char *)t74);
    t76 = (t75 == (unsigned char)27);
    t1 = t76;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB59:    t81 = (t0 + 14264);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t81);

LAB2:    t86 = (t0 + 13464);
    *((int *)t86) = 1;

LAB1:    return;
LAB3:    t19 = (t0 + 14264);
    t77 = (t19 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    *((unsigned char *)t80) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB29:    t9 = (unsigned char)1;
    goto LAB31;

LAB32:    t10 = (unsigned char)1;
    goto LAB34;

LAB35:    t11 = (unsigned char)1;
    goto LAB37;

LAB38:    t12 = (unsigned char)1;
    goto LAB40;

LAB41:    t13 = (unsigned char)1;
    goto LAB43;

LAB44:    t14 = (unsigned char)1;
    goto LAB46;

LAB47:    t15 = (unsigned char)1;
    goto LAB49;

LAB50:    t16 = (unsigned char)1;
    goto LAB52;

LAB53:    t17 = (unsigned char)1;
    goto LAB55;

LAB56:    t18 = (unsigned char)1;
    goto LAB58;

LAB60:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_8(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(210, ng0);
    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 5672U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)10);
    t8 = t15;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5672U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)7);
    t7 = t18;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 5672U);
    t19 = *((char **)t9);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)15);
    t6 = t21;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 5672U);
    t22 = *((char **)t9);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)18);
    t5 = t24;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 5672U);
    t25 = *((char **)t9);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)23);
    t4 = t27;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 5672U);
    t28 = *((char **)t9);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)26);
    t3 = t30;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 5672U);
    t31 = *((char **)t9);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)31);
    t2 = t33;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5672U);
    t34 = *((char **)t9);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)35);
    t1 = t36;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB29:    t41 = (t0 + 14328);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 13480);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 14328);
    t37 = (t9 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB30:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_9(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(212, ng0);
    t10 = (t0 + 5672U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB29;

LAB30:    t10 = (t0 + 5672U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)11);
    t9 = t16;

LAB31:    if (t9 == 1)
        goto LAB26;

LAB27:    t10 = (t0 + 5672U);
    t17 = *((char **)t10);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)7);
    t8 = t19;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 5672U);
    t20 = *((char **)t10);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)16);
    t7 = t22;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t10 = (t0 + 5672U);
    t23 = *((char **)t10);
    t24 = *((unsigned char *)t23);
    t25 = (t24 == (unsigned char)19);
    t6 = t25;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 5672U);
    t26 = *((char **)t10);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)20);
    t5 = t28;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t10 = (t0 + 5672U);
    t29 = *((char **)t10);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)24);
    t4 = t31;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 5672U);
    t32 = *((char **)t10);
    t33 = *((unsigned char *)t32);
    t34 = (t33 == (unsigned char)27);
    t3 = t34;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 5672U);
    t35 = *((char **)t10);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)31);
    t2 = t37;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 5672U);
    t38 = *((char **)t10);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)36);
    t1 = t40;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB32:    t45 = (t0 + 14392);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t45);

LAB2:    t50 = (t0 + 13496);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 14392);
    t41 = (t10 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB29:    t9 = (unsigned char)1;
    goto LAB31;

LAB33:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_10(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(215, ng0);
    t12 = (t0 + 5672U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)1);
    if (t15 == 1)
        goto LAB35;

LAB36:    t12 = (t0 + 5672U);
    t16 = *((char **)t12);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t11 = t18;

LAB37:    if (t11 == 1)
        goto LAB32;

LAB33:    t12 = (t0 + 5672U);
    t19 = *((char **)t12);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)17);
    t10 = t21;

LAB34:    if (t10 == 1)
        goto LAB29;

LAB30:    t12 = (t0 + 5672U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)18);
    t9 = t24;

LAB31:    if (t9 == 1)
        goto LAB26;

LAB27:    t12 = (t0 + 5672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)22);
    t8 = t27;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 5672U);
    t28 = *((char **)t12);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)23);
    t7 = t30;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t12 = (t0 + 5672U);
    t31 = *((char **)t12);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)26);
    t6 = t33;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t12 = (t0 + 5672U);
    t34 = *((char **)t12);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)25);
    t5 = t36;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 5672U);
    t37 = *((char **)t12);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)27);
    t4 = t39;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t12 = (t0 + 5672U);
    t40 = *((char **)t12);
    t41 = *((unsigned char *)t40);
    t42 = (t41 == (unsigned char)28);
    t3 = t42;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 5672U);
    t43 = *((char **)t12);
    t44 = *((unsigned char *)t43);
    t45 = (t44 == (unsigned char)29);
    t2 = t45;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 5672U);
    t46 = *((char **)t12);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)30);
    t1 = t48;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB38:    t53 = (t0 + 14456);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    *((unsigned char *)t57) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t53);

LAB2:    t58 = (t0 + 13512);
    *((int *)t58) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 14456);
    t49 = (t12 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB29:    t9 = (unsigned char)1;
    goto LAB31;

LAB32:    t10 = (unsigned char)1;
    goto LAB34;

LAB35:    t11 = (unsigned char)1;
    goto LAB37;

LAB39:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)27);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)28);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 14520);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 13528);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 14520);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)28);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 14584);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 13544);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 14584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_13(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(221, ng0);
    t6 = (t0 + 5672U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB17;

LAB18:    t6 = (t0 + 5672U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)18);
    t5 = t12;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 5672U);
    t13 = *((char **)t6);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)23);
    t4 = t15;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t6 = (t0 + 5672U);
    t16 = *((char **)t6);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)26);
    t3 = t18;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 5672U);
    t19 = *((char **)t6);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)29);
    t2 = t21;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 5672U);
    t22 = *((char **)t6);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)30);
    t1 = t24;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t29 = (t0 + 14648);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t29);

LAB2:    t34 = (t0 + 13560);
    *((int *)t34) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 14648);
    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB21:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_14(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(224, ng0);
    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 5672U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)10);
    t8 = t15;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5672U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)8);
    t7 = t18;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 5672U);
    t19 = *((char **)t9);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)15);
    t6 = t21;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 5672U);
    t22 = *((char **)t9);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)18);
    t5 = t24;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 5672U);
    t25 = *((char **)t9);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)23);
    t4 = t27;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 5672U);
    t28 = *((char **)t9);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)26);
    t3 = t30;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 5672U);
    t31 = *((char **)t9);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)32);
    t2 = t33;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5672U);
    t34 = *((char **)t9);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)35);
    t1 = t36;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB29:    t41 = (t0 + 14712);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 13576);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 14712);
    t37 = (t9 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB30:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_15(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)8);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)32);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 14776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 13592);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 14776);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_16(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned char t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned char t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned char t57;
    unsigned char t58;
    unsigned char t59;
    char *t60;
    char *t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t67;
    unsigned char t68;
    unsigned char t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned char t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned char t82;
    unsigned char t83;
    char *t84;
    unsigned char t85;
    unsigned char t86;
    char *t87;
    unsigned char t88;
    unsigned char t89;
    char *t90;
    unsigned char t91;
    unsigned char t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;

LAB0:    xsi_set_current_line(229, ng0);
    t10 = (t0 + 5672U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t10 = (t0 + 5672U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)6);
    t9 = t16;

LAB31:    if (t9 == 1)
        goto LAB26;

LAB27:    t8 = (unsigned char)0;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t28 = (t0 + 5672U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)5);
    if (t31 == 1)
        goto LAB38;

LAB39:    t27 = (unsigned char)0;

LAB40:    t7 = t27;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t43 = (t0 + 5672U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)11);
    if (t46 == 1)
        goto LAB47;

LAB48:    t42 = (unsigned char)0;

LAB49:    t6 = t42;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t60 = (t0 + 5672U);
    t61 = *((char **)t60);
    t62 = *((unsigned char *)t61);
    t63 = (t62 == (unsigned char)19);
    if (t63 == 1)
        goto LAB62;

LAB63:    t60 = (t0 + 5672U);
    t64 = *((char **)t60);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)31);
    t59 = t66;

LAB64:    if (t59 == 1)
        goto LAB59;

LAB60:    t60 = (t0 + 5672U);
    t67 = *((char **)t60);
    t68 = *((unsigned char *)t67);
    t69 = (t68 == (unsigned char)36);
    t58 = t69;

LAB61:    if (t58 == 1)
        goto LAB56;

LAB57:    t57 = (unsigned char)0;

LAB58:    t5 = t57;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t80 = (t0 + 5672U);
    t81 = *((char **)t80);
    t82 = *((unsigned char *)t81);
    t83 = (t82 == (unsigned char)9);
    t4 = t83;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t80 = (t0 + 5672U);
    t84 = *((char **)t80);
    t85 = *((unsigned char *)t84);
    t86 = (t85 == (unsigned char)7);
    t3 = t86;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t80 = (t0 + 5672U);
    t87 = *((char **)t80);
    t88 = *((unsigned char *)t87);
    t89 = (t88 == (unsigned char)14);
    t2 = t89;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t80 = (t0 + 5672U);
    t90 = *((char **)t80);
    t91 = *((unsigned char *)t90);
    t92 = (t91 == (unsigned char)12);
    t1 = t92;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB71:    t97 = (t0 + 14840);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    *((unsigned char *)t101) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t97);

LAB2:    t102 = (t0 + 13608);
    *((int *)t102) = 1;

LAB1:    return;
LAB3:    t80 = (t0 + 14840);
    t93 = (t80 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    *((unsigned char *)t96) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t80);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t10 = (t0 + 5352U);
    t17 = *((char **)t10);
    t18 = (7 - 2);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t17 + t20);
    t21 = (t0 + 21957);
    t23 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t23 = 0;

LAB34:    t8 = (!(t23));
    goto LAB28;

LAB29:    t9 = (unsigned char)1;
    goto LAB31;

LAB32:    t24 = 0;

LAB35:    if (t24 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t25 = (t10 + t24);
    t26 = (t21 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB33;

LAB37:    t24 = (t24 + 1);
    goto LAB35;

LAB38:    t28 = (t0 + 5352U);
    t32 = *((char **)t28);
    t33 = (7 - 5);
    t34 = (t33 * 1U);
    t35 = (0 + t34);
    t28 = (t32 + t35);
    t36 = (t0 + 21960);
    t38 = 1;
    if (3U == 3U)
        goto LAB41;

LAB42:    t38 = 0;

LAB43:    t27 = (!(t38));
    goto LAB40;

LAB41:    t39 = 0;

LAB44:    if (t39 < 3U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t40 = (t28 + t39);
    t41 = (t36 + t39);
    if (*((unsigned char *)t40) != *((unsigned char *)t41))
        goto LAB42;

LAB46:    t39 = (t39 + 1);
    goto LAB44;

LAB47:    t43 = (t0 + 5352U);
    t47 = *((char **)t43);
    t48 = (7 - 5);
    t49 = (t48 * 1U);
    t50 = (0 + t49);
    t43 = (t47 + t50);
    t51 = (t0 + 21963);
    t53 = 1;
    if (3U == 3U)
        goto LAB50;

LAB51:    t53 = 0;

LAB52:    t42 = (!(t53));
    goto LAB49;

LAB50:    t54 = 0;

LAB53:    if (t54 < 3U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t55 = (t43 + t54);
    t56 = (t51 + t54);
    if (*((unsigned char *)t55) != *((unsigned char *)t56))
        goto LAB51;

LAB55:    t54 = (t54 + 1);
    goto LAB53;

LAB56:    t60 = (t0 + 5352U);
    t70 = *((char **)t60);
    t71 = (7 - 2);
    t72 = (t71 * 1U);
    t73 = (0 + t72);
    t60 = (t70 + t73);
    t74 = (t0 + 21966);
    t76 = 1;
    if (3U == 3U)
        goto LAB65;

LAB66:    t76 = 0;

LAB67:    t57 = (!(t76));
    goto LAB58;

LAB59:    t58 = (unsigned char)1;
    goto LAB61;

LAB62:    t59 = (unsigned char)1;
    goto LAB64;

LAB65:    t77 = 0;

LAB68:    if (t77 < 3U)
        goto LAB69;
    else
        goto LAB67;

LAB69:    t78 = (t60 + t77);
    t79 = (t74 + t77);
    if (*((unsigned char *)t78) != *((unsigned char *)t79))
        goto LAB66;

LAB70:    t77 = (t77 + 1);
    goto LAB68;

LAB72:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_17(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned char t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(236, ng0);
    t4 = (t0 + 5672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)5);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 5672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)11);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 5672U);
    t24 = *((char **)t23);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)19);
    if (t26 == 1)
        goto LAB23;

LAB24:    t23 = (t0 + 5672U);
    t27 = *((char **)t23);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)36);
    t22 = t29;

LAB25:    if (t22 == 1)
        goto LAB20;

LAB21:    t21 = (unsigned char)0;

LAB22:    t1 = t21;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB32:    t45 = (t0 + 14904);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t45);

LAB2:    t50 = (t0 + 13624);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t40 = (t0 + 14904);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t40);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t4 = (t0 + 5352U);
    t11 = *((char **)t4);
    t12 = (7 - 5);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t4 = (t11 + t14);
    t15 = (t0 + 21969);
    t17 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t17 = 0;

LAB16:    t2 = (!(t17));
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t18 = 0;

LAB17:    if (t18 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t19 = (t4 + t18);
    t20 = (t15 + t18);
    if (*((unsigned char *)t19) != *((unsigned char *)t20))
        goto LAB15;

LAB19:    t18 = (t18 + 1);
    goto LAB17;

LAB20:    t23 = (t0 + 5352U);
    t30 = *((char **)t23);
    t31 = (7 - 2);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t23 = (t30 + t33);
    t34 = (t0 + 21972);
    t36 = 1;
    if (3U == 3U)
        goto LAB26;

LAB27:    t36 = 0;

LAB28:    t21 = (!(t36));
    goto LAB22;

LAB23:    t22 = (unsigned char)1;
    goto LAB25;

LAB26:    t37 = 0;

LAB29:    if (t37 < 3U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t38 = (t23 + t37);
    t39 = (t34 + t37);
    if (*((unsigned char *)t38) != *((unsigned char *)t39))
        goto LAB27;

LAB31:    t37 = (t37 + 1);
    goto LAB29;

LAB33:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_18(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned char t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    char *t57;
    char *t58;
    unsigned char t59;
    unsigned char t60;
    char *t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned char t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned char t76;
    unsigned char t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;

LAB0:    xsi_set_current_line(240, ng0);
    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)4);
    if (t12 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 5672U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)6);
    t8 = t15;

LAB28:    if (t8 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5672U);
    t16 = *((char **)t9);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)19);
    t7 = t18;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 5672U);
    t19 = *((char **)t9);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)31);
    t6 = t21;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 5672U);
    t22 = *((char **)t9);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)36);
    t5 = t24;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t35 = (t0 + 5672U);
    t36 = *((char **)t35);
    t37 = *((unsigned char *)t36);
    t38 = (t37 == (unsigned char)9);
    t3 = t38;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t35 = (t0 + 5672U);
    t39 = *((char **)t35);
    t40 = *((unsigned char *)t39);
    t41 = (t40 == (unsigned char)12);
    t2 = t41;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t35 = (t0 + 5672U);
    t42 = *((char **)t35);
    t43 = *((unsigned char *)t42);
    t44 = (t43 == (unsigned char)14);
    t1 = t44;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t57 = (t0 + 5672U);
    t58 = *((char **)t57);
    t59 = *((unsigned char *)t58);
    t60 = (t59 == (unsigned char)5);
    if (t60 == 1)
        goto LAB43;

LAB44:    t57 = (t0 + 5672U);
    t61 = *((char **)t57);
    t62 = *((unsigned char *)t61);
    t63 = (t62 == (unsigned char)11);
    t56 = t63;

LAB45:    if (t56 == 1)
        goto LAB40;

LAB41:    t55 = (unsigned char)0;

LAB42:    if (t55 == 1)
        goto LAB37;

LAB38:    t74 = (t0 + 5672U);
    t75 = *((char **)t74);
    t76 = *((unsigned char *)t75);
    t77 = (t76 == (unsigned char)7);
    t54 = t77;

LAB39:    if (t54 != 0)
        goto LAB35;

LAB36:
LAB52:    t87 = (t0 + 21981);
    t89 = (t0 + 14968);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memcpy(t93, t87, 3U);
    xsi_driver_first_trans_fast_port(t89);

LAB2:    t94 = (t0 + 13640);
    *((int *)t94) = 1;

LAB1:    return;
LAB3:    t35 = (t0 + 5352U);
    t45 = *((char **)t35);
    t46 = (7 - 2);
    t47 = (t46 * 1U);
    t48 = (0 + t47);
    t35 = (t45 + t48);
    t49 = (t0 + 14968);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memcpy(t53, t35, 3U);
    xsi_driver_first_trans_fast_port(t49);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (t0 + 5352U);
    t25 = *((char **)t9);
    t26 = (7 - 2);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t9 = (t25 + t28);
    t29 = (t0 + 21975);
    t31 = 1;
    if (3U == 3U)
        goto LAB29;

LAB30:    t31 = 0;

LAB31:    t4 = (!(t31));
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t8 = (unsigned char)1;
    goto LAB28;

LAB29:    t32 = 0;

LAB32:    if (t32 < 3U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t33 = (t9 + t32);
    t34 = (t29 + t32);
    if (*((unsigned char *)t33) != *((unsigned char *)t34))
        goto LAB30;

LAB34:    t32 = (t32 + 1);
    goto LAB32;

LAB35:    t74 = (t0 + 5352U);
    t78 = *((char **)t74);
    t79 = (7 - 5);
    t80 = (t79 * 1U);
    t81 = (0 + t80);
    t74 = (t78 + t81);
    t82 = (t0 + 14968);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    memcpy(t86, t74, 3U);
    xsi_driver_first_trans_fast_port(t82);
    goto LAB2;

LAB37:    t54 = (unsigned char)1;
    goto LAB39;

LAB40:    t57 = (t0 + 5352U);
    t64 = *((char **)t57);
    t65 = (7 - 5);
    t66 = (t65 * 1U);
    t67 = (0 + t66);
    t57 = (t64 + t67);
    t68 = (t0 + 21978);
    t70 = 1;
    if (3U == 3U)
        goto LAB46;

LAB47:    t70 = 0;

LAB48:    t55 = (!(t70));
    goto LAB42;

LAB43:    t56 = (unsigned char)1;
    goto LAB45;

LAB46:    t71 = 0;

LAB49:    if (t71 < 3U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t72 = (t57 + t71);
    t73 = (t68 + t71);
    if (*((unsigned char *)t72) != *((unsigned char *)t73))
        goto LAB47;

LAB51:    t71 = (t71 + 1);
    goto LAB49;

LAB53:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_19(char *t0)
{
    unsigned char t1;
    unsigned char t2;
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
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(244, ng0);
    t4 = (t0 + 5672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)31);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 5672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)32);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 5672U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)33);
    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 5672U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)34);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 15032);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 13656);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 15032);
    t17 = (t4 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_20(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)32);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)33);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 15096);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 13672);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 15096);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_21(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)33);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 15160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 13688);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 15160);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_22(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(251, ng0);
    t6 = (t0 + 5672U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)4);
    if (t9 == 1)
        goto LAB17;

LAB18:    t6 = (t0 + 5672U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)5);
    t5 = t12;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 5672U);
    t13 = *((char **)t6);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)6);
    t4 = t15;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t6 = (t0 + 5672U);
    t16 = *((char **)t6);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)7);
    t3 = t18;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 5672U);
    t19 = *((char **)t6);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)24);
    t2 = t21;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 5672U);
    t22 = *((char **)t6);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)28);
    t1 = t24;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t29 = (t0 + 15224);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t29);

LAB2:    t34 = (t0 + 13704);
    *((int *)t34) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 15224);
    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB21:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_23(char *t0)
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(253, ng0);
    t3 = (t0 + 5672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 5672U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)6);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 5672U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)24);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 15288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 13720);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 15288);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(255, ng0);

LAB3:    t1 = (t0 + 15352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1208337864_0628438747_p_25(char *t0)
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(257, ng0);
    t3 = (t0 + 5672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)12);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 5672U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)16);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 5672U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)20);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 15416);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 13736);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 15416);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}


extern void work_a_1208337864_0628438747_init()
{
	static char *pe[] = {(void *)work_a_1208337864_0628438747_p_0,(void *)work_a_1208337864_0628438747_p_1,(void *)work_a_1208337864_0628438747_p_2,(void *)work_a_1208337864_0628438747_p_3,(void *)work_a_1208337864_0628438747_p_4,(void *)work_a_1208337864_0628438747_p_5,(void *)work_a_1208337864_0628438747_p_6,(void *)work_a_1208337864_0628438747_p_7,(void *)work_a_1208337864_0628438747_p_8,(void *)work_a_1208337864_0628438747_p_9,(void *)work_a_1208337864_0628438747_p_10,(void *)work_a_1208337864_0628438747_p_11,(void *)work_a_1208337864_0628438747_p_12,(void *)work_a_1208337864_0628438747_p_13,(void *)work_a_1208337864_0628438747_p_14,(void *)work_a_1208337864_0628438747_p_15,(void *)work_a_1208337864_0628438747_p_16,(void *)work_a_1208337864_0628438747_p_17,(void *)work_a_1208337864_0628438747_p_18,(void *)work_a_1208337864_0628438747_p_19,(void *)work_a_1208337864_0628438747_p_20,(void *)work_a_1208337864_0628438747_p_21,(void *)work_a_1208337864_0628438747_p_22,(void *)work_a_1208337864_0628438747_p_23,(void *)work_a_1208337864_0628438747_p_24,(void *)work_a_1208337864_0628438747_p_25};
	xsi_register_didat("work_a_1208337864_0628438747", "isim/top_level_isim_beh.exe.sim/work/a_1208337864_0628438747.didat");
	xsi_register_executes(pe);
}
