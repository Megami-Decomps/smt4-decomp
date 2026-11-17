#include "shard/Shard0031.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {
s32 itemApplyToMember(s32 slot, ConsumableRecordA *item, s32 mode, u32 *first, u32 *second);
PartyStatusSlots *gameGetSlotTable(void);
void flagValueSub(s32 itemId, s32 amount);

/* Applies an item to the player and every filled party slot; returns 0 (consuming the item outside
 * of preview mode) when it took effect on anyone, 1 otherwise. */
s32 itemApplyToParty(s32 itemId, s32 mode)
{
    bool used = false;
    ConsumableRecordA *item = dataTable8FindRecord(itemId);
    if (item != NULL) {
        if (itemApplyToMember(-1, item, mode, NULL, NULL) == 0) {
            used = true;
        }
        PartyStatusSlots *table = gameGetSlotTable();
        for (s32 i = 0; i < 0x18; i++) {
            s8 slot = table->active.slots[i];
            if (slot >= 0 && itemApplyToMember(slot, item, mode, NULL, NULL) == 0) {
                used = true;
            }
        }
        if (used) {
            if (mode == 0 && !(item->useFlags & 1)) {
                flagValueSub(itemId, 1);
            }
            return 0;
        }
    }
    return 1;
}
}
