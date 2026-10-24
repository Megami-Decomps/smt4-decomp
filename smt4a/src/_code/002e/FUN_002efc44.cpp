/* NON_MATCHING: retail merges the limit clamp with the loop-entry test (cmple) and keeps the element pointer in r4, the kind in ip; ours uses ip for the pointer. */
#include "common.h"

extern "C" {

/* A pair of (kind, amount) signed bytes. */
struct KindAmount {
    /* 0x0 */ s8 kind;
    /* 0x1 */ s8 amount;
};

/* A record with a locked flag (bit 29 of 0x3C) and nine (kind, amount) pairs at 0x62. */
struct AmountRecord {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 flags;
    /* 0x40 */ u8 unk40[0x22];
    /* 0x62 */ KindAmount entries[9];
};

/* Sums the amounts of the leading entries of one kind; a zero kind ends the list. */
s32 FUN_002efc44(AmountRecord *record, s32 slotCount, s32 kind)
{
    if (record != NULL && (record->flags & 0x20000000) == 0) {
        s32 limit = slotCount - 1;
        if (limit > 9) {
            limit = 9;
        }
        s32 total = 0;
        for (s32 i = 0; i < limit; i++) {
            if (record->entries[i].kind == 0) {
                break;
            }
            if (record->entries[i].kind == kind) {
                total += record->entries[i].amount;
            }
        }
        return total;
    }
    return 0;
}

} /* extern "C" */
