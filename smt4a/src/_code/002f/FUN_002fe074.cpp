#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 order;
} Record;

extern u32 FUN_002a4b28(u16 id);
extern Record *FUN_00184310(u32 id);

/* Sort comparison of two ids: by their FUN_002a4b28 bit sets (a set containing bits the other lacks sorts first), then by rank ascending, order descending and id ascending. */
s32 FUN_002fe074(u16 *idA, u16 *idB)
{
    u32 setA = FUN_002a4b28(*idA);
    u32 setB = FUN_002a4b28(*idB);
    Record *recordA;
    Record *recordB;
    s32 diff;

    if ((setB & ~setA) != 0) {
        return -1;
    }
    if ((setA & ~setB) != 0) {
        return 1;
    }
    recordA = FUN_00184310(*idA);
    recordB = FUN_00184310(*idB);
    diff = recordA->rank - recordB->rank;
    if (diff == 0) {
        diff = recordB->order - recordA->order;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
