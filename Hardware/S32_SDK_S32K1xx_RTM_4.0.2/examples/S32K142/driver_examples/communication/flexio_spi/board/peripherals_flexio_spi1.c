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
  UUID: 4dca2494-466d-4ad4-bd19-faca708d0d8d
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_flexio_spi1.h"

/*******************************************************************************
 * flexio_spi1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'flexio_spi1'
- type: 'flexio_spi_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'flexio_spi'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXIO'
- config_sets:
  - flexio_spi_driver:
    - flexio_spi_master_Configuration:
      - 0:
        - name: 'flexio_spi1_MasterConfig0'
        - readonly: 'true'
        - baudRate: '100000'
        - driverType: 'FLEXIO_DRIVER_TYPE_INTERRUPTS'
        - bitOrder: 'FLEXIO_SPI_TRANSFER_MSB_FIRST'
        - transferSize: 'FLEXIO_SPI_TRANSFER_1BYTE'
        - clockPolarity: '0'
        - clockPhase: '0'
        - mosiPin: '0'
        - misoPin: '1'
        - sckPin: '2'
        - ssPin: '3'
        - callback: 'NULL'
    - flexio_spi_slave_Configuration:
      - 0:
        - name: 'flexio_spi1_SlaveConfig0'
        - readonly: 'true'
        - driverType: 'FLEXIO_DRIVER_TYPE_INTERRUPTS'
        - bitOrder: 'FLEXIO_SPI_TRANSFER_MSB_FIRST'
        - transferSize: 'FLEXIO_SPI_TRANSFER_1BYTE'
        - clockPolarity: '0'
        - clockPhase: '0'
        - mosiPin: '0'
        - misoPin: '1'
        - sckPin: '2'
        - ssPin: '3'
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

/* FlexioSPI master configuration structure */
const flexio_spi_master_user_config_t flexio_spi1_MasterConfig0 = {
  .baudRate = 100000UL,
  .driverType = FLEXIO_DRIVER_TYPE_INTERRUPTS,
  .bitOrder = FLEXIO_SPI_TRANSFER_MSB_FIRST,
  .transferSize = FLEXIO_SPI_TRANSFER_1BYTE,
  .clockPolarity = 0U,
  .clockPhase = 0U,
  .mosiPin = 0U,
  .misoPin = 1U,
  .sckPin = 2U,
  .ssPin = 3U,
  .callback = NULL,
  .callbackParam = NULL
};

/* FlexioSPI slave configuration structure */
const flexio_spi_slave_user_config_t flexio_spi1_SlaveConfig0 = {
  .driverType = FLEXIO_DRIVER_TYPE_INTERRUPTS,
  .bitOrder = FLEXIO_SPI_TRANSFER_MSB_FIRST,
  .transferSize = FLEXIO_SPI_TRANSFER_1BYTE,
  .clockPolarity = 0U,
  .clockPhase = 0U,
  .mosiPin = 0U,
  .misoPin = 1U,
  .sckPin = 2U,
  .ssPin = 3U,
  .callback = NULL,
  .callbackParam = NULL
};


