#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

extern SortRecord *FUN_002498ec(u16 id);
extern int recordKindRank(u16 category);
extern int FUN_0024c52c(u16 category);

/* Compare function for sorting ids: by two category ranks (descending), then by id (descending). */
int sortCompareByCategoryRankDesc(const u16 *a, const u16 *b)
{
    SortRecord *recordA = FUN_002498ec(*a);
    SortRecord *recordB = FUN_002498ec(*b);
    int diff = recordKindRank(recordB->category) - recordKindRank(recordA->category);

    if (diff == 0) {
        diff = FUN_0024c52c(recordB->category) - FUN_0024c52c(recordA->category);
        if (diff == 0) {
            diff = *b - *a;
        }
    }
    return diff;
}

} /* extern "C" */
