#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

/* Compare function for sorting ids by their record's rank, highest first. */
int FUN_002f2898(const u16 *a, const u16 *b)
{
    ConsumableRecord *recordA = itemTableGetItemRecord(*a);
    ConsumableRecord *recordB = itemTableGetItemRecord(*b);

    return recordB->rank - recordA->rank;
}

} /* extern "C" */
