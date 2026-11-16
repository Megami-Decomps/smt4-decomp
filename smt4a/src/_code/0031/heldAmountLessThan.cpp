#include "shard/Shard0031.h"

extern "C" {

extern Player1C *gameGetPlayerData(void);
extern SlotTable *gameGetSlotTable(void);
extern Lookup62 *gameGetSlotRecord(s8 slot);
extern s32 recordGetScaledMaximum(Lookup62 *entry);
extern Lookup62 *partyGetSlot(u32 index);
extern u32 partySlotIsOccupied(Lookup62 *entry);

/* True when the amount asked for is more than what is held (id < 0: the player value). */
u32 heldAmountLessThan(s32 amount, u32 id)
{
    Lookup62 *entry;
    SlotTable *table;
    s32 i;
    u32 j;

    if ((s32)id < 0) {
        if (gameGetPlayerData()->value < amount) {
            return 1;
        }
    } else {
        table = gameGetSlotTable();
        for (i = 0; i < 0x18; i++) {
            if (table->slots[i] >= 0 && (entry = gameGetSlotRecord(table->slots[i])) != NULL && entry->id == id) {
                if (recordGetScaledMaximum(entry) < amount) {
                    return 1;
                }
                return 0;
            }
        }
        for (j = 0; (s32)j < 0xC; j++) {
            entry = partyGetSlot(j & 0xFFFF);
            if (entry != NULL && partySlotIsOccupied(entry) == 0 && entry->id == id) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
