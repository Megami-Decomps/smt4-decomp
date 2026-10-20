#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u16 order;
} TableRecord;

extern TableRecord *dataTable08Sub2GetRecord(u16 id);

/* qsort comparison of two ids by their records' order value, descending. */
s32 dataTable08Sub2CompareIds(const u16 *a, const u16 *b)
{
    TableRecord *first = dataTable08Sub2GetRecord(*a);
    TableRecord *second = dataTable08Sub2GetRecord(*b);

    return second->order - first->order;
}

} /* extern "C" */
