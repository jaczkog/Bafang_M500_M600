/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef spi_pal_1_H
#define spi_pal_1_H

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
#include "spi_pal.h"

/*******************************************************************************
 * Global variables 
 ******************************************************************************/
/*! @brief Device instance number */
extern spi_instance_t spi_pal_1_Instance;

/* FLEXIO extension for SPI_PAL */
extern extension_flexio_for_spi_t FLEXIO_MasterInitConfig0Extension;
/* SPI_PAL Master Configuration 0 */
extern spi_master_t FLEXIO_MasterInitConfig0;




#endif /* spi_pal_1_H */
