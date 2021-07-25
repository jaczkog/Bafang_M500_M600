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
  UUID: 156cb9dc-bb71-431b-aff5-fbee37f7dbe4
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_flexio_i2s_config_1.h"

/*******************************************************************************
 * flexio_i2s_config_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'flexio_i2s_config_1'
- type: 'flexio_i2s_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'flexio_i2s'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXIO'
- config_sets:
  - flexio_i2s_driver:
    - flexio_i2s_master_Configuration:
      - 0:
        - name: 'flexio_i2s1_MasterConfig0'
        - readonly: 'true'
        - driverType: 'FLEXIO_DRIVER_TYPE_DMA'
        - baudRate: '20000'
        - bitsWidth: '8'
        - txPin: '2'
        - rxPin: '3'
        - sckPin: '0'
        - wsPin: '1'
        - callback: 'NULL'
        - rxDMAChannel: '1'
        - txDMAChannel: '0'
    - flexio_i2s_slave_Configuration:
      - 0:
        - name: 'Flexio_i2s_slave_Config0'
        - readonly: 'true'
        - driverType: 'FLEXIO_DRIVER_TYPE_INTERRUPTS'
        - bitsWidth: '8'
        - txPin: '2'
        - rxPin: '3'
        - sckPin: '0'
        - wsPin: '1'
        - callback: 'NULL'
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

/* FlexioI2S master configuration structure */
const flexio_i2s_master_user_config_t flexio_i2s1_MasterConfig0 = {
  .driverType = FLEXIO_DRIVER_TYPE_DMA,
  .baudRate = 20000UL,
  .bitsWidth = 8U,
  .txPin = 2U,
  .rxPin = 3U,
  .sckPin = 0U,
  .wsPin = 1U,
  .callback = NULL,
  .callbackParam = NULL,
  .rxDMAChannel = 1U,
  .txDMAChannel = 0U
};

/* FlexioI2S slave configuration structure */
const flexio_i2s_slave_user_config_t Flexio_i2s_slave_Config0 = {
  .driverType = FLEXIO_DRIVER_TYPE_INTERRUPTS,
  .bitsWidth = 8U,
  .txPin = 2U,
  .rxPin = 3U,
  .sckPin = 0U,
  .wsPin = 1U,
  .callback = NULL,
  .callbackParam = NULL
};


