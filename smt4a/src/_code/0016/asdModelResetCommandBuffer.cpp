#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;

/* Resets the write buffer: clears its entry records and counters, then publishes its start and end in the two globals. Does nothing when there is no buffer or it has neither a range nor entries. */
void asdModelResetCommandBuffer(void)
{
    AsdCmdBuffer *pool;

    pool = g_asdGfxContext.cmdBuffer;
    if (pool == NULL) {
        return;
    }
    if (pool->start == NULL && pool->entries == NULL) {
        return;
    }
    sysMemClear(pool->entries, pool->listCount * 0x1C);
    pool->writeOffset = 0;
    pool->submittedBytes = 0;
    pool->listCount = 0;
    pool->unk28 = 0;
    pool->committedOffset = 0;
    pool->unk24 = 0;
    pool->unk34 = 0;
    pool->unk30 = 0;
    g_commandBufferCursor = pool->start;
    g_commandBufferEnd = g_commandBufferCursor + pool->size;
}

} /* extern "C" */
