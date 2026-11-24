/* NON_MATCHING: retail initializes the success return constant before the member-bound branch and schedules
 * the first single-member preview's item ID before its target and preview mode arguments. */
#include "common.h"
#include "code/Code0018.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 levelGetExpRequirement(u16 key);
s32 itemApplyToMember(s32 member, ConsumableRecordA *record, s32 a, s32 b, s32 c);
void flagValueSub(s32 id, s32 amount);

/* Inlined copy of FUN_00480140 (real function in src/_code/0048/FUN_00480140.cpp). */
static s32 itemApplyToOne(s32 target, s32 id, s32 preview)
{
    ConsumableRecordA *record = itemTableGetItemRecord(id);
    if (record == NULL) {
        return 1;
    }
    s32 result = itemApplyToMember(target, record, preview, 0, 0);
    if (result == 0) {
        if (preview == 0 && (record->useFlags & 1) == 0) {
            flagValueSub(id, 1);
        }
    }
    return result;
}

/* Inlined copy of itemApplyToParty (real function in src/_code/0047/itemApplyToParty.cpp). */
static s32 itemApplyToPartyInline(s32 itemId, s32 mode)
{
    bool used = false;
    ConsumableRecordA *item = itemTableGetItemRecord(itemId);
    if (item != NULL) {
        if (itemApplyToMember(-1, item, mode, 0, 0) == 0) {
            used = true;
        }
        SaveSlotTableA *table = gameGetSlotTable();
        for (s32 i = 0; i < 0x18; i++) {
            s8 slot = table->party[i];
            if (slot >= 0 && itemApplyToMember(slot, item, mode, 0, 0) == 0) {
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

/* Whether the record `id` (ids 1-60 and 0x7A0-0x7DF) can still be used: for a member-bound record,
 * whether a matching party member holds a different value; for a whole-party record, whether
 * any member lacks it; otherwise whether the stock check fails for the pool or any slot. */
u32 itemCanUseOnParty(s32 id)
{
    if ((u32)(id - 1) > 59 && (u32)(id - 0x79F) > 63)
        return 0;
    ConsumableRecordA *record = itemTableGetItemRecord(id);
    if (record->type != 1 && record->type != 3)
        return 0;
    if ((record->flags & 0x20) != 0) {
        for (s32 i = 0; i < 12; i++) {
            PartySlotA *member = partyGetSlot((u16)i);
            if (member == NULL || partySlotIsOccupied(member) == 0) {
                continue;
            }
            ConsumableRecordA *again = itemTableGetItemRecord(id);
            if (again != NULL && (again->flags & 0x20) != 0 && again->effectValue != 0 &&
                levelGetExpRequirement(member->record.level) != member->record.experience) {
                return 1;
            }
        }
        return 0;
    }
    if ((record->groupFlags & 0x80) != 0) {
        return itemApplyToPartyInline(id, 1) == 0;
    }
    SaveSlotTableA *slots = gameGetSlotTable();
    s32 result = 1;
    for (s32 i = -1; i < 24; i++) {
        if (i < 0) {
            result = itemApplyToOne(-1, id, 1);
        } else {
            s8 slot = slots->party[i];
            if (slot >= 0) {
                result = itemApplyToOne(slot, id, 1);
            }
        }
        if (result == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
