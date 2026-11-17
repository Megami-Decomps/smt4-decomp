#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Orders two ids by their record's sort key. */
int dataTableSortKeyCompare(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecord *recordB = dataTable08Sub2GetRecord(*b);

    return recordA->order - recordB->order;
}

}
