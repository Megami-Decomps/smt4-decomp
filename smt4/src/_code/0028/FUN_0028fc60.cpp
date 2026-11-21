/* NON_MATCHING: retail keeps the option constant 1 in saved registers (sl/r8/r7) and inlines the single-member
 * check twice (the player and the stock members); the build shares one copy and splits the type test.
 * (A copy of table08ApplyToParty without its option-0 save-flag branch scores 87; with the branch, 108.) */

#include "gamedata/ConsumableRecord.h"
#include "gamedata/SaveSlotTableIV.h"
#include "quest_center/QuestDelivery.h"

extern "C" {
s32 itemApplyToMember(s32, const ConsumableRecord *, s32, s32, s32);

/* Inline copy of FUN_0026c710: 1 when the item record is missing, else the apply result (a successful plain
 * use, flag 0, also clears or counts down the item's save flag). */
static __inline s32 itemApplyToOne(s32 member, u32 id, s32 flag)
{
    const ConsumableRecord *item = itemTableGetItemRecord(id);
    if (item == NULL)
        return 1;
    s32 result = itemApplyToMember(member, item, flag, 0, 0);
    if (result == 0) {
        if (flag == 0 && (item->useFlags & 1) == 0)
            saveFlagClearOrSubtractCounter(id, 1);
    }
    return result;
}

/* Returns 1 when item `id` (a consumable of type 1 or 3) can be used on the party now. */
u32 FUN_0028fc60(u32 id)
{
    if (id - 1 > 59)
        return 0;
    const ConsumableRecord *item = itemTableGetItemRecord(id);
    if (item->type != 1 && item->type != 3)
        return 0;
    if (item->target & 0x80) {
        item = itemTableGetItemRecord(id);
        if (!item)
            return 0;
        bool applicable = itemApplyToMember(-1, item, 1, 0, 0) == 0;
        SaveSlotTableIV *slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0 && itemApplyToMember(slot, item, 1, 0, 0) == 0)
                applicable = true;
        }
        return applicable;
    }
    SaveSlotTableIV *slots = gameGetSlotTable();
    for (s32 i = -1; i < 24; ++i) {
        s32 slot = -1;
        if (i >= 0) {
            slot = slots->stock[i];
            if (slot < 0)
                continue;
        }
        if (itemApplyToOne(slot, id, 1) == 0)
            return 1;
    }
    return 0;
}
}
