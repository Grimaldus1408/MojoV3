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
static const char *ng0 = "C:/Users/Sylvain-Laptop/Desktop/MojoV3/ise_files/i2c_ram_interface.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_2695113304_3212880686_p_0(char *t0)
{
    char t23[16];
    char t63[16];
    char t64[16];
    char t65[16];
    char t66[16];
    char t68[16];
    char t73[16];
    char t75[16];
    char t80[16];
    char t82[16];
    char t88[16];
    char t90[16];
    char t94[16];
    char t101[16];
    char t103[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    int t52;
    int t53;
    int t54;
    int t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    char *t87;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t102;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    static char *nl0[] = {&&LAB15, &&LAB17, &&LAB16, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB25, &&LAB22, &&LAB23, &&LAB24};

LAB0:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4536);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 1788U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 4588);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t4 = (t0 + 2616U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)0);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5128);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2156U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5164);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 2064U);
    t4 = *((char **)t2);
    t2 = (t0 + 4984);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 3U);
    xsi_driver_first_trans_delta(t2, 5U, 3U, 0LL);
    goto LAB3;

LAB15:    xsi_set_current_line(140, ng0);
    t5 = (t0 + 10080);
    t12 = (t0 + 4624);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 32U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 10112);
    t5 = (t0 + 4660);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 10116);
    t5 = (t0 + 4696);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 10148);
    t5 = (t0 + 4732);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 10180);
    t5 = (t0 + 4768);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 10212);
    t5 = (t0 + 4804);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 10220);
    t5 = (t0 + 4840);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4876);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4912);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4948);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10227);
    t1 = (5U != 5U);
    if (t1 == 1)
        goto LAB26;

LAB27:    t5 = (t0 + 4984);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 5U);
    xsi_driver_first_trans_delta(t5, 0U, 5U, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 10232);
    t5 = (t0 + 4624);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 10264);
    t5 = (t0 + 4660);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4948);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB17:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB18:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 4768);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t19 = (1 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB19:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB20:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 4732);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t20 = (31 - 6);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t5 = (t23 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 6;
    t9 = (t5 + 4U);
    *((int *)t9) = 4;
    t9 = (t5 + 8U);
    *((int *)t9) = -1;
    t19 = (4 - 6);
    t24 = (t19 * -1);
    t24 = (t24 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t24;
    t25 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t23);
    t1 = (t25 > 4);
    if (t1 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t20 = (31 - 6);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t5 = (t23 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 6;
    t9 = (t5 + 4U);
    *((int *)t9) = 4;
    t9 = (t5 + 8U);
    *((int *)t9) = -1;
    t19 = (4 - 6);
    t24 = (t19 * -1);
    t24 = (t24 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t24;
    t25 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t23);
    t1 = (t25 == 0);
    if (t1 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t20 = (31 - 6);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t5 = (t23 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 6;
    t9 = (t5 + 4U);
    *((int *)t9) = 4;
    t9 = (t5 + 8U);
    *((int *)t9) = -1;
    t19 = (4 - 6);
    t24 = (t19 * -1);
    t24 = (t24 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t24;
    t25 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t23);
    t9 = (t0 + 5020);
    t12 = (t9 + 32U);
    t15 = *((char **)t12);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = t25;
    xsi_driver_first_trans_fast(t9);

LAB32:    goto LAB14;

LAB21:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4876);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4912);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5056);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t20 = (31 - 14);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t5 = (t0 + 4840);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t20 = (31 - 23);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t5 = (t0 + 4804);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB40;

LAB41:    t1 = (unsigned char)0;

LAB42:    if (t1 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB14;

LAB22:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB48;

LAB49:    t1 = (unsigned char)0;

LAB50:    if (t1 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 3168U);
    t5 = *((char **)t2);
    t19 = *((int *)t5);
    t25 = (8 * t19);
    t26 = (t25 - 1);
    t20 = (31 - t26);
    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t27 = *((int *)t9);
    t28 = (8 * t27);
    t29 = (t28 - 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t26, t29, -1);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t12 = (t0 + 3168U);
    t15 = *((char **)t12);
    t30 = *((int *)t15);
    t31 = (8 * t30);
    t32 = (t31 - 1);
    t12 = (t0 + 3168U);
    t16 = *((char **)t12);
    t33 = *((int *)t16);
    t34 = (8 * t33);
    t35 = (t34 - 8);
    t36 = (t35 - t32);
    t24 = (t36 * -1);
    t24 = (t24 + 1);
    t37 = (1U * t24);
    t1 = (8U != t37);
    if (t1 == 1)
        goto LAB54;

LAB55:    t12 = (t0 + 4804);
    t17 = (t12 + 32U);
    t18 = *((char **)t17);
    t38 = (t18 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t2, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 10304);
    t1 = (5U != 5U);
    if (t1 == 1)
        goto LAB56;

LAB57:    t5 = (t0 + 4984);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 5U);
    xsi_driver_first_trans_delta(t5, 0U, 5U, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB58;

LAB60:
LAB59:    goto LAB14;

LAB23:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB66;

LAB67:    t1 = (unsigned char)0;

LAB68:    if (t1 != 0)
        goto LAB63;

LAB65:
LAB64:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB73;

LAB75:
LAB74:    goto LAB14;

LAB24:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 10357);
    t5 = (t0 + 4660);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 10361);
    t5 = (t0 + 4624);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2892U);
    t4 = *((char **)t2);
    t2 = (t0 + 5092);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 5056);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 10393);
    t1 = (5U != 5U);
    if (t1 == 1)
        goto LAB78;

LAB79:    t5 = (t0 + 4984);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 5U);
    xsi_driver_first_trans_delta(t5, 0U, 5U, 0LL);
    goto LAB14;

LAB25:    xsi_set_current_line(240, ng0);
    goto LAB14;

LAB26:    xsi_size_not_matching(5U, 5U, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(166, ng0);
    t5 = (t0 + 10268);
    t12 = (t0 + 4624);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 32U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 10300);
    t5 = (t0 + 4660);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB29;

LAB31:    xsi_set_current_line(178, ng0);
    t9 = (t0 + 5020);
    t12 = (t9 + 32U);
    t15 = *((char **)t12);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = 4;
    xsi_driver_first_trans_fast(t9);
    goto LAB32;

LAB34:    xsi_set_current_line(180, ng0);
    t9 = (t0 + 5020);
    t12 = (t9 + 32U);
    t15 = *((char **)t12);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = 1;
    xsi_driver_first_trans_fast(t9);
    goto LAB35;

LAB37:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4588);
    t9 = (t2 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)8;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t19 = (1 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 4876);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t19 = (1 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t5 = (t0 + 4912);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 3168U);
    t5 = *((char **)t2);
    t19 = *((int *)t5);
    t25 = (8 * t19);
    t26 = (t25 - 1);
    t20 = (31 - t26);
    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t27 = *((int *)t9);
    t28 = (8 * t27);
    t29 = (t28 - 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t26, t29, -1);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t12 = (t0 + 3168U);
    t15 = *((char **)t12);
    t30 = *((int *)t15);
    t31 = (8 * t30);
    t32 = (t31 - 1);
    t12 = (t0 + 3168U);
    t16 = *((char **)t12);
    t33 = *((int *)t16);
    t34 = (8 * t33);
    t35 = (t34 - 8);
    t36 = (t35 - t32);
    t24 = (t36 * -1);
    t24 = (t24 + 1);
    t37 = (1U * t24);
    t1 = (8U != t37);
    if (t1 == 1)
        goto LAB43;

LAB44:    t12 = (t0 + 4804);
    t17 = (t12 + 32U);
    t18 = *((char **)t17);
    t38 = (t18 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t2, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB38;

LAB40:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t37, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t19 = *((int *)t9);
    t10 = (t19 > 1);
    if (t10 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)9;
    xsi_driver_first_trans_fast(t2);

LAB52:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t19 = (1 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 4876);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t19 = (1 - 31);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t5 = (t0 + 4912);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB46;

LAB48:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB50;

LAB51:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 3168U);
    t12 = *((char **)t2);
    t25 = *((int *)t12);
    t26 = (t25 - 1);
    t2 = (t0 + 5020);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((int *)t18) = t26;
    xsi_driver_first_trans_fast(t2);
    goto LAB52;

LAB54:    xsi_size_not_matching(8U, t37, 0);
    goto LAB55;

LAB56:    xsi_size_not_matching(5U, 5U, 0);
    goto LAB57;

LAB58:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t19 = *((int *)t9);
    t25 = (3 - t19);
    t26 = (8 * t25);
    t27 = (t26 + 7);
    t2 = (t0 + 3168U);
    t12 = *((char **)t2);
    t28 = *((int *)t12);
    t29 = (3 - t28);
    t30 = (8 * t29);
    t31 = (t30 - t27);
    t20 = (t31 * -1);
    t20 = (t20 + 1);
    t21 = (1U * t20);
    t6 = (t21 != 8U);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = (t0 + 3168U);
    t15 = *((char **)t2);
    t32 = *((int *)t15);
    t33 = (3 - t32);
    t34 = (8 * t33);
    t35 = (t34 + 7);
    t22 = (31 - t35);
    t24 = (1U * t22);
    t37 = (0U + t24);
    t2 = (t0 + 4696);
    t16 = (t2 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t38 = *((char **)t18);
    t39 = (t0 + 3168U);
    t40 = *((char **)t39);
    t36 = *((int *)t40);
    t41 = (3 - t36);
    t42 = (8 * t41);
    t43 = (t42 + 7);
    t39 = (t0 + 3168U);
    t44 = *((char **)t39);
    t45 = *((int *)t44);
    t46 = (3 - t45);
    t47 = (8 * t46);
    t48 = (t47 - t43);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t50 = (1U * t49);
    memcpy(t38, t5, t50);
    t39 = (t0 + 3168U);
    t51 = *((char **)t39);
    t52 = *((int *)t51);
    t53 = (3 - t52);
    t54 = (8 * t53);
    t55 = (t54 + 7);
    t39 = (t0 + 3168U);
    t56 = *((char **)t39);
    t57 = *((int *)t56);
    t58 = (3 - t57);
    t59 = (8 * t58);
    t60 = (t59 - t55);
    t61 = (t60 * -1);
    t61 = (t61 + 1);
    t62 = (1U * t61);
    xsi_driver_first_trans_delta(t2, t37, t62, 0LL);
    goto LAB59;

LAB61:    xsi_size_not_matching(t21, 8U, 0);
    goto LAB62;

LAB63:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 10309);
    t12 = (t0 + 4660);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 10313);
    t5 = (t0 + 4624);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 10345);
    t5 = (t0 + 2064U);
    t9 = *((char **)t5);
    t12 = ((IEEE_P_2592010699) + 2332);
    t15 = (t63 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 4;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t19 = (4 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t20;
    t16 = (t0 + 9716U);
    t5 = xsi_base_array_concat(t5, t23, t12, (char)97, t2, t63, (char)97, t9, t16, (char)101);
    t17 = (t0 + 2708U);
    t18 = *((char **)t17);
    t20 = (31 - 23);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t39 = ((IEEE_P_2592010699) + 2332);
    t40 = (t65 + 0U);
    t44 = (t40 + 0U);
    *((int *)t44) = 23;
    t44 = (t40 + 4U);
    *((int *)t44) = 16;
    t44 = (t40 + 8U);
    *((int *)t44) = -1;
    t25 = (16 - 23);
    t24 = (t25 * -1);
    t24 = (t24 + 1);
    t44 = (t40 + 12U);
    *((unsigned int *)t44) = t24;
    t38 = xsi_base_array_concat(t38, t64, t39, (char)97, t5, t23, (char)97, t17, t65, (char)101);
    t44 = (t0 + 10350);
    t67 = ((IEEE_P_2592010699) + 2332);
    t69 = (t68 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = 0;
    t70 = (t69 + 4U);
    *((int *)t70) = 0;
    t70 = (t69 + 8U);
    *((int *)t70) = 1;
    t26 = (0 - 0);
    t24 = (t26 * 1);
    t24 = (t24 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t24;
    t56 = xsi_base_array_concat(t56, t66, t67, (char)97, t38, t64, (char)97, t44, t68, (char)101);
    t70 = (t0 + 2708U);
    t71 = *((char **)t70);
    t24 = (31 - 14);
    t37 = (t24 * 1U);
    t49 = (0 + t37);
    t70 = (t71 + t49);
    t74 = ((IEEE_P_2592010699) + 2332);
    t76 = (t75 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 14;
    t77 = (t76 + 4U);
    *((int *)t77) = 8;
    t77 = (t76 + 8U);
    *((int *)t77) = -1;
    t27 = (8 - 14);
    t50 = (t27 * -1);
    t50 = (t50 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t50;
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t56, t66, (char)97, t70, t75, (char)101);
    t77 = (t0 + 2708U);
    t78 = *((char **)t77);
    t50 = (31 - 7);
    t61 = (t50 * 1U);
    t62 = (0 + t61);
    t77 = (t78 + t62);
    t81 = ((IEEE_P_2592010699) + 2332);
    t83 = (t82 + 0U);
    t84 = (t83 + 0U);
    *((int *)t84) = 7;
    t84 = (t83 + 4U);
    *((int *)t84) = 4;
    t84 = (t83 + 8U);
    *((int *)t84) = -1;
    t28 = (4 - 7);
    t85 = (t28 * -1);
    t85 = (t85 + 1);
    t84 = (t83 + 12U);
    *((unsigned int *)t84) = t85;
    t79 = xsi_base_array_concat(t79, t80, t81, (char)97, t72, t73, (char)97, t77, t82, (char)101);
    t84 = (t0 + 10351);
    t89 = ((IEEE_P_2592010699) + 2332);
    t91 = (t90 + 0U);
    t92 = (t91 + 0U);
    *((int *)t92) = 0;
    t92 = (t91 + 4U);
    *((int *)t92) = 0;
    t92 = (t91 + 8U);
    *((int *)t92) = 1;
    t29 = (0 - 0);
    t85 = (t29 * 1);
    t85 = (t85 + 1);
    t92 = (t91 + 12U);
    *((unsigned int *)t92) = t85;
    t87 = xsi_base_array_concat(t87, t88, t89, (char)97, t79, t80, (char)97, t84, t90, (char)101);
    t92 = (t0 + 3260U);
    t93 = *((char **)t92);
    t1 = *((unsigned char *)t93);
    t95 = ((IEEE_P_2592010699) + 2332);
    t92 = xsi_base_array_concat(t92, t94, t95, (char)97, t87, t88, (char)99, t1, (char)101);
    t96 = (t0 + 2708U);
    t97 = *((char **)t96);
    t85 = (31 - 1);
    t98 = (t85 * 1U);
    t99 = (0 + t98);
    t96 = (t97 + t99);
    t102 = ((IEEE_P_2592010699) + 2332);
    t104 = (t103 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = 1;
    t105 = (t104 + 4U);
    *((int *)t105) = 0;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t30 = (0 - 1);
    t106 = (t30 * -1);
    t106 = (t106 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t106;
    t100 = xsi_base_array_concat(t100, t101, t102, (char)97, t92, t94, (char)97, t96, t103, (char)101);
    t106 = (5U + 3U);
    t107 = (t106 + 8U);
    t108 = (t107 + 1U);
    t109 = (t108 + 7U);
    t110 = (t109 + 4U);
    t111 = (t110 + 1U);
    t112 = (t111 + 1U);
    t113 = (t112 + 2U);
    t3 = (32U != t113);
    if (t3 == 1)
        goto LAB69;

LAB70:    t105 = (t0 + 5092);
    t114 = (t105 + 32U);
    t115 = *((char **)t114);
    t116 = (t115 + 40U);
    t117 = *((char **)t116);
    memcpy(t117, t100, 32U);
    xsi_driver_first_trans_fast_port(t105);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 10352);
    t1 = (5U != 5U);
    if (t1 == 1)
        goto LAB71;

LAB72:    t5 = (t0 + 4984);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 5U);
    xsi_driver_first_trans_delta(t5, 0U, 5U, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 4588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)10;
    xsi_driver_first_trans_fast(t2);
    goto LAB64;

LAB66:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB68;

LAB69:    xsi_size_not_matching(32U, t113, 0);
    goto LAB70;

LAB71:    xsi_size_not_matching(5U, 5U, 0);
    goto LAB72;

LAB73:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t19 = *((int *)t9);
    t25 = (4 - t19);
    t26 = (8 * t25);
    t27 = (t26 + 7);
    t2 = (t0 + 3168U);
    t12 = *((char **)t2);
    t28 = *((int *)t12);
    t29 = (4 - t28);
    t30 = (8 * t29);
    t31 = (t30 - t27);
    t20 = (t31 * -1);
    t20 = (t20 + 1);
    t21 = (1U * t20);
    t6 = (t21 != 8U);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = (t0 + 3168U);
    t15 = *((char **)t2);
    t32 = *((int *)t15);
    t33 = (4 - t32);
    t34 = (8 * t33);
    t35 = (t34 + 7);
    t22 = (31 - t35);
    t24 = (1U * t22);
    t37 = (0U + t24);
    t2 = (t0 + 4696);
    t16 = (t2 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t38 = *((char **)t18);
    t39 = (t0 + 3168U);
    t40 = *((char **)t39);
    t36 = *((int *)t40);
    t41 = (4 - t36);
    t42 = (8 * t41);
    t43 = (t42 + 7);
    t39 = (t0 + 3168U);
    t44 = *((char **)t39);
    t45 = *((int *)t44);
    t46 = (4 - t45);
    t47 = (8 * t46);
    t48 = (t47 - t43);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t50 = (1U * t49);
    memcpy(t38, t5, t50);
    t39 = (t0 + 3168U);
    t51 = *((char **)t39);
    t52 = *((int *)t51);
    t53 = (4 - t52);
    t54 = (8 * t53);
    t55 = (t54 + 7);
    t39 = (t0 + 3168U);
    t56 = *((char **)t39);
    t57 = *((int *)t56);
    t58 = (4 - t57);
    t59 = (8 * t58);
    t60 = (t59 - t55);
    t61 = (t60 * -1);
    t61 = (t61 + 1);
    t62 = (1U * t61);
    xsi_driver_first_trans_delta(t2, t37, t62, 0LL);
    goto LAB74;

LAB76:    xsi_size_not_matching(t21, 8U, 0);
    goto LAB77;

LAB78:    xsi_size_not_matching(5U, 5U, 0);
    goto LAB79;

}

static void work_a_2695113304_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;

LAB0:    xsi_set_current_line(254, ng0);
    t3 = (t0 + 568U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 4544);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(255, ng0);
    t5 = (t0 + 3444U);
    t12 = *((char **)t5);
    t13 = *((int *)t12);
    t14 = (t13 < 167);
    if (t14 != 0)
        goto LAB11;

LAB13:    t3 = (t0 + 3444U);
    t5 = *((char **)t3);
    t13 = *((int *)t5);
    t1 = (t13 > 166);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB12:    goto LAB3;

LAB5:    t5 = (t0 + 3352U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(256, ng0);
    t5 = (t0 + 5200);
    t15 = (t5 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(257, ng0);
    t3 = (t0 + 3444U);
    t5 = *((char **)t3);
    t13 = *((int *)t5);
    t19 = (t13 + 1);
    t3 = (t0 + 5236);
    t6 = (t3 + 32U);
    t9 = *((char **)t6);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((int *)t15) = t19;
    xsi_driver_first_trans_fast(t3);
    goto LAB12;

LAB14:    xsi_set_current_line(259, ng0);
    t3 = (t0 + 5200);
    t6 = (t3 + 32U);
    t9 = *((char **)t6);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(260, ng0);
    t3 = (t0 + 5236);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t9 = (t6 + 40U);
    t12 = *((char **)t9);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t3);
    goto LAB12;

}


extern void work_a_2695113304_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2695113304_3212880686_p_0,(void *)work_a_2695113304_3212880686_p_1};
	xsi_register_didat("work_a_2695113304_3212880686", "isim/Tbi2c_isim_beh.exe.sim/work/a_2695113304_3212880686.didat");
	xsi_register_executes(pe);
}
