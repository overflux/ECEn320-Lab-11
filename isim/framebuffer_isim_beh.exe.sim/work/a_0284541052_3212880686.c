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
static const char *ng0 = "//fs-caedm/skguth10/Documents/ECEn320/lab11c3/vga_timing.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0284541052_3212880686_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 7896);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(27, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 7960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(28, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 8024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (t0 + 7896);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7960);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 8024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

}

static void work_a_0284541052_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8088);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 7656);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_2(char *t0)
{
    char t19[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
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
    unsigned char t17;
    unsigned char t18;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 12096U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, 799);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t15 = (t0 + 2472U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB8;

LAB9:
LAB12:    t31 = (t0 + 2952U);
    t32 = *((char **)t31);
    t31 = (t0 + 8152);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t32, 10U);
    xsi_driver_first_trans_fast(t31);

LAB2:    t37 = (t0 + 7672);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t5 = xsi_get_transient_memory(10U);
    memset(t5, 0, 10U);
    t9 = t5;
    memset(t9, (unsigned char)2, 10U);
    t10 = (t0 + 8152);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 10U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    t15 = (t0 + 2952U);
    t20 = *((char **)t15);
    t15 = (t0 + 12096U);
    t21 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t20, t15, 1);
    t22 = (t19 + 12U);
    t23 = *((unsigned int *)t22);
    t24 = (1U * t23);
    t25 = (10U != t24);
    if (t25 == 1)
        goto LAB10;

LAB11:    t26 = (t0 + 8152);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t21, 10U);
    xsi_driver_first_trans_fast(t26);
    goto LAB2;

LAB10:    xsi_size_not_matching(10U, t24, 0);
    goto LAB11;

LAB13:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_3(char *t0)
{
    char t26[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t3 = (t0 + 12112U);
    t5 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t3, 520);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t20 = (t0 + 2472U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    if (t23 == 1)
        goto LAB13;

LAB14:    t19 = (unsigned char)0;

LAB15:    if (t19 != 0)
        goto LAB11;

LAB12:
LAB18:    t39 = (t0 + 3272U);
    t40 = *((char **)t39);
    t39 = (t0 + 8216);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t40, 10U);
    xsi_driver_first_trans_fast(t39);

LAB2:    t45 = (t0 + 7688);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t12 = xsi_get_transient_memory(10U);
    memset(t12, 0, 10U);
    t13 = t12;
    memset(t13, (unsigned char)2, 10U);
    t14 = (t0 + 8216);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB5:    t6 = (t0 + 2952U);
    t10 = *((char **)t6);
    t6 = (t0 + 12096U);
    t11 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t10, t6, 799);
    t1 = t11;
    goto LAB7;

LAB8:    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;
    goto LAB10;

LAB11:    t27 = (t0 + 3272U);
    t28 = *((char **)t27);
    t27 = (t0 + 12112U);
    t29 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t26, t28, t27, 1);
    t30 = (t26 + 12U);
    t31 = *((unsigned int *)t30);
    t32 = (1U * t31);
    t33 = (10U != t32);
    if (t33 == 1)
        goto LAB16;

LAB17:    t34 = (t0 + 8216);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 10U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB13:    t20 = (t0 + 2952U);
    t24 = *((char **)t20);
    t20 = (t0 + 12096U);
    t25 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t24, t20, 799);
    t19 = t25;
    goto LAB15;

LAB16:    xsi_size_not_matching(10U, t32, 0);
    goto LAB17;

LAB19:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
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

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12096U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 639);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 8280);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 7704);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 8280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
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

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 12112U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 479);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 8344);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 7720);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 8344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
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

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12096U);
    t3 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t2, t1, 639);
    if (t3 != 0)
        goto LAB3;

LAB4:    t9 = (t0 + 3272U);
    t10 = *((char **)t9);
    t9 = (t0 + 12112U);
    t11 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t10, t9, 479);
    if (t11 != 0)
        goto LAB5;

LAB6:
LAB7:    t17 = (t0 + 8408);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 7736);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 8408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    t12 = (t0 + 8408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
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

LAB0:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 12096U);
    t4 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t2, 655);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8472);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7752);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8472);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t5 = (t0 + 12096U);
    t7 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t6, t5, 752);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
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

LAB0:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 12112U);
    t4 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t2, 489);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8536);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7768);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8536);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 3272U);
    t6 = *((char **)t5);
    t5 = (t0 + 12112U);
    t7 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t6, t5, 492);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7784);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 8664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7800);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0284541052_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(73, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 8728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7816);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0284541052_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0284541052_3212880686_p_0,(void *)work_a_0284541052_3212880686_p_1,(void *)work_a_0284541052_3212880686_p_2,(void *)work_a_0284541052_3212880686_p_3,(void *)work_a_0284541052_3212880686_p_4,(void *)work_a_0284541052_3212880686_p_5,(void *)work_a_0284541052_3212880686_p_6,(void *)work_a_0284541052_3212880686_p_7,(void *)work_a_0284541052_3212880686_p_8,(void *)work_a_0284541052_3212880686_p_9,(void *)work_a_0284541052_3212880686_p_10,(void *)work_a_0284541052_3212880686_p_11};
	xsi_register_didat("work_a_0284541052_3212880686", "isim/framebuffer_isim_beh.exe.sim/work/a_0284541052_3212880686.didat");
	xsi_register_executes(pe);
}
