/**
 * @file
 *   Sample CFS library
 */

/*************************************************************************
** Includes
*************************************************************************/
#include "sample_lib_version.h"
#include "sample_lib_internal.h"

/* for "strncpy()" */
#include <string.h>

/*************************************************************************
** Private Data Structures
*************************************************************************/
char SAMPLE_LIB_Buffer[SAMPLE_LIB_BUFFER_SIZE];

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Library Initialization Routine                                  */
/* cFE requires that a library have an initialization routine      */
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LIB_Init(void)
{
    /*
     * Call a C library function, like strcpy(), and test its result.
     *
     * This is primary for a unit test example, to have more than
     * one code path to exercise.
     *
     * The specification for strncpy() indicates that it should return
     * the pointer to the destination buffer, so it should be impossible
     * for this to ever fail when linked with a compliant C library.
     */
    if (strncpy(SAMPLE_LIB_Buffer, "SAMPLE DATA", sizeof(SAMPLE_LIB_Buffer) - 1) != SAMPLE_LIB_Buffer)
    {
        return CFE_STATUS_NOT_IMPLEMENTED;
    }

    /* ensure termination */
    SAMPLE_LIB_Buffer[sizeof(SAMPLE_LIB_Buffer) - 1] = 0;

    OS_printf("SAMPLE Lib Initialized.%s\n", SAMPLE_LIB_VERSION_STRING);

    return CFE_SUCCESS;

} /* End SAMPLE_LIB_Init */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Sample Lib function                                             */
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LIB_Function(void)
{
    OS_printf("SAMPLE_LIB_Function called, buffer=\'%s\'\n", SAMPLE_LIB_Buffer);

    return (CFE_SUCCESS);

} /* End SAMPLE_LIB_Function */

/************************/
/*  End of File Comment */
/************************/
