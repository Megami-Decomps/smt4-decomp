#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 minor;
    /* 0x44 */ u32 major;       /* low byte */
} Record;

extern Record *dataTable8FindRecord(u32 id);

/* Sort comparison of two ids: by the records' major byte, then by minor, both descending. */
s32 FUN_0036031c(u16 *idA, u16 *idB)
{
    Record *recordA = dataTable8FindRecord(*idA);
    Record *recordB = dataTable8FindRecord(*idB);
    s32 diff = (recordB->major & 0xFF) - (recordA->major & 0xFF);

    if (diff == 0) {
        recordA = dataTable8FindRecord(*idA);
        recordB = dataTable8FindRecord(*idB);
        diff = recordB->minor - recordA->minor;
    }
    return diff;
}

} /* extern "C" */
