#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

extern SortRecord *table8Type5FindById(u16 id);

/* Compare function for sorting ids: by category rank, then by the category row's order (descending), then by id. */
int sortCompareByCategoryOrder(const u16 *a, const u16 *b)
{
    SortRecord *recordA = table8Type5FindById(*a);
    SortRecord *recordB = table8Type5FindById(*b);
    int diff = itemGetSortCategory(recordA->category) - itemGetSortCategory(recordB->category);

    if (diff == 0) {
        u16 orderA = skillDataFindById(recordA->category)->listing.sortKey;

        diff = skillDataFindById(recordB->category)->listing.sortKey - orderA;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
