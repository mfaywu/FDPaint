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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_04284627112054182733_1571443074_init();
    xilinxcorelib_ver_m_18166792875774041790_2559047490_init();
    xilinxcorelib_ver_m_17738287534884592592_3057360831_init();
    xilinxcorelib_ver_m_10066368518302646626_0253986999_init();
    work_m_14056882636803624207_3076143274_init();
    work_m_08960420784384294217_3609807383_init();
    work_m_14319934519654965095_1465936241_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_14319934519654965095_1465936241");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
