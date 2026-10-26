/* NON_MATCHING: written against g_gameState (+0x3f8; pool anchor and the stm triple now match); retail allocates the departure pointer last (r8) with group/map/target in r5/r6/r7, the build takes r6 for it. */
#include "map/MapDepartTarget.h"
#include "gamedata/DataTableAccess_AocTable23.h"

extern "C" {
// The pending departure target lies inside g_gameState.
struct GameStateDepartView {
    /* 0x000 */ u8 unk000[0x3F8];
    /* 0x3F8 */ MapDepartTarget target;
};
extern GameStateDepartView g_gameState;
s32 dataTable23Type1CountWithAoc(void);

// Save the requested target and resolve its destination through table 23.
void mapDepartSetTarget(s32 group, s32 map, u32 target)
{
    MapDepartTarget *departure = &g_gameState.target;
    departure->group = group;
    departure->map = map;
    departure->target = target;
    if (target != static_cast<u32>(-1)) {
        for (s32 index = 0; index < dataTable23Type1CountWithAoc(); ++index) {
            MapDepartTargetRecord *record = reinterpret_cast<MapDepartTargetRecord *>(dataTableGetRecord23(index));
            if (record->group == group && record->map == map &&
                record->target == target) {
                if (record->destination != 0xff) {
                    departure->destination = record->destination;
                    return;
                }
                break;
            }
        }
    }
    departure->destination = -1;
}
}
