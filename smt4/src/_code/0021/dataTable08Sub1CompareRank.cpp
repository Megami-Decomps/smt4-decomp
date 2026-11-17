#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

/* Sort comparator over record ids: lower rank first. */
s32 dataTable08Sub1CompareRank(const u16 *first, const u16 *second)
{
    ConsumableRecord *firstRecord = dataTable08Sub1GetRecord(*first);
    ConsumableRecord *secondRecord = dataTable08Sub1GetRecord(*second);

    return firstRecord->rank - secondRecord->rank;
}

} /* extern "C" */
