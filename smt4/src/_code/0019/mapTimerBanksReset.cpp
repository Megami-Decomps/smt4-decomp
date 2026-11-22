#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapTimerBanks *g_vectorQueueWork;

/* Clears the timer banks and invalidates all pending slots. */
void mapTimerBanksReset(void)
{
    s32 i;
    s32 entry;
    for (i = 0; i < 16; ++i) {
        for (entry = 0; entry < 16; ++entry) {
            g_vectorQueueWork->banks[i].entries[entry].active = 0;
        }
        g_vectorQueueWork->banks[i].count = 0;
    }
    g_vectorQueueWork->count = 0;
    for (i = 0; i < 32; ++i) {
        g_vectorQueueWork->slots[i].active = 0;
        g_vectorQueueWork->slots[i].id = -1;
    }
}

} /* extern "C" */
