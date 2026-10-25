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

extern SortRecord *table8Type5FindById(u16 id);
extern int FUN_0024c52c(u16 category);
extern CategoryRow *dataTable40FindById(u16 category);

/* Compare function for sorting ids: by category rank, then by the category row's order (descending), then by id. */
int sortCompareByCategoryOrder(const u16 *a, const u16 *b)
{
    SortRecord *recordA = table8Type5FindById(*a);
    SortRecord *recordB = table8Type5FindById(*b);
    int diff = FUN_0024c52c(recordA->category) - FUN_0024c52c(recordB->category);

    if (diff == 0) {
        u16 orderA = dataTable40FindById(recordA->category)->order;

        diff = dataTable40FindById(recordB->category)->order - orderA;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
