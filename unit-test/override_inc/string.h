/*
** File: string.h
**
** Purpose:
** "Override" file for the system string.h file
**
** Notes:
** This would provide stub functions for those normally found
** in string.h.  In this case, it is only providing a stub for
** strncpy().
*/

#ifndef OVERRIDE_STRING_H
#define OVERRIDE_STRING_H

#include "OCS_string.h"

/* ----------------------------------------- */
/* mappings for declarations in string.h */
/* ----------------------------------------- */

#define strncpy OCS_strncpy

#endif
