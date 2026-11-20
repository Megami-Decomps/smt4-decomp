#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Marks a graphics pool entry, or the whole pool, dirty. */
void gfxCmdBufferMarkPoolEntryDirty(s32 index)
{
    AsdCmdBuffer *pool = g_asdGfxContext.cmdBuffer;
    if (pool == NULL) {
        return;
    }
    if (index == -1) {
        pool->callbackAtEnd = 1;
    } else {
        /* The dirty flag is the second byte of entry `index - 1`. */
        s32 offset = (index - 1) * sizeof(GraphicsPoolEntry) + 1;
        u8 *bytes = (u8 *)pool->entries;
        bytes[offset] = 1;
    }
}

} /* extern "C" */
