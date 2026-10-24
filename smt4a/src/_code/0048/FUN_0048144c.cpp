/* NON_MATCHING: the early-return merging and the two lookup loops use different registers and branch layout (retail keeps the slot table in r5 and re-tests the previous call result for unused stock slots); the checks are the same. */
#include "common.h"

extern "C" {

/* A table-8 record: a kind byte at 0x41, a flag byte at 0x3A, a flags word at 0x68 and a short at 0x48. */
typedef struct Table8Record {
    /* 0x00 */ u8 unk00[0x3A];
    /* 0x3A */ u8 flagsA;               /* bit 7: counted over the whole party */
    /* 0x3B */ u8 unk3b[5];
    /* 0x40 */ u8 unk40;
    /* 0x41 */ u8 kind;                 /* 1 or 3: recordable */
    /* 0x42 */ u8 unk42[6];
    /* 0x48 */ u16 value;
    /* 0x4A */ u8 unk4a[0x1E];
    /* 0x68 */ u32 flags;               /* bit 5: needs a matching party member */
} Table8Record;

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

Table8Record *dataTable8FindRecord(s32 id);
PartyMember *FUN_003e4d68(u16 index);
s32 FUN_00187168(PartyMember *member);
s32 FUN_004ccbf0(u16 key);
s32 FUN_00287790(s32 member, Table8Record *record, s32 a, s32 b, s32 c);
StockSlots *gameGetSlotTable(void);

/* Whether the record `id` (ids 1-60 and 0x7A0-0x7DF) can still be used: for a member-bound record,
 * whether a matching party member holds a different value; for a whole-party record, whether
 * any member lacks it; otherwise whether the stock check fails for the pool or any slot. */
u32 FUN_0048144c(s32 id)
{
    if ((u32)(id - 1) > 59 && (u32)(id - 0x79F) > 63) {
        return 0;
    }
    Table8Record *record = dataTable8FindRecord(id);

    if (record->kind != 1 && record->kind != 3) {
        return 0;
    }
    if ((record->flags & 0x20) != 0) {
        for (s32 i = 0; i < 12; i++) {
            PartyMember *member = FUN_003e4d68((u16)i);

            if (member == NULL || FUN_00187168(member) == 0) {
                continue;
            }
            Table8Record *again = dataTable8FindRecord(id);

            if (again != NULL && (again->flags & 0x20) != 0 && again->value != 0
                && FUN_004ccbf0(member->key) != member->expected) {
                return 1;
            }
        }
    } else if ((record->flagsA & 0x80) != 0) {
        Table8Record *item = dataTable8FindRecord(id);

        if (item != NULL) {
            s32 missing = FUN_00287790(-1, item, 1, 0, 0) == 0;
            StockSlots *slots = gameGetSlotTable();

            for (s32 i = 0; i < 24; i++) {
                s32 slot = slots->stock[i];

                if (slot >= 0 && FUN_00287790(slot, item, 1, 0, 0) == 0) {
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
            Table8Record *item = dataTable8FindRecord(id);

            if (item == NULL || FUN_00287790(slot, item, 1, 0, 0) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

}
