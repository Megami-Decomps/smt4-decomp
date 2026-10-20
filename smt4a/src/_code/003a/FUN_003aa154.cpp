#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 rank;
} SortRecord;

extern SortRecord *contentEntryFindById2(u16 id);

/* Compare function for sorting ids by their record's rank, highest first. */
int FUN_003aa154(const u16 *a, const u16 *b)
{
    SortRecord *recordA = contentEntryFindById2(*a);
    SortRecord *recordB = contentEntryFindById2(*b);

    return recordB->rank - recordA->rank;
}

} /* extern "C" */
