#include "shard/W6_W6Match2_VectorQueue.h"

extern "C" {

/* Empties every point queue and frees every timed transition. */
void mapTimerBanksReset(void)
{
    s32 i;
    s32 entry;
    for (i = 0; i < 16; ++i) {
        for (entry = 0; entry < 16; ++entry) {
            g_vectorQueueWork->queues[i].entries[entry].kind = 0;
        }
        g_vectorQueueWork->queues[i].count = 0;
    }
    g_vectorQueueWork->activeQueue = 0;
    for (i = 0; i < 32; ++i) {
        g_vectorQueueWork->slots[i].active = 0;
        g_vectorQueueWork->slots[i].id = -1;
    }
}

} /* extern "C" */
