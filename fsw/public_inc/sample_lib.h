/**
 * \file
 *   Specification for the sample library functions.
 */
#ifndef SAMPLE_LIB_H
#define SAMPLE_LIB_H

/************************************************************************
** Includes
*************************************************************************/
#include "cfe.h"

/************************************************************************
** Type Definitions
*************************************************************************/

/*************************************************************************
** Exported Functions
*************************************************************************/

/************************************************************************/
/** \brief Library Initialization Function
**
**  \par Description
**        This function is required by CFE to initialize the library
**        It should be specified in the cfe_es_startup.scr file as part
**        of loading this library.  It is not directly invoked by
**        applications.
**
**  \par Assumptions, External Events, and Notes:
**        None
**
**  \return Execution status, see \ref CFEReturnCodes
**
**
*************************************************************************/
int32 SAMPLE_LIB_Init(void);

/************************************************************************/
/** \brief Sample Lib Function
**
**  \par Description
**        This is a sample function
**
**  \par Assumptions, External Events, and Notes:
**        None
**
**  \return Execution status, see \ref CFEReturnCodes
**
**
*************************************************************************/
int32 SAMPLE_LIB_Function(void);

#endif
