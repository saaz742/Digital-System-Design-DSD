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
static const char *ng0 = "%gns   feedback = %d lfsr_reg = %b  lfsr_out = %d";
static int ng1[] = {1, 0};
static const char *ng2 = "C:/Users/sa/Desktop/dsd4/HW4-98170668/dsd4f/test.v";
static int ng3[] = {0, 0};

void Monitor_14_1(char *);
void Monitor_21_2(char *);
void Monitor_14_1(char *);
void Monitor_21_2(char *);


static void Monitor_14_1_Func(char *t0)
{
    char t1[16];
    char t14[8];
    char *t2;
    char *t3;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 5788);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 5812);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 5836);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 5860);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t18, 2, t19, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t6, 1, (char)118, t9, 17, (char)118, t14, 1);

LAB1:    return;
}

static void Monitor_21_2_Func(char *t0)
{
    char t1[16];
    char t14[8];
    char *t2;
    char *t3;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 5892);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 5916);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 5940);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 5964);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t18, 2, t19, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t1, 64, (char)118, t6, 1, (char)118, t9, 8, (char)118, t14, 1);

LAB1:    return;
}

static void Initial_11_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng2);

LAB4:    xsi_set_current_line(12, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(13, ng2);
    *((int *)t4) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 17);
    xsi_set_current_line(14, ng2);
    Monitor_14_1(t0);
    xsi_set_current_line(15, ng2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng2);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(16, ng2);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(17, ng2);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 600000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(18, ng2);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19, ng2);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(19, ng2);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(20, ng2);
    *((int *)t4) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 17);
    xsi_set_current_line(21, ng2);
    Monitor_21_2(t0);
    xsi_set_current_line(22, ng2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng2);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(23, ng2);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_25_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
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
    char *t24;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng2);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

void Monitor_14_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3152);
    t2 = (t0 + 3912);
    xsi_vlogfile_monitor((void *)Monitor_14_1_Func, t1, t2);

LAB1:    return;
}

void Monitor_21_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3400);
    t2 = (t0 + 3928);
    xsi_vlogfile_monitor((void *)Monitor_21_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001023658266_1985558087_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_25_3,(void *)Monitor_14_1,(void *)Monitor_21_2};
	xsi_register_didat("work_m_00000000001023658266_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000001023658266_1985558087.didat");
	xsi_register_executes(pe);
}
