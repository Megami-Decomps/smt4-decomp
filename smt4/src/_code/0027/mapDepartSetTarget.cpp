/* NON_MATCHING: with the table lookup in a helper the shared destination store matches; only the departure pointer's register differs (retail allocates it last, r8, with group/map/target in r5/r6/r7; the build takes r6). */
#include "map/MapDepartTarget.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "game/GameState.h"

extern "C" {
s32 dataTable23Type1CountWithAoc(void);

/* The destination table 23 gives the target, or -1 when it has none. */
static __inline s32 mapDepartFindDestination(s32 group, s32 map, u32 target)
{
    if (target != static_cast<u32>(-1)) {
        for (s32 index = 0; index < dataTable23Type1CountWithAoc(); ++index) {
            MapDepartTargetRecord *record = reinterpret_cast<MapDepartTargetRecord *>(dataTableGetRecord23(index));
            if (record->group == group && record->map == map && record->target == target) {
                if (record->destination != 0xff)
                    return record->destination;
                break;
            }
        }
    }
    return -1;
}

// Save the requested target and resolve its destination through table 23.
void mapDepartSetTarget(s32 group, s32 map, u32 target)
{
    MapDepartTarget *departure = &g_gameState.jumpRequest.selection;
    departure->group = group;
    departure->map = map;
    departure->target = target;
    departure->destination = mapDepartFindDestination(group, map, target);
}
}
