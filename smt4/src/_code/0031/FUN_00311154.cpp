#include "gamedata/SelectedUnitQuery.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "shard/W6_W6Match5_DevilSort.h"
extern "C" {
void scrSetResult(s32);
GameUnitSortRecord* gameGetUnitRecord(s32);
PartyDamageSlotsIV* gameGetSlotTable(void);

// Publishes the demon ID of the selected party slot or selected list entry.
extern SelectedUnitQueryOwner *g_partyPanel;
u32 FUN_00311154(void)
{
    SelectedUnitQueryOwner* owner = g_partyPanel;
    if (owner != NULL) {
        GameUnitSortRecord* record;
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
