/* NON_MATCHING: reserve scan now matches; retail reads the pending marker through a pool-loaded offset (ldrb [r0, r4]) and recomputes its address for the store, the build shares one address; unit/slot registers swap. */
#include "shard/X14_EngineUnits.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" void FUN_0015f490(u32 handle, s32 kind, s32 enabled, s32 flags, f32 scale);

extern "C" void FUN_0021b968(EngineUnits *units, s32 slot, u32 handle, s32 animate)
{
    SaveSlotTable *table = gameGetSlotTable();
    s32 reserve;
    for (reserve = 0; reserve < 3; ++reserve) {
        s32 member = table->reserve[reserve];
        if (member >= 0 && member == table->party[slot]) {
            break;
        }
    }
    if (reserve < 3) {
        units->partyMarkers.reserve[reserve] = 1;
    } else {
        units->partyMarkers.active[slot] = 1;
    }
    if (animate && !units->partyMarkers.pending) {
        FUN_0015f490(handle, 7, 1, 0, 1.0f);
        units->partyMarkers.pending = 1;
    }
}
