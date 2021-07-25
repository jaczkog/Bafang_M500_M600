/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef edma_config_H
#define edma_config_H

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "edma_driver.h"

/*******************************************************************************
 * Definitions 
 ******************************************************************************/
/*! @brief Channel number for channel configuration #0 */
#define EDMA_CHN0_NUMBER   0U
/*! @brief Channel number for channel configuration #1 */
#define EDMA_CHN1_NUMBER   1U

/*! @brief The total number of configured channels */
#define EDMA_CONFIGURED_CHANNELS_COUNT  2U

/*******************************************************************************
 * Global variables 
 ******************************************************************************/
/*! @brief Driver state structure which holds driver runtime data */
extern edma_state_t dmaController_State;

/*! @brief eDma channel state structure 0. Holds channel runtime data */
extern edma_chn_state_t dmaControllerChn0_State;

/*! @brief eDma channel state structure 1. Holds channel runtime data */
extern edma_chn_state_t dmaControllerChn1_State;

/*! @brief Array of channel state structures */
extern edma_chn_state_t * const edmaChnStateArray[EDMA_CONFIGURED_CHANNELS_COUNT];

/*! @brief User configuration */
extern const edma_user_config_t dmaController_InitConfig;

/*! @brief eDma channel 0 configuration */
extern edma_channel_config_t dmaControllerChn0_Config;

/*! @brief eDma channel 1 configuration */
extern edma_channel_config_t dmaControllerChn1_Config;

/*! @brief Array of channel configuration structures */
extern const edma_channel_config_t * const edmaChnConfigArray[EDMA_CONFIGURED_CHANNELS_COUNT];



#endif /* edma_config_H */
