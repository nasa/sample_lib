/**
 * @file
 *  An example of an internal (private) header file for SAMPLE Lib
 */
#ifndef SAMPLE_LIB_INTERNAL_H
#define SAMPLE_LIB_INTERNAL_H

/* Include all external/public definitions */
#include "sample_lib.h"

/*************************************************************************
** Macro Definitions
*************************************************************************/

#define SAMPLE_LIB_BUFFER_SIZE 16

/*************************************************************************
** Internal Data Structures
*************************************************************************/
extern char SAMPLE_LIB_Buffer[SAMPLE_LIB_BUFFER_SIZE];

/*************************************************************************
** Function Declarations
*************************************************************************/

/**
 * Library initialization routine/entry point
 */
int32 SAMPLE_LIB_Init(void);

#endif
