#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

/* Sort comparator over record ids: lower rank first. */
s32 dataTable08Sub1CompareRank(const u16 *first, const u16 *second)
{
    ConsumableRecord *firstRecord = itemTableGetItemRecord(*first);
    ConsumableRecord *secondRecord = itemTableGetItemRecord(*second);

    return firstRecord->rank - secondRecord->rank;
}

} /* extern "C" */
