/* The map interface module's global (Apocalypse). */
#ifndef SMT4A_MAP_MAPIFGLOBALS_H
#define SMT4A_MAP_MAPIFGLOBALS_H

#include "common.h"
#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf; /* 0x58103c: the state block and the widget table */

/* Draws the active map overlay; reads its own global state. */
void FUN_002b968c(void);

} /* extern "C" */

#endif
