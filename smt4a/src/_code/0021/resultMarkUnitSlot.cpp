#include "shard/X14_EngineUnits.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"
#include "battle/BtlEntryVoice.h"

/* Marks the party or reserve slot and queues the marker animation once. */
extern "C" void resultMarkUnitSlot(ResultWorkA *units, s32 slot, u32 handle, s32 animate)
{
    SaveSlotTableA *table = gameGetSlotTable();
    s32 reserve;
    for (reserve = 0; reserve < 3; ++reserve) {
        if (table->reserve[reserve] < 0)
            continue;
        if (table->reserve[reserve] == table->party[slot])
            break;
    }
    if (reserve < 3) {
        units->reserveMarkers[reserve] = 1;
    } else {
        units->partyMarkers[slot] = 1;
    }
    if (animate && !units->markersPending) {
        FUN_0015f490(handle, 7, 1.0f, 1, 0);
        units->markersPending = 1;
    }
}
