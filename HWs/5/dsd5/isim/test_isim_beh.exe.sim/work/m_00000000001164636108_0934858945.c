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
static const char *ng0 = "C:/Users/sa/Desktop/hw5-98170668/dsd5/uartReceiver.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {5, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_27_1(char *t0)
{
    char t13[8];
    char t40[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
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
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    int t67;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t2) == 0)
        goto LAB55;

LAB57:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB58:    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2360);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB17;

LAB14:    if (t25 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t5, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 32, t5, 32);
    memset(t40, 0, 8);
    t12 = (t4 + 4);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t40) = 1;

LAB35:    t28 = (t40 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t40);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB12;

LAB16:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(33, ng0);

LAB21:    xsi_set_current_line(34, ng0);
    t35 = (t0 + 2680);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 608);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB25;

LAB22:    if (t51 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t40) = 1;

LAB25:    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB24:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(34, ng0);

LAB29:    xsi_set_current_line(35, ng0);
    t61 = (t0 + 2840);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng4)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_lshift(t65, 8, t63, 8, t64, 32);
    t66 = (t0 + 2840);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 2840);
    t4 = (t0 + 2840);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t67 = (!(t6));
    if (t67 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB28;

LAB30:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t13), 1);
    goto LAB31;

LAB34:    t15 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(42, ng0);

LAB39:    xsi_set_current_line(43, ng0);
    t29 = ((char*)((ng2)));
    t35 = (t0 + 3000);
    xsi_vlogvar_assign_value(t35, t29, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB40:    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t3 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB50;

LAB47:    if (t20 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t13) = 1;

LAB50:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB38;

LAB41:    xsi_set_current_line(45, ng0);

LAB43:    xsi_set_current_line(46, ng0);
    t12 = (t0 + 3000);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t28 = (t0 + 2840);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t36 = (t0 + 2840);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 3160);
    t41 = (t39 + 56U);
    t54 = *((char **)t41);
    xsi_vlog_generic_get_index_select_value(t40, 1, t35, t38, 2, t54, 32, 1);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t40);
    t18 = (t16 ^ t17);
    *((unsigned int *)t65) = t18;
    t55 = (t15 + 4);
    t61 = (t40 + 4);
    t62 = (t65 + 4);
    t19 = *((unsigned int *)t55);
    t20 = *((unsigned int *)t61);
    t21 = (t19 | t20);
    *((unsigned int *)t62) = t21;
    t22 = *((unsigned int *)t62);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB44;

LAB45:
LAB46:    t63 = (t0 + 3000);
    xsi_vlogvar_assign_value(t63, t65, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3160);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB40;

LAB44:    t24 = *((unsigned int *)t65);
    t25 = *((unsigned int *)t62);
    *((unsigned int *)t65) = (t24 | t25);
    goto LAB46;

LAB49:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(48, ng0);

LAB54:    xsi_set_current_line(49, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2200);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB53;

LAB55:    *((unsigned int *)t13) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(55, ng0);

LAB62:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 2360);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t28 = (t14 + 4);
    t29 = (t15 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t15);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t29);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t30 = *((unsigned int *)t28);
    t31 = *((unsigned int *)t29);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t27 & t33);
    if (t34 != 0)
        goto LAB66;

LAB63:    if (t32 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t40) = 1;

LAB66:    t36 = (t40 + 4);
    t42 = *((unsigned int *)t36);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB61;

LAB65:    t35 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(56, ng0);

LAB70:    xsi_set_current_line(57, ng0);
    t37 = ((char*)((ng2)));
    t38 = (t0 + 2520);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB69;

}


extern void work_m_00000000001164636108_0934858945_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_27_1};
	xsi_register_didat("work_m_00000000001164636108_0934858945", "isim/test_isim_beh.exe.sim/work/m_00000000001164636108_0934858945.didat");
	xsi_register_executes(pe);
}
