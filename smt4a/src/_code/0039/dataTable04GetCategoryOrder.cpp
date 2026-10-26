#include "common.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {


/* Maps the category of table-04 record `id` to its display order (99 when there is no record). */
u32 dataTable04GetCategoryOrder(u32 id)
{
    Table04Record *record;

    if (id == 0) {
        return 99;
    }
    record = dataTable04FindById(id);
    switch (record->itemProperties.category) {
    case 8:
        return 0;
    case 3:
        return 1;
    case 7:
        return 2;
    case 2:
        return 3;
    case 5:
        return 4;
    case 1:
        return 5;
    case 6:
        return 6;
    case 0:
        return 7;
    case 4:
        return 8;
    default:
        return 9;
    }
}

} /* extern "C" */
