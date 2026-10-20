#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x6f];
    /* 0x6F */ u8 rank;
} SortRecord;

extern SortRecord *dataTable08Sub1GetRecord(u16 id);

/* Compare function for sorting ids by their record's rank, highest first. */
int FUN_002f2898(const u16 *a, const u16 *b)
{
    SortRecord *recordA = dataTable08Sub1GetRecord(*a);
    SortRecord *recordB = dataTable08Sub1GetRecord(*b);

    return recordB->rank - recordA->rank;
}

} /* extern "C" */
