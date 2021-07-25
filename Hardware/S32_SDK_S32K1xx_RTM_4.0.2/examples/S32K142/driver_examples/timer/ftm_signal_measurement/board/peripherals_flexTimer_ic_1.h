/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef flexTimer_ic_1_H
#define flexTimer_ic_1_H

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The global macro will be used in function call of the module.
 *
 */
/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "ftm_ic_driver.h"

/*******************************************************************************
 * Definitions 
 ******************************************************************************/
/*! @brief Device instance number */
#define INST_FLEXTIMER_IC_1  1U


/*******************************************************************************
 * Global variables 
 ******************************************************************************/

/* Channels configuration structure for flexTimer_ic1* input capture channels */
extern ftm_input_ch_param_t flexTimer_ic_1_InputCaptureChannelConfig[1];

/* Channels configuration structure for flexTimer_ic1 input capture */
extern ftm_input_param_t flexTimer_ic_1_InputCaptureConfig;

/* Global configuration of flexTimer_ic1 */
extern ftm_user_config_t flexTimer_ic_1_InitConfig;



#endif /* flexTimer_ic_1_H */
