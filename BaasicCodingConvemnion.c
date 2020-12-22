/**
*   @file    Can_TS_52.c
*   @version M4_SRC_SW_VERSION_MAJOR.M4_SRC_SW_VERSION_MINOR.M4_SRC_SW_VERSION_PATCH
*
*   @brief   AUTOSAR M4_SRC_MODULE_NAME - Check basic APIs.
*   @details Checking Driver with a particular configuration.
*
*   @addtogroup CAN_TESTS
*   @{
*/
/*==================================================================================================
*   Project              : M4_SRC_PROJECT_NAME
*   Platform             : M4_SRC_MCU_FAMILY
*   Peripheral           : M4_SRC_USED_PERIPHERAL
*   Dependencies         : M4_SRC_AR_MODULE_DEPENDENCY
*
*   Autosar Version      : M4_SRC_AR_SPEC_VERSION_MAJOR.M4_SRC_AR_SPEC_VERSION_MINOR.M4_SRC_AR_SPEC_VERSION_PATCH
*   Autosar Revision     : M4_SRC_AR_RELEASE_REVISION
*   Autosar Conf.Variant :
*   SW Version           : M4_SRC_SW_VERSION_MAJOR.M4_SRC_SW_VERSION_MINOR.M4_SRC_SW_VERSION_PATCH
*   Build Version        : M4_SRC_BUILD_ID
*
*   (c) Copyright M4_SRC_YEAR_ID M4_SRC_COPYRIGHTED_TO
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
ifdef(`M4_SRC_KEEP_REVISION_HISTORY', `dnl - DO NOT modify this M4 line!
Revision History:
                             Modification     Tracking
Author (core ID)              Date D/M/Y       Number     Description of Changes
---------------------------   ----------    ------------  ------------------------------------------
Daniel Costin                 10/11/2010    ENGR133207    Leopard porting.
Sterian Vladut                02/11/2011    ENGR00160896  Added doxygen tags and update template
---------------------------   ----------    ------------  ------------------------------------------
',)dnl - DO NOT modify this M4 line!
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can_TS_52.h"

 
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/**
* @page Can_TS_52
* CAN Test Suite 52 - CAN external tests suite 52.
*/
EU_TEST_SUITE_BEGIN(Can_TS_52)
        EU_TEST_CASE_ADD(Can_TC_1002, " Check cancellation method with 2 standard messages"),
        EU_TEST_CASE_ADD(Can_TC_1015, " Check cancellation method with 1 standard message and 1 extended message."),
        EU_TEST_CASE_ADD(Can_TC_1016, " Check cancellation method with 2 extended messages")
EU_TEST_SUITE_END(Can_TS_52)


EU_TEST_REGISTRY_BEGIN()
    EU_TEST_SUITE_ADD(Can_TS_52, "Internal_Test: Checking Driver with a particular configuration.")
EU_TEST_REGISTRY_END()

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*================================================================================================*/
/**
* @brief     Main function.
* @details   Check requirements regarding the Autosar APIs.
*/
/*================================================================================================*/
FUNC (int, AUTOMATIC) main(void)
    {

        /* Initialise the platform*/
        Can_PlatformInit();

        /* Execute normal tests. */
        EU_RUN_ALL_TESTS( VV_RESULT_ADDRESS);

        return 0;
    }


#ifdef __cplusplus
}
#endif

/** @} */
