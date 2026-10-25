#include "shard/Block61a470.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Marks a graphics pool entry, or the whole pool, dirty. */
void FUN_00123398(s32 index)
{
    Pool *pool = g_asdGfxContext.pool;
    if (pool == NULL) {
        return;
    }
    if (index == -1) {
        pool->unk3C = 1;
    } else {
        /* The dirty flag is the second byte of entry `index - 1`. */
        s32 offset = (index - 1) * sizeof(GraphicsPoolEntry) + 1;
        u8 *bytes = (u8 *)pool->entries;
        bytes[offset] = 1;
    }
}

} /* extern "C" */
