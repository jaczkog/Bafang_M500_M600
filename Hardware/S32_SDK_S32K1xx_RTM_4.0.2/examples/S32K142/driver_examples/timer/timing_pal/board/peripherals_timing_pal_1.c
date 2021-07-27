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
  UUID: f680c506-f49b-4dfd-bc04-f34aa7a60054
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_timing_pal_1.h"

/*******************************************************************************
 * timing_pal_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'timing_pal_1'
- type: 'timing_pal_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'timing_pal'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPIT_0'
- config_sets:
  - timing_pal:
    - timingPalInst:
      - name: 'timingLpitInst0'
      - readonly: 'true'
    - timingPalConfig:
      - name: 'timingLpit_InitConfig0'
      - readonly: 'true'
      - chanConfigList:
        - 0:
          - channel: '0U'
          - chanType: 'TIMER_CHAN_TYPE_CONTINUOUS'
          - timerCallback: 'timingLpitInst0_callback'
          - callbackParameter: 'NULL'
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
const timing_instance_t timingLpitInst0 = {
   .instType = TIMING_INST_TYPE_LPIT,
   .instIdx = 0
};
/* Channel configuration array */
const timer_chan_config_t timingLpitInst0_chanConfig[1] = {
    /* Channel configuration 0 */
    {
       .channel = 0U,
       .chanType = TIMER_CHAN_TYPE_CONTINUOUS,
       .callback = timingLpitInst0_callback,
       .callbackParam = NULL
    }
};

/* Timing configuration */
const timer_config_t timingLpit_InitConfig0 = {
   .chanConfigArray = timingLpitInst0_chanConfig,
   .numChan = 1U,
   .extension = NULL
};
