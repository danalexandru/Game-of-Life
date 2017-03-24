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
static const char *ng0 = "D:/Documents/School/poli/anul III/Semestrul I/AC/Tema/Tema2/skel 3/skel/world.v";
static const char *ng1 = "test.data";
static const char *ng2 = "r";
static const char *ng3 = "error opening data file\n";
static const char *ng4 = "seed=%d\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading seed value\n";
static int ng7[] = {0, 0};
static int ng8[] = {64, 0};
static const char *ng9 = "%d\n";
static const char *ng10 = "error reading test data\n";



static void Initial_18_0(char *t0)
{
    char t8[8];
    char t18[8];
    char t22[8];
    char t29[8];
    char t30[8];
    char t60[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
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
    char *t42;
    char *t43;
    unsigned int t44;
    int t45;
    char *t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;

LAB0:    xsi_set_current_line(18, ng0);

LAB2:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:
LAB5:
LAB1:    return;
LAB3:    xsi_set_current_line(19, ng0);

LAB6:    xsi_set_current_line(21, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t9 = (t8 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 2544);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 2544);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t3 = *((unsigned int *)t10);
    t4 = (~(t3));
    t5 = *((unsigned int *)t9);
    t6 = (t5 & t4);
    t7 = (t6 & 4294967295U);
    if (t7 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t10) == 0)
        goto LAB7;

LAB9:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;

LAB10:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2544);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 2704);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng4, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 2704);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB19:    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2544);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    goto LAB5;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(22, ng0);

LAB14:    xsi_set_current_line(23, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(24, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(28, ng0);

LAB18:    xsi_set_current_line(29, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(30, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB20:    xsi_set_current_line(34, ng0);

LAB22:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng7)));
    t19 = (t0 + 3024);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 32);

LAB23:    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 2864);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB19;

LAB24:    xsi_set_current_line(35, ng0);

LAB26:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 2704);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng7)));
    memset(t18, 0, 8);
    xsi_vlog_signed_not_equal(t18, 32, t20, 32, t21, 32);
    t23 = (t18 + 4);
    t13 = *((unsigned int *)t23);
    t14 = (~(t13));
    t15 = *((unsigned int *)t18);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(40, ng0);

LAB33:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2544);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 2384);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t19 = (t0 + 2384);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t23 = (t0 + 2384);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2864);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t31 = (t0 + 3024);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t18, 1, t12, t21, t25, 2, 2, t28, 32, 1, t33, 32, 1);
    xsi_vlog_bit_copy(t8, 0, t18, 0, 1);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng9, 2, t0, (char)118, t8, 1);
    t34 = (t22 + 4);
    *((int *)t34) = 0;
    t35 = (t0 + 2384);
    t36 = (t0 + 2384);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 2384);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 2864);
    t43 = (t42 + 56U);
    t46 = *((char **)t43);
    t54 = (t0 + 3024);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    xsi_vlog_generic_convert_array_indices(t29, t30, t38, t41, 2, 2, t46, 32, 1, t56, 32, 1);
    t57 = (t29 + 4);
    t3 = *((unsigned int *)t57);
    t45 = (!(t3));
    t58 = (t30 + 4);
    t4 = *((unsigned int *)t58);
    t48 = (!(t4));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB34;

LAB35:    t59 = ((char*)((ng5)));
    memset(t60, 0, 8);
    xsi_vlog_signed_not_equal(t60, 32, t22, 32, t59, 32);
    t61 = (t60 + 4);
    t7 = *((unsigned int *)t61);
    t13 = (~(t7));
    t14 = *((unsigned int *)t60);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB29:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB23;

LAB27:    xsi_set_current_line(36, ng0);

LAB30:    xsi_set_current_line(38, ng0);
    t24 = (t0 + 2704);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((int *)t22) = xsi_vlog_rtl_dist_uniform(1, t26, -2147483648, 2147483647);
    t27 = (t22 + 4);
    *((int *)t27) = 0;
    t28 = (t0 + 2384);
    t31 = (t0 + 2384);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2384);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 2864);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3024);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t29, t30, t33, t36, 2, 2, t39, 32, 1, t42, 32, 1);
    t43 = (t29 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB31;

LAB32:    goto LAB29;

LAB31:    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t30);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t28, t22, 0, *((unsigned int *)t30), t53);
    goto LAB32;

LAB34:    t5 = *((unsigned int *)t29);
    t6 = *((unsigned int *)t30);
    t52 = (t5 - t6);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t35, t8, 0, *((unsigned int *)t30), t53);
    goto LAB35;

LAB36:    xsi_set_current_line(42, ng0);

LAB39:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(0, 0, 1, ng10, 1, t0);
    xsi_set_current_line(44, ng0);
    xsi_vlog_finish(1);
    goto LAB38;

}

static void Cont_56_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2384);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2384);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1344U);
    t13 = *((char **)t12);
    t12 = (t0 + 1504U);
    t14 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 1, t4, t8, t11, 2, 2, t13, 6, 2, t14, 6, 2);
    t12 = (t0 + 4856);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t27 = (t0 + 4760);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_59_2(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    t11 = (t0 + 2384);
    t15 = (t0 + 2384);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2384);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1344U);
    t22 = *((char **)t21);
    t21 = (t0 + 1504U);
    t23 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 2, t22, 6, 2, t23, 6, 2);
    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (!(t24));
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t33, 0LL);
    goto LAB10;

}


extern void work_m_00000000000642895989_0884304174_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Cont_56_1,(void *)Always_59_2};
	xsi_register_didat("work_m_00000000000642895989_0884304174", "isim/test_isim_beh.exe.sim/work/m_00000000000642895989_0884304174.didat");
	xsi_register_executes(pe);
}
