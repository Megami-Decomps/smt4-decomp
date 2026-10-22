/* NON_MATCHING: reserve-loop index and pending-marker addressing allocate different registers and omit two retail instructions; 59 built versus 61 retail rows. */
#include "shard/X14_EngineUnits.h"
#include "shard/Shard0031.h"

extern "C" PartyStatusSlots *gameGetSlotTable(void);
extern "C" void FUN_0015f490(u32 handle, s32 kind, s32 enabled, s32 flags, f32 scale);

extern "C" void FUN_0021b968(EngineUnits *units, s32 slot, u32 handle, s32 animate)
{
    PartyStatusSlots *table = gameGetSlotTable();
    s32 reserve;
    for (reserve = 0; reserve < 3; ++reserve) {
        if (table->reserve[reserve] >= 0 && table->reserve[reserve] == table->active.slots[slot]) {
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
