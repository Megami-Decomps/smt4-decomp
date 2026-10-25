/* NON_MATCHING: only the registers of the context and queue pointers are swapped (retail r4=context, r5=queue). */
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" {

s32 globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

// Queue a command entry on the write queue, then start submission if the queue is the active one and idle.
void FUN_0017cf74(u32 first, u32 second, u32 third)
{
    GraphicsQueue *queue = g_asdGfxContext.submission.writeQueue;
    GraphicsQueueEntry *entry = &queue->entries[queue->pendingCount];
    entry->unk00[0] = 0;
    entry->unk04 = first;
    entry->byteCount = second;
    entry->flags = third;
    globalCriticalSectionEnterForward();
    queue->pendingCount++;
    if (g_asdGfxContext.submission.queue == queue && g_asdGfxContext.submission.pending != 0 &&
        g_asdGfxContext.submission.enabled == 0) {
        g_asdGfxContext.submission.enabled = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}

} /* extern "C" */
