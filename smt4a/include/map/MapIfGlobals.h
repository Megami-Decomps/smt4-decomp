/* The map interface module's global (Apocalypse). */
#ifndef SMT4A_MAP_MAPIFGLOBALS_H
#define SMT4A_MAP_MAPIFGLOBALS_H

#include "common.h"
#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf; /* 0x58103c: the state block and the widget table */

/* Creates the map action-cave marker model at the given position and starts it. */
void mapIfSpawnCaveAction(MapMarkerPosition position);

/* Draws the active map overlay; reads its own global state. */
void FUN_002b968c(void);

} /* extern "C" */

#endif
