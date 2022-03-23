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

#ifndef OSC_STRING_H
#define OSC_STRING_H

/* ----------------------------------------- */
/* prototypes normally declared in string.h */
/* ----------------------------------------- */

extern char *OCS_strncpy(char *dest, const char *src, unsigned long size);

#endif
