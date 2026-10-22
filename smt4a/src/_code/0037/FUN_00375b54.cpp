#include "common.h"

extern "C" {

typedef struct Record00375b54 {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 rank;
} Record00375b54;

Record00375b54 *dataTable8FindRecord(u32 id);

/* Sort comparator over record ids: higher rank first. */
s32 FUN_00375b54(const u16 *first, const u16 *second)
{
    Record00375b54 *firstRecord = dataTable8FindRecord(*first);
    Record00375b54 *secondRecord = dataTable8FindRecord(*second);

    return secondRecord->rank - firstRecord->rank;
}

} /* extern "C" */
