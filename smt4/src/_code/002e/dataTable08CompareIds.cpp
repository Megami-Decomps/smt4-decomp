#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 order;
} TableRecord;

extern s32 FUN_0028fb40(u16 id);
extern TableRecord *dataTable08Sub0GetRecord(u16 id);

/* qsort comparison of two ids: by FUN_0028fb40 (descending), then by the records' order byte. */
s32 dataTable08CompareIds(const u16 *a, const u16 *b)
{
    s32 keyA = FUN_0028fb40(*a);
    s32 diff = FUN_0028fb40(*b) - keyA;

    if (diff == 0) {
        TableRecord *first = dataTable08Sub0GetRecord(*a);
        TableRecord *second = dataTable08Sub0GetRecord(*b);

        diff = first->order - second->order;
    }
    return diff;
}

} /* extern "C" */
