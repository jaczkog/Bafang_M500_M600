/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef lpi2c_config_1_H
#define lpi2c_config_1_H

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
#include "lpi2c_driver.h"

/*******************************************************************************
 * Definitions 
 ******************************************************************************/

/* LPI2C instance */
#define INST_LPI2C0  0U

/*******************************************************************************
 * Global variables 
 ******************************************************************************/

/* Slave module configurations */
extern lpi2c_slave_user_config_t lpi2c0_SlaveConfig0;

/* Define external callbacks for slave devices */
extern void lpi2c0_SlaveCallback0(i2c_slave_event_t slaveEvent,void *userData);



#endif /* lpi2c_config_1_H */
