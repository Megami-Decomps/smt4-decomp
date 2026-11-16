#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 order;
} TableRecord;

extern s32 flagValueRead(u16 id);
extern TableRecord *dataTable08Sub0GetRecord(u16 id);

/* qsort comparison of two ids: by flagValueRead (descending), then by the records' order byte. */
s32 dataTable08CompareIds(const u16 *a, const u16 *b)
{
    s32 keyA = flagValueRead(*a);
    s32 diff = flagValueRead(*b) - keyA;

    if (diff == 0) {
        TableRecord *first = dataTable08Sub0GetRecord(*a);
        TableRecord *second = dataTable08Sub0GetRecord(*b);

        diff = first->order - second->order;
    }
    return diff;
}

} /* extern "C" */
