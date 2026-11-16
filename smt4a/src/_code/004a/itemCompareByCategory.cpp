#include "common.h"

extern "C" {

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} ItemRecord;

extern ItemRecord *dataTableFindType5Record(u16 id);
extern int itemGetSortCategory(u16 category);
extern int dataTable04GetCategoryOrder(u16 category);

/* Orders two item ids by the first, then the second key of their category, then by id. */
int itemCompareByCategory(u16 *a, u16 *b)
{
    ItemRecord *recordA = dataTableFindType5Record(*a);
    ItemRecord *recordB = dataTableFindType5Record(*b);
    int diff = dataTable04GetCategoryOrder(recordA->category) - dataTable04GetCategoryOrder(recordB->category);

    if (diff == 0) {
        diff = itemGetSortCategory(recordA->category) - itemGetSortCategory(recordB->category);
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

}
