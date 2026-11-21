/* IV's map-target selection (smt4a map/MapPlaceLookup.h): mapDepartSetTarget's body, which its callers inline. */
#ifndef SMT4_MAP_MAPDEPARTLOOKUP_H
#define SMT4_MAP_MAPDEPARTLOOKUP_H

#include "map/MapDepartTarget.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "game/GameState.h"

extern "C" s32 dataTable23Type1CountWithAoc(void);

/* The destination table 23 gives the target, or -1 when it has none (the twin of smt4a mapPlaceFind). */
static s32 mapDepartFindDestination(s32 group, s32 map, u32 target)
{
    if (target != (u32)-1) {
        for (s32 index = 0; index < dataTable23Type1CountWithAoc(); ++index) {
            MapDepartTargetRecord *record = (MapDepartTargetRecord *)dataTableGetRecord23(index);
            if (record->group == group && record->map == map && record->target == target) {
                if (record->destination == 0xff)
                    return -1;
                return record->destination;
            }
        }
    }
    return -1;
}

/* Selects the map target (`group`, `map`, `target`) and stores the destination table 23 gives it. */
static __inline void mapDepartSelect(s32 group, s32 map, u32 target)
{
    g_mapSelection.selection.group = group;
    g_mapSelection.selection.map = map;
    g_mapSelection.selection.target = target;
    g_mapSelection.selection.destination = mapDepartFindDestination(group, map, target);
}

#endif
