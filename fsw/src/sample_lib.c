/*************************************************************************
**
**      GSC-18128-1, "Core Flight Executive Version 6.6"
**
**      Copyright (c) 2006-2019 United States Government as represented by
**      the Administrator of the National Aeronautics and Space Administration.
**      All Rights Reserved.
**
**      Licensed under the Apache License, Version 2.0 (the "License");
**      you may not use this file except in compliance with the License.
**      You may obtain a copy of the License at
**
**        http://www.apache.org/licenses/LICENSE-2.0
**
**      Unless required by applicable law or agreed to in writing, software
**      distributed under the License is distributed on an "AS IS" BASIS,
**      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**      See the License for the specific language governing permissions and
**      limitations under the License.
**
** File: sample_lib.c
**
** Purpose: 
**   Sample CFS library
**
*************************************************************************/

/*************************************************************************
** Includes
*************************************************************************/
#include "sample_lib.h"
#include "sample_lib_version.h"

/*************************************************************************
** Macro Definitions
*************************************************************************/


/*************************************************************************
** Private Function Prototypes
*************************************************************************/
int32 SAMPLE_LibInit(void);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Library Initialization Routine                                  */
/* cFE requires that a library have an initialization routine      */ 
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LibInit(void)
{
    
    OS_printf ("SAMPLE Lib Initialized.  Version %d.%d.%d.%d",
                SAMPLE_LIB_MAJOR_VERSION,
                SAMPLE_LIB_MINOR_VERSION, 
                SAMPLE_LIB_REVISION, 
                SAMPLE_LIB_MISSION_REV);
                
    return CFE_SUCCESS;
 
}/* End SAMPLE_LibInit */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Sample Lib function                                             */ 
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_Function( void ) 
{
   OS_printf ("SAMPLE_Function called\n");

   return(CFE_SUCCESS);
   
} /* End SAMPLE_Function */

/************************/
/*  End of File Comment */
/************************/
