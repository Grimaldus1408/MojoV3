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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sylvain-Laptop/Desktop/MojoV3/ise_files/tb_i2cMaster.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_1935422148_0556555087_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);

LAB4:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(123, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3728);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t10 = (10 * 1000LL);
    t2 = (t0 + 2900);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t10 = (10 * 1000LL);
    t2 = (t0 + 2900);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_1935422148_0556555087_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 2340U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2340U);
    t9 = *((char **)t8);
    t10 = (5 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 3764);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 3628);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1935422148_0556555087_p_2(char *t0)
{
    char t17[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t18;
    int t19;

LAB0:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3636);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(131, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 3800);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 868U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2340U);
    t2 = *((char **)t1);
    t1 = (t0 + 7240U);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t19 = (t18 + 1);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t19, 8);
    t6 = (t0 + 3800);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 8U);
    xsi_driver_first_trans_fast(t6);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(134, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t7 = t2;
    memset(t7, (unsigned char)2, 8U);
    t8 = (t0 + 3800);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

}

static void work_a_1935422148_0556555087_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3872);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 7313);
    t4 = (t0 + 3908);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 7320);
    t4 = (t0 + 3944);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4052);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(152, ng0);
    t9 = (1000 * 1000LL);
    t2 = (t0 + 3332);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);

LAB10:    t2 = (t0 + 3644);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 3644);
    *((int *)t4) = 0;
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 7328);
    t4 = (t0 + 3944);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(157, ng0);

LAB17:    t2 = (t0 + 3652);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    t3 = (t0 + 1396U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB12;

LAB13:    t10 = (unsigned char)0;

LAB14:    if (t10 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 1420U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB14;

LAB15:    t4 = (t0 + 3652);
    *((int *)t4) = 0;
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(160, ng0);

LAB24:    t2 = (t0 + 3660);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB16:    t3 = (t0 + 1396U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB19;

LAB20:    t10 = (unsigned char)0;

LAB21:    if (t10 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

LAB19:    t4 = (t0 + 1420U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB21;

LAB22:    t4 = (t0 + 3660);
    *((int *)t4) = 0;
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);

LAB31:    t2 = (t0 + 3668);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB23:    t3 = (t0 + 1396U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB26;

LAB27:    t10 = (unsigned char)0;

LAB28:    if (t10 == 1)
        goto LAB22;
    else
        goto LAB24;

LAB25:    goto LAB23;

LAB26:    t4 = (t0 + 1420U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB28;

LAB29:    t4 = (t0 + 3668);
    *((int *)t4) = 0;
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4052);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);

LAB38:    t2 = (t0 + 3676);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB30:    t3 = (t0 + 1488U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB33;

LAB34:    t10 = (unsigned char)0;

LAB35:    if (t10 == 1)
        goto LAB29;
    else
        goto LAB31;

LAB32:    goto LAB30;

LAB33:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB35;

LAB36:    t4 = (t0 + 3676);
    *((int *)t4) = 0;
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3980);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);

LAB45:    t2 = (t0 + 3684);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB37:    t3 = (t0 + 1396U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB40;

LAB41:    t10 = (unsigned char)0;

LAB42:    if (t10 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t4 = (t0 + 1420U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB42;

LAB43:    t4 = (t0 + 3684);
    *((int *)t4) = 0;
    xsi_set_current_line(169, ng0);
    t9 = (100 * 1000000LL);
    t2 = (t0 + 3332);
    xsi_process_wait(t2, t9);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB44:    t3 = (t0 + 1488U);
    t11 = xsi_signal_has_event(t3);
    if (t11 == 1)
        goto LAB47;

LAB48:    t10 = (unsigned char)0;

LAB49:    if (t10 == 1)
        goto LAB43;
    else
        goto LAB45;

LAB46:    goto LAB44;

LAB47:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t10 = t13;
    goto LAB49;

LAB50:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4124);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng0);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    goto LAB2;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

}


extern void work_a_1935422148_0556555087_init()
{
	static char *pe[] = {(void *)work_a_1935422148_0556555087_p_0,(void *)work_a_1935422148_0556555087_p_1,(void *)work_a_1935422148_0556555087_p_2,(void *)work_a_1935422148_0556555087_p_3};
	xsi_register_didat("work_a_1935422148_0556555087", "isim/tb_I2CMASTER_isim_beh.exe.sim/work/a_1935422148_0556555087.didat");
	xsi_register_executes(pe);
}
