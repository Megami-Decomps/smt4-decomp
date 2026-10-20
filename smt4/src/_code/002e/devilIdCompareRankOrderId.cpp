#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 order;
} DevilRecord;

extern DevilRecord *devilGetRecord(u32 id);

/* Sort comparison of two devil ids: higher rank first, then higher order, then lower id. */
s32 devilIdCompareRankOrderId(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 diff = recordB->rank - recordA->rank;

    if (diff == 0) {
        diff = recordB->order - recordA->order;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
