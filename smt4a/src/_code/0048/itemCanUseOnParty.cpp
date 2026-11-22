/* NON_MATCHING: 22 lines (144 vs 144 rows): all blocks, saved registers, jump targets, and both inlined itemApplyToParty / FUN_00480140 bodies match; only mov sl, #1 hoists above tst r1, #32 and r7/r8 swap in the first itemApplyToOne call. */
#include "common.h"
#include "code/Code0018.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

/* A party member: its two keys are the short at 0x64 and the word at 0x30. */
typedef struct PartyMember {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 expected;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ u16 key;
} PartyMember;

/* The party slot table: the stock order (24 slots) is at 0x1C88. */
typedef struct StockSlots {
    u8 unk0000[0x1C88];
    s8 party[24];
} StockSlots;

PartyMember *partyGetSlot(u16 index);
s32 levelGetExpRequirement(u16 key);
s32 itemApplyToMember(s32 member, ConsumableRecordA *record, s32 a, s32 b, s32 c);
StockSlots *gameGetSlotTable(void);
void flagValueSub(s32 id, s32 amount);

/* Inlined copy of FUN_00480140 (real function in src/_code/0048/FUN_00480140.cpp). */
static s32 itemApplyToOne(s32 value, s32 id, s32 plain)
{
    ConsumableRecordA *record = itemTableGetItemRecord(id);
    if (record == NULL) {
        return 1;
    }
    value = itemApplyToMember(value, record, plain, 0, 0);
    if (value == 0) {
        if (plain == 0 && (record->useFlags & 1) == 0) {
            flagValueSub(id, 1);
        }
    }
    return value;
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
        StockSlots *table = gameGetSlotTable();
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
    if ((u32)(id - 1) <= 59 || (u32)(id - 0x79F) <= 63) {
        ConsumableRecordA *record = itemTableGetItemRecord(id);
        if (record->type == 1 || record->type == 3) {
            if ((record->flags & 0x20) != 0) {
                for (s32 i = 0; i < 12; i++) {
                    PartyMember *member = partyGetSlot((u16)i);
                    if (member == NULL || partySlotIsOccupied(member) == 0) {
                        continue;
                    }
                    ConsumableRecordA *again = itemTableGetItemRecord(id);
                    if (again != NULL && (again->flags & 0x20) != 0 && again->effectValue != 0
                        && levelGetExpRequirement(member->key) != member->expected) {
                        return 1;
                    }
                }
                return 0;
            }
            if ((record->groupFlags & 0x80) != 0) {
                return itemApplyToPartyInline(id, 1) == 0;
            }
            StockSlots *slots = gameGetSlotTable();
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
        }
    }
    return 0;
}

}
