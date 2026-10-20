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

extern SortRecord *FUN_00480ba0(u16 id);
extern int FUN_003a6868(u16 category);
extern CategoryRow *dataTable04FindById(u16 category);

/* Compare function for sorting ids: by category rank, then by the category row's order (descending), then by id. */
int sortCompareByCategoryOrder(const u16 *a, const u16 *b)
{
    SortRecord *recordA = FUN_00480ba0(*a);
    SortRecord *recordB = FUN_00480ba0(*b);
    int diff = FUN_003a6868(recordA->category) - FUN_003a6868(recordB->category);

    if (diff == 0) {
        u16 orderA = dataTable04FindById(recordA->category)->order;

        diff = dataTable04FindById(recordB->category)->order - orderA;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
