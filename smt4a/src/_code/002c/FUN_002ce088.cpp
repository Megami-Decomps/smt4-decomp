#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 order;
} Record;

extern Record *FUN_00184310(u32 id);

/* Sort comparison of two ids: lower rank first, then higher order, then lower id. */
s32 FUN_002ce088(u16 *idA, u16 *idB)
{
    Record *recordA = FUN_00184310(*idA);
    Record *recordB = FUN_00184310(*idB);
    s32 diff = recordA->rank - recordB->rank;

    if (diff == 0) {
        diff = recordB->order - recordA->order;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
