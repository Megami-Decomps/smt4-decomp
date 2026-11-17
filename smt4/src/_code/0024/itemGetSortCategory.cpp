#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/DataTable40.h"

extern "C" {

/* Maps an entry's kind to a category index (99 when there is no entry). */
u32 itemGetSortCategory(u32 id)
{
    if (id == 0) {
        return 99;
    }
    Table04Record *record = dataTable40FindById(id);
    u32 category = 0;
    switch (record->sort.category) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        category = 1;
        break;
    case 4:
        category = 2;
        break;
    case 7:
    case 8:
    case 9:
        category = 3;
        break;
    case 5:
    case 6:
    case 10:
        category = 4;
        break;
    }
    return category;
}

} /* extern "C" */
