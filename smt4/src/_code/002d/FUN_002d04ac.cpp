#include "common.h"

extern "C" {

/* A data table record: only the sort value at 4 is used here. */
struct SortRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 sortValue;
};

u32 FUN_00298e00(u16 id);
SortRecord *dataTable1bOr1cGetRecord(u16 id);

/* Orders two ids: a flag superset sorts first, then by the records' sort value (descending). */
s32 FUN_002d04ac(const u16 *idA, const u16 *idB)
{
    u32 flagsA = FUN_00298e00(*idA);
    s32 result = 0;
    u32 flagsB = FUN_00298e00(*idB);

    if ((flagsA & ~flagsB) != 0) {
        result = 1;
    }
    if ((flagsB & ~flagsA) != 0) {
        result = -1;
    }
    if (result == 0) {
        SortRecord *recordA = dataTable1bOr1cGetRecord(*idA);
        SortRecord *recordB = dataTable1bOr1cGetRecord(*idB);
        s32 diff = 0;
        if (recordA != NULL && recordB != NULL) {
            diff = recordB->sortValue - recordA->sortValue;
        }
        result = diff;
    }
    return result;
}

} /* extern "C" */
