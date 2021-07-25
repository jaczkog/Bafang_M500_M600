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
  UUID: 1b580515-e8dd-466f-8118-9396935bbfdf
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_FreeRTOS.h"

/*******************************************************************************
 * FreeRTOS initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FreeRTOS'
- type: 'freertos'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'freertos'
- functional_group: 'BOARD_InitPeripherals'
- config_sets:
  - freertos_driver:
    - general_tab:
      - configCPU_CLOCK_HZ: '48000000'
      - configTICK_RATE_HZ: '1000'
      - configMAX_PRIORITIES: '5'
      - configMINIMAL_STACK_SIZE: '90'
      - configMAX_TASK_NAME_LEN: '10'
      - configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY: '1'
      - configUSE_16_BIT_TICKS: 'false'
      - configIDLE_SHOULD_YIELD: 'true'
      - configUSE_PREEMPTION: 'true'
      - configNUM_THREAD_LOCAL_STORAGE_POINTERS: '0'
      - configUSE_PORT_OPTIMISED_TASK_SELECTION: 'true'
      - configUSE_TASK_NOTIFICATIONS: 'true'
      - configUSE_TIME_SLICING: 'true'
      - configUSE_NEWLIB_REENTRANT: 'false'
      - configENABLE_BACKWARD_COMPATIBILITY: 'true'
      - configUSE_POSIX_ERRNO: 'false'
      - configMESSAGE_BUFFER_LENGTH_TYPE: ''
      - configASSERT_id:
        - boolConfigASSERT: 'true'
        - configASSERT: 'if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); }'
    - memory_tab:
      - configSUPPORT_STATIC_ALLOCATION: 'false'
      - configSUPPORT_DYNAMIC_ALLOCATION: 'true'
      - memory_scheme_id: 'heap1'
      - configTOTAL_HEAP_SIZE: '4096'
      - configAPPLICATION_ALLOCATED_HEAP: 'false'
    - hook_tab:
      - configUSE_IDLE_HOOK: 'true'
      - configUSE_TICK_HOOK: 'true'
      - configUSE_MALLOC_FAILED_HOOK: 'true'
      - configCHECK_FOR_STACK_OVERFLOW: '2'
      - configUSE_DAEMON_TASK_STARTUP_HOOK: 'false'
    - rttsgrd_tab:
      - configGENERATE_RUN_TIME_STATS_id:
        - configGENERATE_RUN_TIME_STATS: 'false'
        - portCONFIGURE_TIMER_FOR_RUN_TIME_STATS: ''
        - portGET_RUN_TIME_COUNTER_VALUE: 'xTaskGetTickCount()'
      - configUSE_TRACE_FACILITY: 'false'
      - configUSE_STATS_FORMATTING_FUNCTIONS: 'true'
    - co_routines_tab:
      - configUSE_CO_ROUTINES: 'false'
      - configMAX_CO_ROUTINE_PRIORITIES: '2'
    - sandm_tab:
      - configUSE_MUTEXES: 'true'
      - configUSE_RECURSIVE_MUTEXES: 'true'
      - configUSE_COUNTING_SEMAPHORES: 'true'
    - st_tab:
      - configUSE_TIMERS: 'true'
      - configTIMER_TASK_PRIORITY: '2'
      - configTIMER_QUEUE_LENGTH: '10'
      - configTIMER_TASK_STACK_DEPTH: '180'
    - tidlem_tab:
      - configUSE_TICKLESS_IDLE: 'false'
      - configEXPECTED_IDLE_TIME_BEFORE_SLEEP: '2'
      - configPRE_SLEEP_PROCESSING: ''
      - configPOST_SLEEP_PROCESSING: ''
    - queue_tab:
      - configQUEUE_REGISTRY_SIZE: '8'
      - configUSE_QUEUE_SETS: 'false'
    - api_tab:
      - INCLUDE_vTaskPrioritySet: 'true'
      - INCLUDE_uxTaskPriorityGet: 'true'
      - INCLUDE_vTaskDelete: 'true'
      - INCLUDE_vTaskSuspend: 'true'
      - INCLUDE_vTaskDelayUntil: 'true'
      - INCLUDE_vTaskDelay: 'true'
      - INCLUDE_xTaskGetSchedulerState: 'true'
      - INCLUDE_xTaskGetCurrentTaskHandle: 'true'
      - INCLUDE_uxTaskGetStackHighWaterMark: 'true'
      - INCLUDE_xTaskGetIdleTaskHandle: 'false'
      - INCLUDE_eTaskGetState: 'true'
      - INCLUDE_xEventGroupSetBitFromISR: 'true'
      - INCLUDE_xTimerPendFunctionCall: 'true'
      - INCLUDE_xTaskAbortDelay: 'true'
      - INCLUDE_xTaskGetHandle: 'true'
      - INCLUDE_xTaskResumeFromISR: 'true'
      - INCLUDE_xQueueGetMutexHolder: 'true'
    - us_tab:
      - configUSER_SETTINGS: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */



