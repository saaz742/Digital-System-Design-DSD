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
static const char *ng0 = "C:/Users/sa/Desktop/dsdprj/adder.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {5U, 0U};
static int ng9[] = {3, 0};



static void Cont_53_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8392);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_56_1(char *t0)
{
    char t13[8];
    char t30[8];
    char t45[8];
    char t86[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t115;

LAB0:    t1 = (t0 + 7824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 8408);
    *((int *)t2) = 1;
    t3 = (t0 + 7856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 3296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(189, ng0);

LAB146:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2976);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 23);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 23);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 255U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 255U);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 23);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 23);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 255U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 255U);
    t7 = (t0 + 5376);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 8388607U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 8388607U);
    t7 = (t0 + 5536);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 23);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 8388607U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 8388607U);
    t7 = (t0 + 5696);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 23);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 31);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t0 + 5856);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 31);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t0 + 6016);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB12;

LAB13:    t17 = (t13 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(73, ng0);

LAB19:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 8, t7, 8);
    t14 = (t0 + 3616);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);

LAB17:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t32 = (t20 & t24);
    if (t32 != 0)
        goto LAB23;

LAB20:    if (t23 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t13) = 1;

LAB23:    t15 = (t0 + 5376);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t25 = (t17 + 4);
    t26 = (t18 + 4);
    t33 = *((unsigned int *)t17);
    t34 = *((unsigned int *)t18);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t25);
    t41 = *((unsigned int *)t26);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB27;

LAB24:    if (t42 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t30) = 1;

LAB27:    t46 = *((unsigned int *)t13);
    t47 = *((unsigned int *)t30);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t28 = (t13 + 4);
    t29 = (t30 + 4);
    t31 = (t45 + 4);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 | t50);
    *((unsigned int *)t31) = t51;
    t52 = *((unsigned int *)t31);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB28;

LAB29:
LAB30:    t70 = (t45 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t45);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(83, ng0);

LAB35:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB33:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t32 = (t20 & t24);
    if (t32 != 0)
        goto LAB37;

LAB36:    if (t23 != 0)
        goto LAB38;

LAB39:    t15 = (t13 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(95, ng0);

LAB44:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);

LAB42:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t32 = (t20 & t24);
    if (t32 != 0)
        goto LAB46;

LAB45:    if (t23 != 0)
        goto LAB47;

LAB48:    t15 = (t13 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(102, ng0);

LAB53:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);

LAB51:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB55;

LAB54:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB56;

LAB57:    t17 = (t13 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(117, ng0);

LAB63:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);

LAB61:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t32 = (t20 & t24);
    if (t32 != 0)
        goto LAB65;

LAB64:    if (t23 != 0)
        goto LAB66;

LAB67:    t15 = (t0 + 5376);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t25 = (t17 + 4);
    t26 = (t18 + 4);
    t33 = *((unsigned int *)t17);
    t34 = *((unsigned int *)t18);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t25);
    t41 = *((unsigned int *)t26);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB69;

LAB68:    if (t42 != 0)
        goto LAB70;

LAB71:    t46 = *((unsigned int *)t13);
    t47 = *((unsigned int *)t30);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t28 = (t13 + 4);
    t29 = (t30 + 4);
    t31 = (t45 + 4);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 | t50);
    *((unsigned int *)t31) = t51;
    t52 = *((unsigned int *)t31);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB72;

LAB73:
LAB74:    t70 = (t45 + 4);
    t75 = *((unsigned int *)t70);
    t78 = (~(t75));
    t79 = *((unsigned int *)t45);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(134, ng0);

LAB88:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t5 = (t0 + 4896);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 24);

LAB77:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 23);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 23);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t13 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 22);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 22);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t13 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 21);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t13 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 20);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 20);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t13 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 19);
    t10 = (t9 & 1);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 19);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t13 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB105;

LAB106:
LAB107:
LAB103:
LAB99:
LAB95:
LAB91:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t4, 8, t7, 1);
    t14 = (t0 + 3936);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 24, t4, 24, t7, 4);
    t14 = (t0 + 5056);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 24);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 8388607U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 8388607U);
    t7 = (t0 + 4736);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 23);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t15);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t15);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t32 = (t20 & t24);
    if (t32 != 0)
        goto LAB112;

LAB109:    if (t23 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t13) = 1;

LAB112:    t17 = (t13 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB118;

LAB117:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB119;

LAB120:    t17 = (t13 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB127;

LAB126:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB127;

LAB130:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB128;

LAB129:    t17 = (t13 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB131;

LAB132:    xsi_set_current_line(178, ng0);

LAB135:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB137;

LAB136:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB137;

LAB140:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB138;

LAB139:    t17 = (t13 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t13);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(182, ng0);

LAB145:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB143:
LAB133:
LAB124:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t14 = (t0 + 6176);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t16, 1, t7, 8, t4, 23);
    t17 = (t0 + 6656);
    xsi_vlogvar_assign_value(t17, t13, 0, 0, 32);
    goto LAB8;

LAB11:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(66, ng0);

LAB18:    xsi_set_current_line(67, ng0);
    t18 = (t0 + 5216);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 5376);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t26, 8, t29, 8);
    t31 = (t0 + 3616);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);
    goto LAB17;

LAB22:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB26:    t27 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB28:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t45) = (t54 | t55);
    t56 = (t13 + 4);
    t57 = (t30 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t13);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t30);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t68 & t66);
    t69 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t69 & t67);
    goto LAB30;

LAB31:    xsi_set_current_line(80, ng0);

LAB34:    xsi_set_current_line(81, ng0);
    t76 = ((char*)((ng1)));
    t77 = (t0 + 3616);
    xsi_vlogvar_assign_value(t77, t76, 0, 0, 32);
    goto LAB33;

LAB37:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB38:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(91, ng0);

LAB43:    xsi_set_current_line(92, ng0);
    t16 = (t0 + 4096);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t45, 0, 8);
    t25 = (t45 + 4);
    t26 = (t18 + 4);
    t38 = *((unsigned int *)t18);
    t39 = (t38 >> 1);
    *((unsigned int *)t45) = t39;
    t40 = *((unsigned int *)t26);
    t41 = (t40 >> 1);
    *((unsigned int *)t25) = t41;
    t42 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t42 & 4194303U);
    t43 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t43 & 4194303U);
    t27 = ((char*)((ng2)));
    xsi_vlogtype_concat(t30, 23, 23, 2U, t27, 1, t45, 22);
    t28 = (t0 + 4096);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 23);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 23, t4, 23, t7, 32);
    t14 = (t0 + 4096);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 23);
    goto LAB42;

LAB46:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB47:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(99, ng0);

LAB52:    xsi_set_current_line(100, ng0);
    t16 = (t0 + 4576);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t45, 0, 8);
    t25 = (t45 + 4);
    t26 = (t18 + 4);
    t38 = *((unsigned int *)t18);
    t39 = (t38 >> 1);
    *((unsigned int *)t45) = t39;
    t40 = *((unsigned int *)t26);
    t41 = (t40 >> 1);
    *((unsigned int *)t25) = t41;
    t42 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t42 & 4194303U);
    t43 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t43 & 4194303U);
    t27 = ((char*)((ng2)));
    xsi_vlogtype_concat(t30, 23, 23, 2U, t27, 1, t45, 22);
    t28 = (t0 + 4576);
    xsi_vlogvar_assign_value(t28, t30, 0, 0, 23);
    goto LAB51;

LAB55:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;
    goto LAB57;

LAB59:    xsi_set_current_line(111, ng0);

LAB62:    xsi_set_current_line(114, ng0);
    t18 = (t0 + 4096);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 4256);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 23);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 23);
    goto LAB61;

LAB65:    *((unsigned int *)t13) = 1;
    goto LAB67;

LAB66:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB69:    *((unsigned int *)t30) = 1;
    goto LAB71;

LAB70:    t27 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB71;

LAB72:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t45) = (t54 | t55);
    t56 = (t13 + 4);
    t57 = (t30 + 4);
    t58 = *((unsigned int *)t13);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t62 = (~(t60));
    t63 = *((unsigned int *)t30);
    t64 = (~(t63));
    t66 = *((unsigned int *)t57);
    t67 = (~(t66));
    t61 = (t59 & t62);
    t65 = (t64 & t67);
    t68 = (~(t61));
    t69 = (~(t65));
    t71 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t71 & t68);
    t72 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t72 & t69);
    t73 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t73 & t68);
    t74 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t74 & t69);
    goto LAB74;

LAB75:    xsi_set_current_line(127, ng0);

LAB78:    xsi_set_current_line(128, ng0);
    t76 = (t0 + 5856);
    t77 = (t76 + 56U);
    t82 = *((char **)t77);
    t83 = (t0 + 6016);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t87 = (t82 + 4);
    t88 = (t85 + 4);
    t89 = *((unsigned int *)t82);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = *((unsigned int *)t87);
    t93 = *((unsigned int *)t88);
    t94 = (t92 ^ t93);
    t95 = (t91 | t94);
    t96 = *((unsigned int *)t87);
    t97 = *((unsigned int *)t88);
    t98 = (t96 | t97);
    t99 = (~(t98));
    t100 = (t95 & t99);
    if (t100 != 0)
        goto LAB82;

LAB79:    if (t98 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t86) = 1;

LAB82:    t102 = (t86 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t86);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(130, ng0);

LAB87:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 24, t4, 23, t7, 23);
    t14 = (t0 + 4896);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 24);

LAB85:    goto LAB77;

LAB81:    t101 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(128, ng0);

LAB86:    xsi_set_current_line(129, ng0);
    t108 = (t0 + 4256);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t0 + 4416);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memset(t114, 0, 8);
    xsi_vlog_unsigned_add(t114, 24, t110, 23, t113, 23);
    t115 = (t0 + 4896);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 24);
    goto LAB85;

LAB89:    xsi_set_current_line(139, ng0);

LAB92:    xsi_set_current_line(140, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 6336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB91;

LAB93:    xsi_set_current_line(143, ng0);

LAB96:    xsi_set_current_line(144, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 6336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB95;

LAB97:    xsi_set_current_line(147, ng0);

LAB100:    xsi_set_current_line(148, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 6336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 32, t2, 32);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 1);
    goto LAB99;

LAB101:    xsi_set_current_line(151, ng0);

LAB104:    xsi_set_current_line(152, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 6336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 32, t2, 32);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 1);
    goto LAB103;

LAB105:    xsi_set_current_line(155, ng0);

LAB108:    xsi_set_current_line(156, ng0);
    t14 = ((char*)((ng8)));
    t15 = (t0 + 6336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 32, t2, 32);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 1);
    goto LAB107;

LAB111:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(169, ng0);

LAB116:    xsi_set_current_line(170, ng0);
    t18 = (t0 + 5856);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 6176);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB115;

LAB118:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB120;

LAB119:    *((unsigned int *)t13) = 1;
    goto LAB120;

LAB122:    xsi_set_current_line(173, ng0);

LAB125:    xsi_set_current_line(174, ng0);
    t18 = (t0 + 5856);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 6176);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB124;

LAB127:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB129;

LAB128:    *((unsigned int *)t13) = 1;
    goto LAB129;

LAB131:    xsi_set_current_line(175, ng0);

LAB134:    xsi_set_current_line(176, ng0);
    t18 = (t0 + 6016);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 6176);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB133;

LAB137:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB139;

LAB138:    *((unsigned int *)t13) = 1;
    goto LAB139;

LAB141:    xsi_set_current_line(180, ng0);

LAB144:    xsi_set_current_line(181, ng0);
    t18 = (t0 + 5856);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 6176);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB143;

}

static void Always_194_2(char *t0)
{
    char t4[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 8424);
    *((int *)t2) = 1;
    t3 = (t0 + 8104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(194, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    t5 = (t0 + 1616U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(203, ng0);

LAB14:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t12, 32);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t21 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(195, ng0);

LAB13:    xsi_set_current_line(196, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 1000LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(205, ng0);

LAB23:    xsi_set_current_line(206, ng0);
    t6 = (t0 + 1776U);
    t13 = *((char **)t6);
    t6 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(211, ng0);

LAB28:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB26:    goto LAB22;

LAB18:    xsi_set_current_line(217, ng0);

LAB29:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(221, ng0);

LAB30:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(228, ng0);

LAB35:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB33:    goto LAB22;

LAB24:    xsi_set_current_line(206, ng0);

LAB27:    xsi_set_current_line(207, ng0);
    t19 = (t0 + 1936U);
    t20 = *((char **)t19);
    t19 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    t2 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB26;

LAB31:    xsi_set_current_line(223, ng0);

LAB34:    xsi_set_current_line(224, ng0);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t6 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t6, t12, 0, 0, 2, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

}


extern void work_m_00000000002920020399_0833183191_init()
{
	static char *pe[] = {(void *)Cont_53_0,(void *)Always_56_1,(void *)Always_194_2};
	xsi_register_didat("work_m_00000000002920020399_0833183191", "isim/test_isim_beh.exe.sim/work/m_00000000002920020399_0833183191.didat");
	xsi_register_executes(pe);
}
