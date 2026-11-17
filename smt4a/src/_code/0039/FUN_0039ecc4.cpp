#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

/* Orders two ids by their record's sort key, descending. */
int FUN_0039ecc4(u16 *a, u16 *b)
{
    EquipmentRecordA *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecordA *recordB = dataTable08Sub2GetRecord(*b);

    return recordB->order - recordA->order;
}

}
