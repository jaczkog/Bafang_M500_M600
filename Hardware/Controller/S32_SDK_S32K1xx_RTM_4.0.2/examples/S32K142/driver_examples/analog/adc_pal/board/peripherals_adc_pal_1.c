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
  UUID: c9278eec-cc08-4fe0-b1d9-9bdb582dda10
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_adc_pal_1.h"

/*******************************************************************************
 * adc_pal_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'adc_pal_1'
- type: 'adc_pal_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'adc_pal'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC_0'
- config_sets:
  - adc_pal:
    - adcPalConfig:
      - name: 'adc_pal_1_config'
      - readOnly: 'true'
      - sampleTicks: '150'
      - extensionName: 'adc_pal_1_extensionConfig'
      - adcClkDiv: 'ADC_CLK_DIVIDE_1'
      - adcResolution: 'ADC_RESOLUTION_8BIT'
      - adcInputClock: 'ADC_CLK_ALT_1'
      - adcVoltageRef: 'ADC_VOLTAGEREF_VREF'
      - adcSupplyMonitoringEnable: 'false'
      - adcPDBPrescaler: 'PDB_CLK_PREDIV_BY_1'
      - conversionGroupArrayName: 'adc_pal_1_groupArray'
      - conversionGroupArray:
        - 0:
          - numSetsResults: '1'
          - hwTriggerSupport: 'false'
          - triggerSource: 'TRGMUX_TRIG_SOURCE_DISABLED'
          - delayType: 'ADC_DELAY_TYPE_NO_DELAY'
          - continuousConvEn: 'false'
          - callback: 'adc_pal_1_callback0'
          - callbackUserData: 'NULL'
          - resultsName: 'adc_pal_1_results0'
          - chansArrayName: 'adc_pal_1_channelsArray0'
          - inputChannelArray:
            - 0:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 1:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 2:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 3:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
        - 1:
          - numSetsResults: '1'
          - hwTriggerSupport: 'false'
          - triggerSource: 'TRGMUX_TRIG_SOURCE_DISABLED'
          - delayType: 'ADC_DELAY_TYPE_NO_DELAY'
          - continuousConvEn: 'false'
          - callback: 'NULL'
          - callbackUserData: 'NULL'
          - resultsName: 'adc_pal_1_results1'
          - chansArrayName: 'adc_pal_1_channelsArray1'
          - inputChannelArray:
            - 0:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT0'
              - chanDelay: '0'
        - 2:
          - numSetsResults: '1'
          - hwTriggerSupport: 'true'
          - triggerSource: 'TRGMUX_TRIG_SOURCE_LPTMR0'
          - delayType: 'ADC_DELAY_TYPE_NO_DELAY'
          - continuousConvEn: 'false'
          - callback: 'adc_pal_1_callback2'
          - callbackUserData: 'NULL'
          - resultsName: 'adc_pal_1_results2'
          - chansArrayName: 'adc_pal_1_channelsArray2'
          - inputChannelArray:
            - 0:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 1:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 2:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 3:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
            - 4:
              - adcInputChannel: 'ADC_INPUTCHAN_EXT12'
              - chanDelay: '0'
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
const adc_instance_t adc_pal_1_instance = { ADC_INST_TYPE_ADC_S32K1xx, 0u }; 

/*! @brief PAL extension */
static extension_adc_s32k1xx_t adc_pal_1_extensionConfig = { 
	.clockDivide              = ADC_CLK_DIVIDE_1,
	.resolution               = ADC_RESOLUTION_8BIT,
	.inputClock               = ADC_CLK_ALT_1,
	.voltageRef               = ADC_VOLTAGEREF_VREF,
	.supplyMonitoringEnable   = false,
	.pdbPrescaler             = PDB_CLK_PREDIV_BY_1
};

/*! @brief configuration structure */
const adc_config_t adc_pal_1_config = { 
	.groupConfigArray  = adc_pal_1_groupArray,
	.numGroups         = 3u,
	.sampleTicks       = 150u,
	.extension         = &adc_pal_1_extensionConfig
};

/*! @brief array of conversion groups */
const adc_group_config_t adc_pal_1_groupArray[3u] = {
    /* Conversion group 0 */
	{
		.inputChannelArray   = adc_pal_1_channelsArray0,
		.resultBuffer        = adc_pal_1_results0,
		.numChannels         = 4u,
		.numSetsResultBuffer = 1u,
		.hwTriggerSupport    = false,
		.triggerSource       = TRGMUX_TRIG_SOURCE_DISABLED,
		.delayType           = ADC_DELAY_TYPE_NO_DELAY,
		.delayArray          = NULL,
		.continuousConvEn    = false,
		.callback            = adc_pal_1_callback0,
		.callbackUserData    = NULL
	},
    /* Conversion group 1 */
	{
		.inputChannelArray   = adc_pal_1_channelsArray1,
		.resultBuffer        = adc_pal_1_results1,
		.numChannels         = 1u,
		.numSetsResultBuffer = 1u,
		.hwTriggerSupport    = false,
		.triggerSource       = TRGMUX_TRIG_SOURCE_DISABLED,
		.delayType           = ADC_DELAY_TYPE_NO_DELAY,
		.delayArray          = NULL,
		.continuousConvEn    = false,
		.callback            = NULL,
		.callbackUserData    = NULL
	},
    /* Conversion group 2 */
	{
		.inputChannelArray   = adc_pal_1_channelsArray2,
		.resultBuffer        = adc_pal_1_results2,
		.numChannels         = 5u,
		.numSetsResultBuffer = 1u,
		.hwTriggerSupport    = true,
		.triggerSource       = TRGMUX_TRIG_SOURCE_LPTMR0,
		.delayType           = ADC_DELAY_TYPE_NO_DELAY,
		.delayArray          = NULL,
		.continuousConvEn    = false,
		.callback            = adc_pal_1_callback2,
		.callbackUserData    = NULL
	},
};

/*! @brief group 0: input channels array */
adc_input_chan_t adc_pal_1_channelsArray0[4u] = {
	/* 0 */  ADC_INPUTCHAN_EXT12,
	/* 1 */  ADC_INPUTCHAN_EXT12,
	/* 2 */  ADC_INPUTCHAN_EXT12,
	/* 3 */  ADC_INPUTCHAN_EXT12,
};
/*! @brief group 0: results buffer */
uint16_t adc_pal_1_results0[4u];

/*! @brief group 1: input channels array */
adc_input_chan_t adc_pal_1_channelsArray1[1u] = {
	/* 0 */  ADC_INPUTCHAN_EXT0,
};
/*! @brief group 1: results buffer */
uint16_t adc_pal_1_results1[1u];

/*! @brief group 2: input channels array */
adc_input_chan_t adc_pal_1_channelsArray2[5u] = {
	/* 0 */  ADC_INPUTCHAN_EXT12,
	/* 1 */  ADC_INPUTCHAN_EXT12,
	/* 2 */  ADC_INPUTCHAN_EXT12,
	/* 3 */  ADC_INPUTCHAN_EXT12,
	/* 4 */  ADC_INPUTCHAN_EXT12,
};
/*! @brief group 2: results buffer */
uint16_t adc_pal_1_results2[5u];


