#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

extern SortRecord *FUN_00480ba0(u16 id);
extern int dataTable04GetCategoryOrder(u16 category);
extern int FUN_003a6868(u16 category);

/* Compare function for sorting ids: by two category ranks (descending), then by id (descending). */
int sortCompareByCategoryRankDesc(const u16 *a, const u16 *b)
{
    SortRecord *recordA = FUN_00480ba0(*a);
    SortRecord *recordB = FUN_00480ba0(*b);
    int diff = dataTable04GetCategoryOrder(recordB->category) - dataTable04GetCategoryOrder(recordA->category);

    if (diff == 0) {
        diff = FUN_003a6868(recordB->category) - FUN_003a6868(recordA->category);
        if (diff == 0) {
            diff = *b - *a;
        }
    }
    return diff;
}

} /* extern "C" */
