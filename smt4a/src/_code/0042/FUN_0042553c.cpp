/* NON_MATCHING: register allocation only (built hoists the 500000 constant out of the wait loop; retail loads it at the call). */
#include "shard/S2MovieSync.h"

extern "C" {

extern void svcSleepThread(s64 nanoseconds);

/* Waits until the first active stream has room for its current entry, then sets nextTime to
 * the base time plus that entry's timestamp. Returns early when the sync is stopped. */
void FUN_0042553c(MovieSync *sync)
{
    for (;;) {
        s32 stream;
        s32 slots;

        if (sync->state == 1) {
            return;
        }
        if (sync->entryIndex[0] >= 0) {
            stream = 0;
        } else if (sync->entryIndex[1] >= 0) {
            stream = 1;
        } else {
            continue;
        }

        slots = movieSyncEntrySlots(sync, sync->entryIndex[stream]);
        if (sync->limit[stream] - sync->readPos[stream] >= slots) {
            sync->nextTime = sync->baseTime + sync->ring[stream][sync->readPos[stream] % MOVIE_SYNC_RING_SIZE];
            return;
        }
        svcSleepThread(500000);
    }
}

} /* extern "C" */
