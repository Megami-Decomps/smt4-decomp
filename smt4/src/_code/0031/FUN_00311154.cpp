#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"
extern "C" {

// Publishes the demon ID of the selected party slot or selected list entry.
u32 FUN_00311154(void)
{
    PartyPanelState *owner = g_partyPanel;
    if (owner != NULL) {
        StatBlock* record;
        if (owner->partySlot > 0) {
            if (gameGetSlotTable()->active[owner->partySlot - 1] < 0) {
                return 1;
            }
            record = gameGetUnitRecord(gameGetSlotTable()->active[owner->partySlot - 1]);
        } else {
            if (owner->listSelection < 0) {
                return 1;
            }
            s32 index = (s16)owner->entries[owner->listSelection].packedIndex;
            if (index < 0) {
                return 1;
            }
            record = gameGetUnitRecord(index);
        }
        if (record != NULL) {
            scrSetResult(record->id);
        }
    }
    return 1;
}
}
