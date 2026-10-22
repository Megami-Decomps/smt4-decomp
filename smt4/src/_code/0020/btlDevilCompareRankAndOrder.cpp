#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 order;
    /* 0x52 */ u8 unk52[0xF];
    /* 0x61 */ s8 rank;
} Record;

Record *dataTable08Sub2GetRecord(u32 id);

/* Compares two record ids by rank (higher first), then by order. */
s32 btlDevilCompareRankAndOrder(u16 *a, u16 *b)
{
    Record *recordA = dataTable08Sub2GetRecord(*a);
    Record *recordB = dataTable08Sub2GetRecord(*b);
    s32 diff = recordB->rank - recordA->rank;

    if (diff == 0) {
        diff = recordA->order - recordB->order;
    }
    return diff;
}

} /* extern "C" */
