#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 order;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u16 group;
} Record;

extern Record *devilGetRecord(u32 id);

/* Sort comparison of two ids: by group descending, then order ascending, then id descending. */
s32 recordGroupOrderCompare(u16 *idA, u16 *idB)
{
    Record *recordA = devilGetRecord(*idA);
    Record *recordB = devilGetRecord(*idB);
    s32 diff = recordB->group - recordA->group;

    if (diff == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        diff = recordA->order - recordB->order;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
