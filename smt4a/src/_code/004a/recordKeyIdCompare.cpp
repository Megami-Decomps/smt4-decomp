#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

Record *dataTableFindType5Record(u32 id);
s32 itemGetSortCategory(u16 key);

/* Compares two record ids by their records' keys (via itemGetSortCategory), then by id. */
s32 recordKeyIdCompare(u16 *a, u16 *b)
{
    Record *recordA = dataTableFindType5Record(*a);
    Record *recordB = dataTableFindType5Record(*b);
    s32 diff = itemGetSortCategory(recordB->key) - itemGetSortCategory(recordA->key);

    if (diff == 0) {
        diff = *b - *a;
    }
    return diff;
}

} /* extern "C" */
