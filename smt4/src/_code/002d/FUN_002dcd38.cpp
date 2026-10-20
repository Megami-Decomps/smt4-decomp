#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 levels;       /* high nibble, low nibble */
    /* 0x59 */ u8 unk59[0x3F];
    /* 0x98 */ u16 order;
} DevilRecord;

extern DevilRecord *dataTable08Sub2GetRecord(u32 id);

/* Sort comparison of two devil ids: by the high then the low nibble of the byte at 0x58 (descending), then order ascending. */
s32 FUN_002dcd38(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = dataTable08Sub2GetRecord(*idA);
    DevilRecord *recordB = dataTable08Sub2GetRecord(*idB);
    s32 diff = (recordB->levels >> 4) - (recordA->levels >> 4);

    if (diff == 0) {
        diff = (recordB->levels & 0xF) - (recordA->levels & 0xF);
        if (diff == 0) {
            recordA = dataTable08Sub2GetRecord(*idA);
            recordB = dataTable08Sub2GetRecord(*idB);
            diff = recordA->order - recordB->order;
        }
    }
    return diff;
}

} /* extern "C" */
