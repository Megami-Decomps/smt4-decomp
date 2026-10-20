#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 low : 4;
    /* 0x58 */ u8 high : 4;
    /* 0x59 */ u8 unk59[0x3F];
    /* 0x98 */ u16 order;
} Record;

Record *dataTable08Sub2GetRecord(u32 id);

/* Compares two record ids by the high then low nibble of byte 0x58 (ascending), then by order (descending). */
s32 FUN_0030bed8(u16 *a, u16 *b)
{
    Record *recordA = dataTable08Sub2GetRecord(*a);
    Record *recordB = dataTable08Sub2GetRecord(*b);
    s32 diff = recordA->high - recordB->high;

    if (diff == 0) {
        diff = recordA->low - recordB->low;
        if (diff == 0) {
            recordA = dataTable08Sub2GetRecord(*a);
            recordB = dataTable08Sub2GetRecord(*b);
            diff = recordB->order - recordA->order;
        }
    }
    return diff;
}

} /* extern "C" */
