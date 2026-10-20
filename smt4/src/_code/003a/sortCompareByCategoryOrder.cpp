#include "common.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

typedef struct CategoryRow {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u16 order;
} CategoryRow;

extern SortRecord *FUN_002498ec(u16 id);
extern int FUN_0024c52c(u16 category);
extern CategoryRow *FUN_002ae164(u16 category);

/* Compare function for sorting ids: by category rank, then by the category row's order (descending), then by id. */
int sortCompareByCategoryOrder(const u16 *a, const u16 *b)
{
    SortRecord *recordA = FUN_002498ec(*a);
    SortRecord *recordB = FUN_002498ec(*b);
    int diff = FUN_0024c52c(recordA->category) - FUN_0024c52c(recordB->category);

    if (diff == 0) {
        u16 orderA = FUN_002ae164(recordA->category)->order;

        diff = FUN_002ae164(recordB->category)->order - orderA;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
