/* NON_MATCHING: the early-return merging and the two lookup loops use different registers and branch layout (retail keeps the slot table in r5 and re-tests the previous call result for unused stock slots); the checks are the same. */
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
    s8 stock[24];
} StockSlots;

PartyMember *partyGetSlot(u16 index);
s32 levelGetExpRequirement(u16 key);
s32 itemApplyToMember(s32 member, ConsumableRecordA *record, s32 a, s32 b, s32 c);
StockSlots *gameGetSlotTable(void);

/* Whether the record `id` (ids 1-60 and 0x7A0-0x7DF) can still be used: for a member-bound record,
 * whether a matching party member holds a different value; for a whole-party record, whether
 * any member lacks it; otherwise whether the stock check fails for the pool or any slot. */
u32 FUN_0048144c(s32 id)
{
    if ((u32)(id - 1) > 59 && (u32)(id - 0x79F) > 63) {
        return 0;
    }
    ConsumableRecordA *record = itemTableGetItemRecord(id);

    if (record->type != 1 && record->type != 3) {
        return 0;
    }
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
    } else if ((record->groupFlags & 0x80) != 0) {
        ConsumableRecordA *item = itemTableGetItemRecord(id);

        if (item != NULL) {
            s32 missing = itemApplyToMember(-1, item, 1, 0, 0) == 0;
            StockSlots *slots = gameGetSlotTable();

            for (s32 i = 0; i < 24; i++) {
                s32 slot = slots->stock[i];

                if (slot >= 0 && itemApplyToMember(slot, item, 1, 0, 0) == 0) {
                    missing = 1;
                }
            }
            if (missing) {
                return 1;
            }
        }
    } else {
        StockSlots *slots = gameGetSlotTable();

        for (s32 i = -1; i < 24; i++) {
            s32 slot = i < 0 ? -1 : slots->stock[i];

            if (i >= 0 && slot < 0) {
                continue;
            }
            ConsumableRecordA *item = itemTableGetItemRecord(id);

            if (item == NULL || itemApplyToMember(slot, item, 1, 0, 0) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

}
