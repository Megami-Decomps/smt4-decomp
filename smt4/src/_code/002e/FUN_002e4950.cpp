#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 order;
    /* 0x52 */ u8 unk52[0xF];
    /* 0x61 */ s8 rank;
} Record;

Record *dataTable08Sub2GetRecord(u32 id);

/* Compares two record ids by rank (lower first), then by order (higher first). */
s32 FUN_002e4950(u16 *a, u16 *b)
{
    Record *recordA = dataTable08Sub2GetRecord(*a);
    Record *recordB = dataTable08Sub2GetRecord(*b);
    s32 diff = recordA->rank - recordB->rank;

    if (diff == 0) {
        diff = recordB->order - recordA->order;
    }
    return diff;
}

} /* extern "C" */
