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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/sf_CSM152A/FDPaint/sesame.v";
static int ng1[] = {250, 0};
static int ng2[] = {300, 0};
static int ng3[] = {100, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {255U, 0U};
static unsigned int ng6[] = {130U, 0U};
static int ng7[] = {152, 0};
static int ng8[] = {792, 0};
static int ng9[] = {37, 0};
static int ng10[] = {517, 0};
static int ng11[] = {8, 0};
static int ng12[] = {104, 0};
static int ng13[] = {2, 0};
static int ng14[] = {4, 0};
static int ng15[] = {799, 0};
static int ng16[] = {1, 0};
static int ng17[] = {524, 0};



static int sp_update_VGA_RGB(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t6 = (t1 + 5880);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 5);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 5);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 7U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 7U);
    t17 = (t1 + 4280);
    xsi_vlogvar_assign_value(t17, t5, 0, 0, 3);
    xsi_set_current_line(111, ng0);
    t4 = (t1 + 5880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 2);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 7U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 7U);
    t10 = (t1 + 4440);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 3);
    xsi_set_current_line(112, ng0);
    t4 = (t1 + 5880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t10 = (t1 + 4600);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void NetDecl_32_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11272);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 9U);

LAB1:    return;
}

static void NetDecl_33_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11336);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 9U);

LAB1:    return;
}

static void NetDecl_34_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11400);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 9U);

LAB1:    return;
}

static void NetDecl_35_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11464);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 9U);

LAB1:    return;
}

static void NetDecl_36_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11528);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7U);

LAB1:    return;
}

static void NetDecl_37_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 11592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7U);

LAB1:    return;
}

static void NetDecl_38_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7U);

LAB1:    return;
}

static void Cont_54_7(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 8528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2120U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 10, t4, 10, t6, 10);
    t5 = (t0 + 11720);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1023U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t20 = (t0 + 11080);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_56_8(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 8776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2280U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 10, t4, 10, t6, 10);
    t5 = (t0 + 11784);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1023U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t20 = (t0 + 11096);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_59_9(char *t0)
{
    char t7[8];
    char t10[8];
    char t28[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t89[8];
    char t92[8];
    char t100[8];
    char t132[8];
    char t150[8];
    char t151[8];
    char t154[8];
    char t162[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;

LAB0:    t1 = (t0 + 9024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2120U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB7;

LAB6:    *((unsigned int *)t7) = 1;

LAB7:    memset(t10, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t10, 8);

LAB15:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t73) != 0)
        goto LAB30;

LAB31:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB32;

LAB33:    memcpy(t100, t72, 8);

LAB34:    memset(t132, 0, 8);
    t133 = (t100 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t100);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t133) != 0)
        goto LAB49;

LAB50:    t140 = (t132 + 4);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB51;

LAB52:    memcpy(t162, t132, 8);

LAB53:    t194 = (t0 + 11848);
    t195 = (t194 + 56U);
    t196 = *((char **)t195);
    t197 = (t196 + 56U);
    t198 = *((char **)t197);
    memset(t198, 0, 8);
    t199 = 1U;
    t200 = t199;
    t201 = (t162 + 4);
    t202 = *((unsigned int *)t162);
    t199 = (t199 & t202);
    t203 = *((unsigned int *)t201);
    t200 = (t200 & t203);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t205 | t199);
    t206 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t206 | t200);
    xsi_driver_vfirst_trans(t194, 0, 0);
    t207 = (t0 + 11112);
    *((int *)t207) = 1;

LAB1:    return;
LAB5:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 5400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2120U);
    t26 = *((char **)t25);
    t25 = (t0 + 1800U);
    t27 = *((char **)t25);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 10, t26, 10, t27, 10);
    memset(t29, 0, 8);
    t25 = (t24 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB16:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) < *((unsigned int *)t28))
        goto LAB18;

LAB19:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB24:    t41 = *((unsigned int *)t10);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t10 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB23:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t10 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t10);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB27;

LAB28:    *((unsigned int *)t72) = 1;
    goto LAB31;

LAB30:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB31;

LAB32:    t84 = (t0 + 5560);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = (t0 + 2280U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t86 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB36;

LAB35:    t90 = (t88 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t86) < *((unsigned int *)t88))
        goto LAB38;

LAB37:    *((unsigned int *)t89) = 1;

LAB38:    memset(t92, 0, 8);
    t93 = (t89 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t93) != 0)
        goto LAB42;

LAB43:    t101 = *((unsigned int *)t72);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t72 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t91 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t92) = 1;
    goto LAB43;

LAB42:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB43;

LAB44:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t72 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t72);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB46;

LAB47:    *((unsigned int *)t132) = 1;
    goto LAB50;

LAB49:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB50;

LAB51:    t144 = (t0 + 5560);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    t147 = (t0 + 2280U);
    t148 = *((char **)t147);
    t147 = (t0 + 1960U);
    t149 = *((char **)t147);
    memset(t150, 0, 8);
    xsi_vlog_unsigned_add(t150, 10, t148, 10, t149, 10);
    memset(t151, 0, 8);
    t147 = (t146 + 4);
    if (*((unsigned int *)t147) != 0)
        goto LAB55;

LAB54:    t152 = (t150 + 4);
    if (*((unsigned int *)t152) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t146) < *((unsigned int *)t150))
        goto LAB56;

LAB57:    memset(t154, 0, 8);
    t155 = (t151 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t155) != 0)
        goto LAB61;

LAB62:    t163 = *((unsigned int *)t132);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t132 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t153 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t151) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t154) = 1;
    goto LAB62;

LAB61:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB62;

LAB63:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t132 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t132);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB65;

}

static void Cont_62_10(char *t0)
{
    char t6[8];
    char t10[8];
    char t26[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t86[8];
    char t90[8];
    char t98[8];
    char t130[8];
    char t146[8];
    char t150[8];
    char t158[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;

LAB0:    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t38, t10, 8);

LAB15:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t71) != 0)
        goto LAB30;

LAB31:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB32;

LAB33:    memcpy(t98, t70, 8);

LAB34:    memset(t130, 0, 8);
    t131 = (t98 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t98);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t131) != 0)
        goto LAB49;

LAB50:    t138 = (t130 + 4);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t138);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB51;

LAB52:    memcpy(t158, t130, 8);

LAB53:    t190 = (t0 + 11912);
    t191 = (t190 + 56U);
    t192 = *((char **)t191);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    memset(t194, 0, 8);
    t195 = 1U;
    t196 = t195;
    t197 = (t158 + 4);
    t198 = *((unsigned int *)t158);
    t195 = (t195 & t198);
    t199 = *((unsigned int *)t197);
    t196 = (t196 & t199);
    t200 = (t194 + 4);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t201 | t195);
    t202 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t202 | t196);
    xsi_driver_vfirst_trans(t190, 0, 0);
    t203 = (t0 + 11128);
    *((int *)t203) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 5400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng8)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB17;

LAB16:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB18;

LAB19:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t31) != 0)
        goto LAB23;

LAB24:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB23:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB24;

LAB25:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB27;

LAB28:    *((unsigned int *)t70) = 1;
    goto LAB31;

LAB30:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB31;

LAB32:    t82 = (t0 + 5560);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng9)));
    memset(t86, 0, 8);
    t87 = (t84 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB36;

LAB35:    t88 = (t85 + 4);
    if (*((unsigned int *)t88) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t84) < *((unsigned int *)t85))
        goto LAB38;

LAB37:    *((unsigned int *)t86) = 1;

LAB38:    memset(t90, 0, 8);
    t91 = (t86 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t86);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t91) != 0)
        goto LAB42;

LAB43:    t99 = *((unsigned int *)t70);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t70 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t89 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t90) = 1;
    goto LAB43;

LAB42:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB43;

LAB44:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t70 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t70);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB46;

LAB47:    *((unsigned int *)t130) = 1;
    goto LAB50;

LAB49:    t137 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB50;

LAB51:    t142 = (t0 + 5560);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng10)));
    memset(t146, 0, 8);
    t147 = (t144 + 4);
    if (*((unsigned int *)t147) != 0)
        goto LAB55;

LAB54:    t148 = (t145 + 4);
    if (*((unsigned int *)t148) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t144) < *((unsigned int *)t145))
        goto LAB56;

LAB57:    memset(t150, 0, 8);
    t151 = (t146 + 4);
    t152 = *((unsigned int *)t151);
    t153 = (~(t152));
    t154 = *((unsigned int *)t146);
    t155 = (t154 & t153);
    t156 = (t155 & 1U);
    if (t156 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t151) != 0)
        goto LAB61;

LAB62:    t159 = *((unsigned int *)t130);
    t160 = *((unsigned int *)t150);
    t161 = (t159 & t160);
    *((unsigned int *)t158) = t161;
    t162 = (t130 + 4);
    t163 = (t150 + 4);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t162);
    t166 = *((unsigned int *)t163);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 != 0);
    if (t169 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t149 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t146) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t150) = 1;
    goto LAB62;

LAB61:    t157 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB62;

LAB63:    t170 = *((unsigned int *)t158);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t158) = (t170 | t171);
    t172 = (t130 + 4);
    t173 = (t150 + 4);
    t174 = *((unsigned int *)t130);
    t175 = (~(t174));
    t176 = *((unsigned int *)t172);
    t177 = (~(t176));
    t178 = *((unsigned int *)t150);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (~(t180));
    t182 = (t175 & t177);
    t183 = (t179 & t181);
    t184 = (~(t182));
    t185 = (~(t183));
    t186 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t186 & t184);
    t187 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t187 & t185);
    t188 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t188 & t184);
    t189 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t189 & t185);
    goto LAB65;

}

static void Always_65_11(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 11144);
    *((int *)t2) = 1;
    t3 = (t0 + 9552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 5240);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 5240);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

}

static void Always_70_12(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 11160);
    *((int *)t2) = 1;
    t3 = (t0 + 9800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 5080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

}

static void Always_76_13(char *t0)
{
    char t4[8];
    char t9[8];
    char t13[8];
    char t29[8];
    char t33[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 10016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 11176);
    *((int *)t2) = 1;
    t3 = (t0 + 10048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 5400);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    memset(t13, 0, 8);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) != 0)
        goto LAB13;

LAB14:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB15;

LAB16:    memcpy(t41, t13, 8);

LAB17:    memset(t4, 0, 8);
    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t73) == 0)
        goto LAB30;

LAB32:    t79 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t79) = 1;

LAB33:    t80 = (t4 + 4);
    t81 = (t41 + 4);
    t82 = *((unsigned int *)t41);
    t83 = (~(t82));
    *((unsigned int *)t4) = t83;
    *((unsigned int *)t80) = 0;
    if (*((unsigned int *)t81) != 0)
        goto LAB35;

LAB34:    t88 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t88 & 1U);
    t89 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t89 & 1U);
    t90 = (t0 + 4760);
    xsi_vlogvar_wait_assign_value(t90, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB36:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB39;

LAB38:    *((unsigned int *)t9) = 1;

LAB39:    memset(t13, 0, 8);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t11) != 0)
        goto LAB43;

LAB44:    t14 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB45;

LAB46:    memcpy(t41, t13, 8);

LAB47:    memset(t4, 0, 8);
    t55 = (t41 + 4);
    t74 = *((unsigned int *)t55);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t55) == 0)
        goto LAB60;

LAB62:    t56 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t56) = 1;

LAB63:    t73 = (t4 + 4);
    t79 = (t41 + 4);
    t82 = *((unsigned int *)t41);
    t83 = (~(t82));
    *((unsigned int *)t4) = t83;
    *((unsigned int *)t73) = 0;
    if (*((unsigned int *)t79) != 0)
        goto LAB65;

LAB64:    t88 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t88 & 1U);
    t89 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t89 & 1U);
    t80 = (t0 + 4920);
    xsi_vlogvar_wait_assign_value(t80, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng15)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t8);
    t36 = (t24 | t35);
    t37 = (~(t36));
    t38 = (t23 & t37);
    if (t38 != 0)
        goto LAB69;

LAB66:    if (t36 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t13) = 1;

LAB69:    memset(t9, 0, 8);
    t11 = (t13 + 4);
    t39 = *((unsigned int *)t11);
    t42 = (~(t39));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t48 = (t44 & 1U);
    if (t48 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t11) != 0)
        goto LAB72;

LAB73:    t14 = (t9 + 4);
    t49 = *((unsigned int *)t9);
    t50 = *((unsigned int *)t14);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB74;

LAB75:    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t14);
    t57 = (t53 || t54);
    if (t57 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t14) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t9) > 0)
        goto LAB80;

LAB81:    memcpy(t4, t29, 8);

LAB82:    t28 = (t0 + 5400);
    xsi_vlogvar_wait_assign_value(t28, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t8);
    t36 = (t24 | t35);
    t37 = (~(t36));
    t38 = (t23 & t37);
    if (t38 != 0)
        goto LAB86;

LAB83:    if (t36 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t4) = 1;

LAB86:    t11 = (t4 + 4);
    t39 = *((unsigned int *)t11);
    t42 = (~(t39));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t48 = (t44 != 0);
    if (t48 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB2;

LAB7:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB15:    t25 = (t0 + 5400);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng12)));
    memset(t29, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB18:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t27) < *((unsigned int *)t28))
        goto LAB20;

LAB21:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t34) != 0)
        goto LAB25;

LAB26:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t13 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB25:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB27:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t13 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB29;

LAB30:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB35:    t84 = *((unsigned int *)t4);
    t85 = *((unsigned int *)t81);
    *((unsigned int *)t4) = (t84 | t85);
    t86 = *((unsigned int *)t80);
    t87 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t86 | t87);
    goto LAB34;

LAB37:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t13) = 1;
    goto LAB44;

LAB43:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB44;

LAB45:    t20 = (t0 + 5560);
    t21 = (t20 + 56U);
    t25 = *((char **)t21);
    t26 = ((char*)((ng14)));
    memset(t29, 0, 8);
    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB49;

LAB48:    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t25) < *((unsigned int *)t26))
        goto LAB50;

LAB51:    memset(t33, 0, 8);
    t31 = (t29 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t31) != 0)
        goto LAB55;

LAB56:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t34 = (t13 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t45);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB47;

LAB49:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t29) = 1;
    goto LAB51;

LAB53:    *((unsigned int *)t33) = 1;
    goto LAB56;

LAB55:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB56;

LAB57:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t53 | t54);
    t46 = (t13 + 4);
    t47 = (t33 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t46);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t47);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t67);
    t70 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB59;

LAB60:    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB65:    t84 = *((unsigned int *)t4);
    t85 = *((unsigned int *)t79);
    *((unsigned int *)t4) = (t84 | t85);
    t86 = *((unsigned int *)t73);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t86 | t87);
    goto LAB64;

LAB68:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB72:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB74:    t20 = ((char*)((ng4)));
    goto LAB75;

LAB76:    t21 = (t0 + 5400);
    t25 = (t21 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng16)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t26, 10, t27, 32);
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t4, 32, t20, 32, t29, 32);
    goto LAB82;

LAB80:    memcpy(t4, t20, 8);
    goto LAB82;

LAB85:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(82, ng0);
    t12 = (t0 + 5560);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng17)));
    memset(t29, 0, 8);
    t25 = (t20 + 4);
    t26 = (t21 + 4);
    t49 = *((unsigned int *)t20);
    t50 = *((unsigned int *)t21);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t25);
    t53 = *((unsigned int *)t26);
    t54 = (t52 ^ t53);
    t57 = (t51 | t54);
    t58 = *((unsigned int *)t25);
    t59 = *((unsigned int *)t26);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB93;

LAB90:    if (t60 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t29) = 1;

LAB93:    memset(t13, 0, 8);
    t28 = (t29 + 4);
    t63 = *((unsigned int *)t28);
    t64 = (~(t63));
    t67 = *((unsigned int *)t29);
    t68 = (t67 & t64);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t28) != 0)
        goto LAB96;

LAB97:    t31 = (t13 + 4);
    t70 = *((unsigned int *)t13);
    t71 = *((unsigned int *)t31);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB98;

LAB99:    t74 = *((unsigned int *)t13);
    t75 = (~(t74));
    t76 = *((unsigned int *)t31);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t31) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t13) > 0)
        goto LAB104;

LAB105:    memcpy(t9, t33, 8);

LAB106:    t47 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t47, t9, 0, 0, 10, 0LL);
    goto LAB89;

LAB92:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t13) = 1;
    goto LAB97;

LAB96:    t30 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB97;

LAB98:    t32 = ((char*)((ng4)));
    goto LAB99;

LAB100:    t34 = (t0 + 5560);
    t40 = (t34 + 56U);
    t45 = *((char **)t40);
    t46 = ((char*)((ng16)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t45, 10, t46, 32);
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t9, 32, t32, 32, t33, 32);
    goto LAB106;

LAB104:    memcpy(t9, t32, 8);
    goto LAB106;

}

static void Always_86_14(char *t0)
{
    char t4[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
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
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 10264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 11192);
    *((int *)t2) = 1;
    t3 = (t0 + 10296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t5 = (t0 + 3400U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3240U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(102, ng0);

LAB32:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t0 + 10072);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t12 = (t0 + 5880);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);

LAB35:    t13 = (t0 + 10168);
    t14 = *((char **)t13);
    t23 = (t14 + 80U);
    t29 = *((char **)t23);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t42 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB37:    if (t42 != 0)
        goto LAB38;

LAB33:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB34:    t34 = (t0 + 10168);
    t35 = *((char **)t34);
    t34 = (t0 + 848);
    t36 = (t0 + 10072);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);

LAB24:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(90, ng0);

LAB15:    xsi_set_current_line(91, ng0);
    t29 = (t0 + 2440U);
    t30 = *((char **)t29);
    t29 = (t0 + 10072);
    t31 = (t0 + 848);
    t32 = xsi_create_subprogram_invocation(t29, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t32);
    t33 = (t0 + 5880);
    xsi_vlogvar_assign_value(t33, t30, 0, 0, 8);

LAB18:    t34 = (t0 + 10168);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t40 = (t39 + 0U);
    t41 = *((char **)t40);
    t42 = ((int  (*)(char *, char *))t41)(t0, t35);

LAB20:    if (t42 != 0)
        goto LAB21;

LAB16:    t35 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t35);

LAB17:    t43 = (t0 + 10168);
    t44 = *((char **)t43);
    t43 = (t0 + 848);
    t45 = (t0 + 10072);
    t46 = 0;
    xsi_delete_subprogram_invocation(t43, t44, t0, t45, t46);
    goto LAB14;

LAB19:;
LAB21:    t34 = (t0 + 10264U);
    *((char **)t34) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(95, ng0);

LAB25:    xsi_set_current_line(97, ng0);
    t5 = (t0 + 2920U);
    t6 = *((char **)t5);
    t5 = (t0 + 3080U);
    t12 = *((char **)t5);
    t5 = (t0 + 1800U);
    t13 = *((char **)t5);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 16, t12, 10, t13, 10);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 16, t6, 10, t4, 16);
    t5 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t5, t47, 0, 0, 16, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3560U);
    t3 = *((char **)t2);
    t2 = (t0 + 10072);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t12 = (t0 + 5880);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);

LAB28:    t13 = (t0 + 10168);
    t14 = *((char **)t13);
    t23 = (t14 + 80U);
    t29 = *((char **)t23);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t42 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB30:    if (t42 != 0)
        goto LAB31;

LAB26:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB27:    t34 = (t0 + 10168);
    t35 = *((char **)t34);
    t34 = (t0 + 848);
    t36 = (t0 + 10072);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    goto LAB24;

LAB29:;
LAB31:    t13 = (t0 + 10264U);
    *((char **)t13) = &&LAB28;
    goto LAB1;

LAB36:;
LAB38:    t13 = (t0 + 10264U);
    *((char **)t13) = &&LAB35;
    goto LAB1;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 10512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 11976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 10760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 12040);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_08960420784384294217_3609807383_init()
{
	static char *pe[] = {(void *)NetDecl_32_0,(void *)NetDecl_33_1,(void *)NetDecl_34_2,(void *)NetDecl_35_3,(void *)NetDecl_36_4,(void *)NetDecl_37_5,(void *)NetDecl_38_6,(void *)Cont_54_7,(void *)Cont_56_8,(void *)Cont_59_9,(void *)Cont_62_10,(void *)Always_65_11,(void *)Always_70_12,(void *)Always_76_13,(void *)Always_86_14,(void *)implSig1_execute,(void *)implSig2_execute};
	static char *se[] = {(void *)sp_update_VGA_RGB};
	xsi_register_didat("work_m_08960420784384294217_3609807383", "isim/sesame_test_isim_beh.exe.sim/work/m_08960420784384294217_3609807383.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
