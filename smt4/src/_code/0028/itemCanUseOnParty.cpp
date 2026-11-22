/* NON_MATCHING: 12 lines (107 vs 107 rows): all blocks, saved registers, jump targets, and both inlined table08ApplyToParty / FUN_0026c710 bodies match; only movs r1, r0 vs cmp r0, #0 / mov r1, r0 swaps between the two itemApplyToOne calls. */

#include "gamedata/ConsumableRecord.h"
#include "gamedata/SaveSlotTableIV.h"
#include "quest_center/QuestDelivery.h"

extern "C" {
s32 itemApplyToMember(s32, ConsumableRecord *, s32, s32, s32);

/* Inlined copy of FUN_0026c710: 1 when the item record is missing, else the apply result (a successful plain
 * use, flag 0, also clears or counts down the item's save flag). */
static s32 itemApplyToOne(s32 value, s32 id, s32 flag)
{
    ConsumableRecord *item = itemTableGetItemRecord(id);
    if (item == NULL)
        return 1;
    value = itemApplyToMember(value, item, flag, 0, 0);
    if (value == 0) {
        if (flag == 0 && (item->useFlags & 1) == 0)
            saveFlagClearOrSubtractCounter(id, 1);
    }
    return value;
}

/* Inlined copy of table08ApplyToParty (real function in src/_code/0039/table08ApplyToParty.cpp). */
static s32 itemApplyToPartyInline(s32 id, s32 flag)
{
    bool used = false;
    ConsumableRecord *item = itemTableGetItemRecord(id);
    if (item != NULL) {
        if (itemApplyToMember(-1, item, flag, 0, 0) == 0)
            used = true;
        SaveSlotTableIV *slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            s8 slot = slots->stock[i];
            if (slot >= 0 && itemApplyToMember(slot, item, flag, 0, 0) == 0)
                used = true;
        }
        if (used) {
            if (flag == 0 && !(item->useFlags & 1))
                saveFlagClearOrSubtractCounter(id, 1);
            return 0;
        }
    }
    return 1;
}

/* Returns 1 when item `id` (a consumable of type 1 or 3) can be used on the party now. */
u32 itemCanUseOnParty(s32 id)
{
    if ((u32)(id - 1) <= 59) {
        ConsumableRecord *item = itemTableGetItemRecord(id);
        if (item->type == 1 || item->type == 3) {
            if (item->target & 0x80) {
                return itemApplyToPartyInline(id, 1) == 0;
            }
            SaveSlotTableIV *slots = gameGetSlotTable();
            s32 result = 1;
            for (s32 i = -1; i < 24; ++i) {
                if (i < 0) {
                    result = itemApplyToOne(-1, id, 1);
                } else {
                    s8 slot = slots->stock[i];
                    if (slot >= 0)
                        result = itemApplyToOne(slot, id, 1);
                }
                if (result == 0)
                    return 1;
            }
        }
    }
    return 0;
}
}
