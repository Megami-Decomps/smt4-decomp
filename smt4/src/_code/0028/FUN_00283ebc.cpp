/* NON_MATCHING: retail merges the limit clamp with the loop-entry test (cmple r3, #0) and keeps the element pointer in r4 and the kind in ip; the build swaps r4/ip and tests the limit separately. */
#include "common.h"

extern "C" {

/* A pair of (kind, amount) bytes. */
struct KindAmount {
    /* 0x0 */ u8 kind;
    /* 0x1 */ u8 amount;
};

/* A record with a locked flag in the sign bit of 0x38 and eight (kind, amount) pairs at 0x58. */
struct AmountRecord {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 flags;
    /* 0x3C */ u8 unk3C[0x1C];
    /* 0x58 */ KindAmount entries[8];
};

/* Sums the amounts of the leading entries of one kind; a zero kind ends the list. */
s32 FUN_00283ebc(AmountRecord *record, s32 slotCount, u32 kind)
{
    if (record != NULL && (record->flags & 0x80000000) == 0) {
        s32 limit = slotCount - 1;
        if (limit > 8) {
            limit = 8;
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
