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
#include "peripherals_ic_pal_1.h"

/*******************************************************************************
 * ic_pal_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ic_pal_1'
- type: 'icPal'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'ic_pal'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FTM_1'
- config_sets:
  - ic_pal:
    - icPalInstanceCfg:
      - name: 'instanceConfig'
      - readOnly: 'false'
      - instType: 'IC_INST_TYPE_FTM'
    - icPalClockConfig:
      - ClockSource: 'FTM_CLOCK_SOURCE_SYSTEMCLK'
      - icPalPrescaler: '1'
    - icPalConfig:
      - icPalChnConfigList:
        - 0:
          - icPalName: 'ic_pal_1_ChannelConfig0'
          - hwChannelId: '0'
          - inputCaptureMode: 'IC_MEASURE_RISING_EDGE_PERIOD'
          - filterEn: 'false'
          - filterValue: '0'
          - continuousMode: 'true'
          - channelCallbacks: 'NULL'
          - channelCallbackParams: 'NULL'
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
/*! @brief PAL instance information */
ic_instance_t ic_pal_1_instanceConfig = { IC_INST_TYPE_FTM, 1U };

/*! @brief Channel configuration array */
ic_input_ch_param_t ic_pal_1_ChnConfig[1] =
{
    /* Channel configuration 0 */
    {
        .hwChannelId           = 0, /* Hardware channel ID */
        .inputCaptureMode      = IC_MEASURE_RISING_EDGE_PERIOD, /* Input capture mode */
        .filterEn              = false, /* Enable/Disable filter */
        .filterValue           = 0U, /* filter value */
        .channelExtension      = &ic_pal_1_ftmChnExtension0, /* channel extension */
        .channelCallbackParams = NULL, /* callback parameter */
        .channelCallbacks      = NULL /* Callback */
    }
};

/*! @brief The channel extension configurations */

channel_extension_ftm_for_ic_t ic_pal_1_ftmChnExtension0 =
{
    /* Continuous measurement for configuration 0 */
    .continuousModeEn = true
};

/*! @brief IP specific extension configuration */
extension_ftm_for_ic_t  ic_pal_1_ftmExtension =
{
    .ftmClockSource       = FTM_CLOCK_SOURCE_SYSTEMCLK, /* The clock source */
    .ftmPrescaler         = FTM_CLOCK_DIVID_BY_1 /* The prescaler for input capture counter */
};

/*! @brief Input capture configuration */
ic_config_t  ic_pal_1_InitConfig =
{
    .nNumChannels  = 1U,
    .inputChConfig = ic_pal_1_ChnConfig,
    .extension     = &ic_pal_1_ftmExtension
};


