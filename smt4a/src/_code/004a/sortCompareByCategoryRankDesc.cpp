#include "common.h"
#include "gamedata/ItemSortCategory.h"

extern "C" {

typedef struct SortRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} SortRecord;

extern SortRecord *dataTableFindType5Record(u16 id);
extern int dataTable04GetCategoryOrder(u16 category);

/* Compare function for sorting ids: by two category ranks (descending), then by id (descending). */
int sortCompareByCategoryRankDesc(const u16 *a, const u16 *b)
{
    SortRecord *recordA = dataTableFindType5Record(*a);
    SortRecord *recordB = dataTableFindType5Record(*b);
    int diff = dataTable04GetCategoryOrder(recordB->category) - dataTable04GetCategoryOrder(recordA->category);

    if (diff == 0) {
        diff = itemGetSortCategory(recordB->category) - itemGetSortCategory(recordA->category);
        if (diff == 0) {
            diff = *b - *a;
        }
    }
    return diff;
}

} /* extern "C" */
