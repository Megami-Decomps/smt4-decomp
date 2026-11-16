#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 order;
} Record;

extern s32 flagValueRead(u16 id);
extern Record *contentEntryFindById2(u16 id);

/* Comparison of two ids: descending by flagValueRead, then ascending by the record's order byte. */
s32 pairCompareByKeyThenOrder(const u16 *a, const u16 *b)
{
    s32 keyA = flagValueRead(*a);
    s32 keyB = flagValueRead(*b);
    s32 result = keyB - keyA;

    if (result == 0) {
        Record *recordA = contentEntryFindById2(*a);
        Record *recordB = contentEntryFindById2(*b);

        result = recordA->order - recordB->order;
    }
    return result;
}

} /* extern "C" */
