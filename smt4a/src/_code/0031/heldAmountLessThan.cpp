#include "shard/Shard0031.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
extern s32 recordGetScaledMaximum(SlotRecordA *entry);
extern u32 partySlotIsOccupied(PartySlotA *entry);

/* True when the amount asked for is more than what is held (id < 0: the player value). */
u32 heldAmountLessThan(s32 amount, u32 id)
{
    SlotRecordA *entry;
    PartySlotA *slot;
    SaveSlotTableA *table;
    s32 i;
    u32 j;

    if ((s32)id < 0) {
        if (gameGetPlayerData()->maxHp < amount) {
            return 1;
        }
    } else {
        table = gameGetSlotTable();
        for (i = 0; i < 0x18; i++) {
            if (table->party[i] >= 0 && (entry = gameGetSlotRecord(table->party[i])) != NULL && entry->id == id) {
                if (recordGetScaledMaximum(entry) < amount) {
                    return 1;
                }
                return 0;
            }
        }
        for (j = 0; (s32)j < 0xC; j++) {
            slot = partyGetSlot(j & 0xFFFF);
            if (slot != NULL && partySlotIsOccupied(slot) == 0 && slot->record.id == id) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
