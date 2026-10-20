#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 rank;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u16 first;
    /* 0x16 */ u16 second;
} DevilRecord;

extern DevilRecord *devilGetRecord(u32 id);

/* Sort comparison of two devil ids: by field 0x16 descending, then rank ascending, then id descending. */
s32 FUN_003acd88(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 diff = recordB->second - recordA->second;

    if (diff == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        diff = recordA->rank - recordB->rank;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
