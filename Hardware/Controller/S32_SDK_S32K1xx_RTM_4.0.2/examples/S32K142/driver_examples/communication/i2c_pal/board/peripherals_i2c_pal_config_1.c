/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v9.0
processor: S32K142
package_id: S32K142_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_402
processor_version: 0.0.0
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: a6d43dcb-893a-49cd-9d9d-0bb26ff0f05b
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_i2c_pal_config_1.h"

/*******************************************************************************
 * i2c_pal_config_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'i2c_pal_config_1'
- type: 'i2c_pal_config'
- mode: 'LPI2C'
- custom_name_enabled: 'false'
- type_id: 'i2c_pal'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPI2C0'
- config_sets:
  - i2c_pal:
    - i2c_palMasterConfiguration: []
    - i2c_palSlaveConfiguration:
      - 0:
        - name: 'i2c_pal_lpi2c0_SlaveConfig0'
        - readonly: 'false'
        - i2c_pal_slave_cfg_slaveAddress: '0x32'
        - i2c_pal_slave_cfg_is10bitAddr: 'false'
        - i2c_pal_slave_cfg_slaveListening: 'true'
        - i2c_pal_slave_cfg_operatingMode: 'I2C_PAL_STANDARD_MODE'
        - i2c_pal_slave_cfg_transferType: 'I2C_PAL_USING_INTERRUPTS'
        - i2c_pal_slave_cfg_dmaChannel: '2'
        - i2c_pal_slave_cfg_callback: 'i2c1_SlaveCallback0'
        - i2c_pal_slave_cfg_callbackParam: 'NULL'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */

/* PAL instance information */
i2c_instance_t lpi2c0_instance = {I2C_INST_TYPE_LPI2C, 0U};

i2c_slave_t i2c_pal_lpi2c0_SlaveConfig0 = {
  .slaveAddress = 50U,
  .is10bitAddr = false,
  .slaveListening = true,
  .operatingMode = I2C_PAL_STANDARD_MODE,
  .transferType = I2C_PAL_USING_INTERRUPTS,
  .dmaChannel = 2U,
  .callback = i2c1_SlaveCallback0,
  .callbackParam = NULL
};

