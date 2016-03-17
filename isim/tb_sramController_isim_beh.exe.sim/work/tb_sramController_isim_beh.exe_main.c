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

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *VL_P_2533777724;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004134447467_2073120511_init();
    work_m_00000000003374018338_2359918093_init();
    work_m_00000000003420723250_1694568045_init();
    ieee_p_2592010699_init();
    std_textio_init();
    vl_p_2533777724_init();
    ieee_p_1242562249_init();
    work_a_3041023764_3212880686_init();
    work_a_0684891692_3671711236_init();


    xsi_register_tops("work_a_0684891692_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");

    return xsi_run_simulation(argc, argv);

}
