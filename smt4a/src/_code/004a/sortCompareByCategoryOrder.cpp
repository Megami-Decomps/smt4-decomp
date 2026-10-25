#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

extern SortRecord *FUN_00480ba0(u16 id);
extern int FUN_003a6868(u16 category);

/* Compare function for sorting ids: by category rank, then by the category row's order (descending), then by id. */
int sortCompareByCategoryOrder(const u16 *a, const u16 *b)
{
    SortRecord *recordA = FUN_00480ba0(*a);
    SortRecord *recordB = FUN_00480ba0(*b);
    int diff = FUN_003a6868(recordA->category) - FUN_003a6868(recordB->category);

    if (diff == 0) {
        u16 orderA = dataTable04FindById(recordA->category)->listing.sortKey;

        diff = dataTable04FindById(recordB->category)->listing.sortKey - orderA;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
