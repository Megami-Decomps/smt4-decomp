#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

/* Sort comparator over record ids: higher rank first. */
s32 FUN_00375b54(const u16 *first, const u16 *second)
{
    ConsumableRecordA *firstRecord = itemTableGetItemRecord(*first);
    ConsumableRecordA *secondRecord = itemTableGetItemRecord(*second);

    return secondRecord->rank - firstRecord->rank;
}

} /* extern "C" */
