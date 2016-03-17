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
static const char *ng0 = "//fs-caedm/samfire/Classes/ECEn 320/lab11/tb_sramController.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );


static void work_a_0684891692_3671711236_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t1 = (t0 + 7344);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t1, 0U, 1, t3);
    t11 = (t0 + 7344);
    xsi_driver_intertial_reject(t11, t3, t3);

LAB2:    t12 = (t0 + 7040);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0684891692_3671711236_p_1(char *t0)
{
    char t24[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    int t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = xsi_get_transient_memory(23U);
    memset(t2, 0, 23U);
    t4 = t2;
    memset(t4, (unsigned char)2, 23U);
    t5 = (t0 + 7600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 23U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(118, ng0);

LAB18:    t2 = (t0 + 7056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 7056);
    *((int *)t4) = 0;
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 13156);
    *((int *)t2) = 0;
    t4 = (t0 + 13160);
    *((int *)t4) = 3;
    t12 = 0;
    t13 = 3;

LAB20:    if (t12 <= t13)
        goto LAB21;

LAB23:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 13208);
    *((int *)t2) = 0;
    t4 = (t0 + 13212);
    *((int *)t4) = 3;
    t12 = 0;
    t13 = 3;

LAB93:    if (t12 <= t13)
        goto LAB94;

LAB96:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 4848U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    if (t10 != 0)
        goto LAB133;

LAB135:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13283);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 50;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (50 - 1);
    t18 = (t12 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 6032);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 5248U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);

LAB134:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13333);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 5;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (5 - 1);
    t18 = (t12 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 6032);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 5248U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(238, ng0);

LAB138:    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB17:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(125, ng0);

LAB26:    t5 = (t0 + 7072);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 13156);
    t12 = *((int *)t2);
    t4 = (t0 + 13160);
    t13 = *((int *)t4);
    if (t12 == t13)
        goto LAB23;

LAB92:    t16 = (t12 + 1);
    t12 = t16;
    t5 = (t0 + 13156);
    *((int *)t5) = t12;
    goto LAB20;

LAB24:    t7 = (t0 + 7072);
    *((int *)t7) = 0;
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4368U);
    t4 = *((char **)t2);
    t2 = (t0 + 13156);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 0U);
    t5 = (t4 + t21);
    t6 = (t0 + 7600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memcpy(t22, t5, 23U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4368U);
    t4 = *((char **)t2);
    t2 = (t0 + 13156);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 23U);
    t5 = (t4 + t21);
    t6 = (t0 + 7664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memcpy(t22, t5, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);

LAB33:    t2 = (t0 + 7088);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB25:    t6 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t6);
    if (t11 == 1)
        goto LAB28;

LAB29:    t10 = (unsigned char)0;

LAB30:    if (t10 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t7 = (t0 + 2792U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB30;

LAB31:    t5 = (t0 + 7088);
    *((int *)t5) = 0;
    xsi_set_current_line(140, ng0);

LAB40:    t2 = (t0 + 7104);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB32:    t4 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t4);
    if (t11 == 1)
        goto LAB35;

LAB36:    t10 = (unsigned char)0;

LAB37:    if (t10 == 1)
        goto LAB31;
    else
        goto LAB33;

LAB34:    goto LAB32;

LAB35:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t10 = t15;
    goto LAB37;

LAB38:    t5 = (t0 + 7104);
    *((int *)t5) = 0;
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(143, ng0);

LAB47:    t2 = (t0 + 7120);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB39:    t4 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t4);
    if (t11 == 1)
        goto LAB42;

LAB43:    t10 = (unsigned char)0;

LAB44:    if (t10 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB42:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB44;

LAB45:    t4 = (t0 + 7120);
    *((int *)t4) = 0;
    xsi_set_current_line(145, ng0);
    t2 = xsi_get_transient_memory(23U);
    memset(t2, 0, 23U);
    t4 = t2;
    memset(t4, (unsigned char)2, 23U);
    t5 = (t0 + 7600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 23U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    memset(t4, (unsigned char)2, 16U);
    t5 = (t0 + 7664);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(148, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB46:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB45;
    else
        goto LAB47;

LAB48:    goto LAB46;

LAB49:    xsi_set_current_line(152, ng0);

LAB55:    t2 = (t0 + 7136);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    t5 = (t0 + 7136);
    *((int *)t5) = 0;
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4368U);
    t4 = *((char **)t2);
    t2 = (t0 + 13156);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 0U);
    t5 = (t4 + t21);
    t6 = (t0 + 7600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memcpy(t22, t5, 23U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng0);

LAB62:    t2 = (t0 + 7152);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB54:    t4 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t4);
    if (t11 == 1)
        goto LAB57;

LAB58:    t10 = (unsigned char)0;

LAB59:    if (t10 == 1)
        goto LAB53;
    else
        goto LAB55;

LAB56:    goto LAB54;

LAB57:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB59;

LAB60:    t5 = (t0 + 7152);
    *((int *)t5) = 0;
    xsi_set_current_line(159, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB69:    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB61:    t4 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t4);
    if (t11 == 1)
        goto LAB64;

LAB65:    t10 = (unsigned char)0;

LAB66:    if (t10 == 1)
        goto LAB60;
    else
        goto LAB62;

LAB63:    goto LAB61;

LAB64:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t10 = t15;
    goto LAB66;

LAB67:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);

LAB73:    t2 = (t0 + 7168);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB68:    goto LAB67;

LAB70:    goto LAB68;

LAB71:    t4 = (t0 + 7168);
    *((int *)t4) = 0;
    xsi_set_current_line(163, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB77:    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB72:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB71;
    else
        goto LAB73;

LAB74:    goto LAB72;

LAB75:    xsi_set_current_line(175, ng0);
    t2 = xsi_get_transient_memory(23U);
    memset(t2, 0, 23U);
    t4 = t2;
    memset(t4, (unsigned char)2, 23U);
    t5 = (t0 + 7600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 23U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 4368U);
    t5 = *((char **)t2);
    t2 = (t0 + 13156);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 23U);
    t6 = (t5 + t21);
    t10 = 1;
    if (16U == 16U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if ((!(t10)) != 0)
        goto LAB79;

LAB81:
LAB80:    xsi_set_current_line(188, ng0);
    t3 = (300 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB76:    goto LAB75;

LAB78:    goto LAB76;

LAB79:    xsi_set_current_line(179, ng0);
    t9 = (t0 + 6032);
    t22 = (t0 + 5248U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t9, t22, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13164);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 30;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (30 - 1);
    t18 = (t16 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 4368U);
    t6 = *((char **)t5);
    t5 = (t0 + 13156);
    t16 = *((int *)t5);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 23U);
    t7 = (t6 + t21);
    t8 = (t0 + 8448);
    t9 = xsi_record_get_element_type(t8, 1);
    t22 = (t9 + 80U);
    t25 = *((char **)t22);
    t26 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t7, t25, (unsigned char)0);
    t27 = (t24 + 12U);
    t23 = *((unsigned int *)t27);
    t23 = (t23 * 1U);
    t28 = (char *)alloca(t23);
    memcpy(t28, t26, t23);
    std_textio_write2(STD_TEXTIO, t2, t4, t28, t24, (unsigned char)0, 0);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13194);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 14;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (14 - 1);
    t18 = (t16 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t5 = (t0 + 12636U);
    t7 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t6, t5, (unsigned char)0);
    t8 = (t24 + 12U);
    t18 = *((unsigned int *)t8);
    t18 = (t18 * 1U);
    t9 = (char *)alloca(t18);
    memcpy(t9, t7, t18);
    std_textio_write2(STD_TEXTIO, t2, t4, t9, t24, (unsigned char)0, 0);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6032);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 5248U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 4848U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB80;

LAB82:    t23 = 0;

LAB85:    if (t23 < 16U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t7 = (t4 + t23);
    t8 = (t6 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB83;

LAB87:    t23 = (t23 + 1);
    goto LAB85;

LAB88:    goto LAB22;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB94:    xsi_set_current_line(194, ng0);

LAB99:    t5 = (t0 + 7200);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB95:    t2 = (t0 + 13208);
    t12 = *((int *)t2);
    t4 = (t0 + 13212);
    t13 = *((int *)t4);
    if (t12 == t13)
        goto LAB96;

LAB132:    t16 = (t12 + 1);
    t12 = t16;
    t5 = (t0 + 13208);
    *((int *)t5) = t12;
    goto LAB93;

LAB97:    t7 = (t0 + 7200);
    *((int *)t7) = 0;
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4368U);
    t4 = *((char **)t2);
    t2 = (t0 + 13208);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 0U);
    t5 = (t4 + t21);
    t6 = (t0 + 7600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t22 = (t8 + 56U);
    t25 = *((char **)t22);
    memcpy(t25, t5, 23U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 7536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(199, ng0);

LAB106:    t2 = (t0 + 7216);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB98:    t6 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t6);
    if (t11 == 1)
        goto LAB101;

LAB102:    t10 = (unsigned char)0;

LAB103:    if (t10 == 1)
        goto LAB97;
    else
        goto LAB99;

LAB100:    goto LAB98;

LAB101:    t7 = (t0 + 2792U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB103;

LAB104:    t5 = (t0 + 7216);
    *((int *)t5) = 0;
    xsi_set_current_line(201, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB113:    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB105:    t4 = (t0 + 2752U);
    t11 = xsi_signal_has_event(t4);
    if (t11 == 1)
        goto LAB108;

LAB109:    t10 = (unsigned char)0;

LAB110:    if (t10 == 1)
        goto LAB104;
    else
        goto LAB106;

LAB107:    goto LAB105;

LAB108:    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t10 = t15;
    goto LAB110;

LAB111:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 7472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(204, ng0);

LAB117:    t2 = (t0 + 7232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB112:    goto LAB111;

LAB114:    goto LAB112;

LAB115:    t4 = (t0 + 7232);
    *((int *)t4) = 0;
    xsi_set_current_line(205, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, t3);

LAB121:    *((char **)t1) = &&LAB122;
    goto LAB1;

LAB116:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB115;
    else
        goto LAB117;

LAB118:    goto LAB116;

LAB119:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 4368U);
    t5 = *((char **)t2);
    t2 = (t0 + 13208);
    t16 = *((int *)t2);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 23U);
    t6 = (t5 + t21);
    t10 = 1;
    if (16U == 16U)
        goto LAB126;

LAB127:    t10 = 0;

LAB128:    if ((!(t10)) != 0)
        goto LAB123;

LAB125:
LAB124:    goto LAB95;

LAB120:    goto LAB119;

LAB122:    goto LAB120;

LAB123:    xsi_set_current_line(218, ng0);
    t22 = (t0 + 6032);
    t25 = (t0 + 5248U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t22, t25, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13216);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 30;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (30 - 1);
    t18 = (t16 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 4368U);
    t6 = *((char **)t5);
    t5 = (t0 + 13208);
    t16 = *((int *)t5);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (40U * t18);
    t20 = (0 + t19);
    t21 = (t20 + 23U);
    t7 = (t6 + t21);
    t8 = (t0 + 8448);
    t22 = xsi_record_get_element_type(t8, 1);
    t25 = (t22 + 80U);
    t26 = *((char **)t25);
    t27 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t7, t26, (unsigned char)0);
    t29 = (t24 + 12U);
    t23 = *((unsigned int *)t29);
    t23 = (t23 * 1U);
    t30 = (char *)alloca(t23);
    memcpy(t30, t27, t23);
    std_textio_write2(STD_TEXTIO, t2, t4, t30, t24, (unsigned char)0, 0);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 13246);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 13;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (13 - 1);
    t18 = (t16 * 1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 6032);
    t4 = (t0 + 5248U);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t5 = (t0 + 12636U);
    t7 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t6, t5, (unsigned char)0);
    t8 = (t24 + 12U);
    t18 = *((unsigned int *)t8);
    t18 = (t18 * 1U);
    t22 = (char *)alloca(t18);
    memcpy(t22, t7, t18);
    std_textio_write2(STD_TEXTIO, t2, t4, t22, t24, (unsigned char)0, 0);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 6032);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 5248U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 4848U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB124;

LAB126:    t23 = 0;

LAB129:    if (t23 < 16U)
        goto LAB130;
    else
        goto LAB128;

LAB130:    t7 = (t4 + t23);
    t8 = (t6 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB127;

LAB131:    t23 = (t23 + 1);
    goto LAB129;

LAB133:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6032);
    t5 = (t0 + 5248U);
    t6 = (t0 + 13259);
    t8 = (t24 + 0U);
    t25 = (t8 + 0U);
    *((int *)t25) = 1;
    t25 = (t8 + 4U);
    *((int *)t25) = 24;
    t25 = (t8 + 8U);
    *((int *)t25) = 1;
    t12 = (24 - 1);
    t18 = (t12 * 1);
    t18 = (t18 + 1);
    t25 = (t8 + 12U);
    *((unsigned int *)t25) = t18;
    std_textio_write7(STD_TEXTIO, t2, t5, t6, t24, (unsigned char)0, 0);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 6032);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 5248U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB134;

LAB136:    goto LAB2;

LAB137:    goto LAB136;

LAB139:    goto LAB137;

}

static void work_a_0684891692_3671711236_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7264);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(246, ng0);
    t4 = (t0 + 7728);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0684891692_3671711236_p_3(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(253, ng0);
    t3 = (200 * 1000000LL);
    t2 = (t0 + 6528);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 4072U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(260, ng0);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 6528);
    t7 = (t0 + 5320U);
    t8 = (t0 + 13338);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((int *)t12) = 50;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (50 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    std_textio_write7(STD_TEXTIO, t2, t7, t8, t10, (unsigned char)0, 0);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 6528);
    t4 = (t0 + 5320U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 6528);
    t4 = (t0 + 5320U);
    t7 = (t0 + 13388);
    t9 = (t10 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 1;
    t11 = (t9 + 4U);
    *((int *)t11) = 46;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t13 = (46 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t14;
    std_textio_write7(STD_TEXTIO, t2, t4, t7, t10, (unsigned char)0, 0);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 6528);
    t4 = ((STD_TEXTIO) + 1480U);
    t7 = (t0 + 5320U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t7);
    goto LAB9;

LAB11:    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_0684891692_3671711236_init()
{
	static char *pe[] = {(void *)work_a_0684891692_3671711236_p_0,(void *)work_a_0684891692_3671711236_p_1,(void *)work_a_0684891692_3671711236_p_2,(void *)work_a_0684891692_3671711236_p_3};
	xsi_register_didat("work_a_0684891692_3671711236", "isim/tb_sramController_isim_beh.exe.sim/work/a_0684891692_3671711236.didat");
	xsi_register_executes(pe);
}
