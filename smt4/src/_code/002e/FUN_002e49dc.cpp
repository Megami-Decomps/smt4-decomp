#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 rank;
} SortRecord;

extern SortRecord *dataTable08Sub0GetRecord(u16 id);

/* Compare function for sorting ids by their record's rank, lowest first. */
int FUN_002e49dc(const u16 *a, const u16 *b)
{
    SortRecord *recordA = dataTable08Sub0GetRecord(*a);
    SortRecord *recordB = dataTable08Sub0GetRecord(*b);

    return recordA->rank - recordB->rank;
}

} /* extern "C" */
