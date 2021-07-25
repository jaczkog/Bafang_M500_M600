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
#include "peripherals_edma_config_1.h"

/*******************************************************************************
 * edma_config_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'edma_config_1'
- type: 'edma_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'edma'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'EDMA'
- config_sets:
  - edma_driver:
    - settings_edmaUserCfg:
      - userStateStruct: 'dmaController_State'
      - array_userCfgStructs:
        - 0:
          - userCfgName: 'dmaController_InitConfig'
          - cfgType: 'edma_user_config_t'
          - readOnly: 'true'
          - chnArbitration: 'EDMA_ARBITRATION_FIXED_PRIORITY'
          - haltOnError: 'false'
    - settings_array_edmaChCfg:
      - array_chCfgStructs:
        - 0:
          - chStateStructName: 'dmaControllerChn0_State'
          - chConfigName: 'dmaControllerChn0_Config'
          - chType: 'edma_channel_config_t'
          - virtCh: '0'
          - chPrio: 'EDMA_CHN_DEFAULT_PRIORITY'
          - chReq: 'EDMA_REQ_DISABLED'
          - chCallback: 'NULL'
          - chCallbackParam: 'NULL'
          - enableTrigger: 'false'
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
edma_state_t dmaController_State;

edma_chn_state_t dmaControllerChn0_State;

edma_chn_state_t * const edmaChnStateArray[] = {
    &dmaControllerChn0_State,
};

edma_channel_config_t dmaControllerChn0_Config = {
    .channelPriority = EDMA_CHN_DEFAULT_PRIORITY,
    .virtChnConfig = EDMA_CHN0_NUMBER,
    .source = EDMA_REQ_DISABLED,
    .callback = NULL,
    .callbackParam = NULL,
    .enableTrigger = false,
};

const edma_channel_config_t * const edmaChnConfigArray[] = {
    &dmaControllerChn0_Config,
};

const edma_user_config_t dmaController_InitConfig = {
    .chnArbitration = EDMA_ARBITRATION_FIXED_PRIORITY,
    .haltOnError = false
};


