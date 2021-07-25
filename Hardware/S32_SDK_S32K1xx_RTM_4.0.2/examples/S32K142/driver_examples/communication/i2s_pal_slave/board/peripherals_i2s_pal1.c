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
#include "peripherals_i2s_pal1.h"

/*******************************************************************************
 * i2s_pal1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'i2s_pal1'
- type: 'i2s_pal'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'i2s_pal'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXIO'
- config_sets:
  - i2s_pal:
    - i2sPalInst:
      - name: 'i2sOverFlexio0Instance'
      - instType: 'I2S_INST_TYPE_FLEXIO'
    - i2sCfgArray:
      - 0:
        - i2sCommonConfig:
          - name: 'i2s_pal2_Config0'
          - readonly: 'false'
          - mode: 'I2S_SLAVE'
          - transferType: 'I2S_USING_INTERRUPT'
          - baudRate: '100000'
          - wordWidth: '16'
          - rxDMAChannel: '0'
          - txDMAChannel: '0'
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

const i2s_instance_t i2sOverFlexio0Instance = {
  .instType = I2S_INST_TYPE_FLEXIO,
  .instIdx = 0
};

i2s_user_config_t i2s_pal2_Config0 = {
  .mode = I2S_SLAVE,
  .transferType = I2S_USING_INTERRUPT,
  .baudRate = 100000UL,
  .wordWidth = 16,
  .rxDMAChannel = 0UL,
  .txDMAChannel = 0UL,
  .callback = NULL
};


