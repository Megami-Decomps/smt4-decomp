#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" {
void nngxLockEnter(void);
void nngxLockLeave(void);

// Mark the latest graphics queue entry ready, or clear the pending state when disabled.
void FUN_00123560(void)
{
    GraphicsQueue *queue = g_asdGfxContext.submission.queue;
    if (queue == NULL)
        return;
    nngxLockEnter();
    if (g_asdGfxContext.submission.enabled == 0) {
        g_asdGfxContext.submission.pending = g_asdGfxContext.submission.enabled;
    } else {
        queue->entries[queue->activeCount - 1].ready = 1;
        g_asdGfxContext.submission.ready = 1;
    }
    nngxLockLeave();
}
}
