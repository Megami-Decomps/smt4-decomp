/* The map interface module's global (Shin Megami Tensei IV). */
#ifndef SMT4_MAP_MAPIFGLOBALS_H
#define SMT4_MAP_MAPIFGLOBALS_H

#include "common.h"
#include "map/mapIf.h"

extern "C" {

extern MapIfGlobals g_mapIf; /* 0x447a78: the state block and the widget table */

/* Creates the map action-down marker model at the given position and starts it. */
void mapIfSpawnDownAction(MapMarkerPosition position);

/* Creates the map action-cave marker model at the given position and starts it. */
void mapIfSpawnCaveAction(MapMarkerPosition position);

}

/* Starts marker slot `index` at `position` (xyz and heading): marks it active, restarts its state and timer.
 * The action-marker creators (mapIfSpawnManholeAction, mapIfSpawnCaveAction, mapIfSpawnDownAction, mapIfShowActionMarker: slots 1-4) open
 * with it. */
static __inline MapIfModelSlot *mapIfStartMarkerSlot(s32 index, MapMarkerPosition position)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[index];

    slot->active = 1;
    slot->state = 0;
    slot->timer = 0;
    slot->position = position;
    return slot;
}

#endif
