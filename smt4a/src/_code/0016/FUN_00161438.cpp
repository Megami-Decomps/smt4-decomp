/* NON_MATCHING: armcc folds the entry adjustment into a negative STRB offset instead of retail's separate index arithmetic. */
#include "shard/Block61a470.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Marks a graphics pool entry, or the whole pool, dirty. */
void FUN_00161438(s32 index)
{
    Pool *pool = g_asdGfxContext.pool;
    if (pool == NULL) {
        return;
    }
    if (index == -1) {
        pool->unk3C = 1;
    } else {
        GraphicsPoolEntry *entries = (GraphicsPoolEntry *)pool->entries;
        entries[index - 1].dirty = 1;
    }
}

} /* extern "C" */
