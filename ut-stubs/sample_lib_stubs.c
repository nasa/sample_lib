/*
** File: sample_lib_stubs.c
**
** Purpose:
** Unit test stubs for the SAMPLE library
**
** Notes:
** A stub function file should be implemented for each
** FSW source code unit.  This defines the same functions
** as the public API of the Library.
**
** This is to support testing of OTHER applications which
** depend on / call into this library.  The unit test of
** the external application will be linked with this stub
** library, rather than the real implementation.
*/

/*
 * The stub functions always share the same API header file as the
 * main FSW code does.  This should define the same functions
 * with the same parameters.
 */
#include "sample_lib.h"

/*
 * The "utstubs.h" provides the generic stub framework from UT Assert
 */
#include "utstubs.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Sample Init function stub                                       */
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LIB_Init(void)
{
    /*
     * The UT_DEFAULT_IMPL macro is generally sufficient
     * for any call that does not have output parameters
     * and returns an integer status code.
     *
     * The default return value is 0, unless the test
     * case configures something different.
     */
    return UT_DEFAULT_IMPL(SAMPLE_LIB_Init);

} /* End SAMPLE_LIB_Init */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Sample Lib function stub                                        */
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LIB_Function(void)
{
    return UT_DEFAULT_IMPL(SAMPLE_LIB_Function);
} /* End SAMPLE_LIB_Function */
