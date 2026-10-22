#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" void FUN_002b39f0(void);

// Account for the completed command entry before advancing the graphics queue.
extern "C" void asdGxAccountCommandBytesAndAdvanceQueue(void)
{
    GraphicsQueue *queue = g_asdGfxContext.submission.queue;
    GraphicsQueueEntry *entry = &queue->entries[queue->currentEntry];
    if ((entry->flags & 2) == 0)
        queue->accounting.submittedBytes += entry->byteCount;
    FUN_002b39f0();
}
