#include "common.h"

extern "C" {

typedef struct DataRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 order;
    /* 0x52 */ u8 unk52[0x13];
    /* 0x65 */ s8 rank;
} DataRecord;

extern DataRecord *dataTable08Sub2GetRecord(u16 id);

/* qsort-style comparison of two ids by the records' rank (descending), then order (ascending). */
s32 dataTable08Sub2CompareByRank(u16 *a, u16 *b)
{
    DataRecord *recordA = dataTable08Sub2GetRecord(*a);
    DataRecord *recordB = dataTable08Sub2GetRecord(*b);
    s32 result = recordB->rank - recordA->rank;

    if (result == 0) {
        result = recordA->order - recordB->order;
    }
    return result;
}

} /* extern "C" */
