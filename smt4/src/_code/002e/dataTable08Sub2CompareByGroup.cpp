#include "common.h"

extern "C" {

typedef struct DataRecord {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 group : 10;
    /*      */ u32 unk54Rest : 22;
    /* 0x58 */ u8 unk58[0x40];
    /* 0x98 */ u16 order;
} DataRecord;

extern DataRecord *dataTable08Sub2GetRecord(u16 id);

/* qsort-style comparison of two ids by the records' group (descending), then order (descending). */
s32 dataTable08Sub2CompareByGroup(u16 *a, u16 *b)
{
    DataRecord *recordA = dataTable08Sub2GetRecord(*a);
    DataRecord *recordB = dataTable08Sub2GetRecord(*b);
    s32 result = recordB->group - recordA->group;

    if (result == 0) {
        recordA = dataTable08Sub2GetRecord(*a);
        recordB = dataTable08Sub2GetRecord(*b);
        result = recordB->order - recordA->order;
    }
    return result;
}

} /* extern "C" */
