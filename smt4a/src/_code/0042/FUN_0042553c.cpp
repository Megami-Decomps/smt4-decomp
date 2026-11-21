/* NON_MATCHING: the sleep now reloads its TimeSpan at the call; retail reads baseTime with ldm and the ring entry with two ldr and stores nextTime with str/str (writeback), where armcc swaps those forms, and the entry-slot helper uses swapped scratch registers. */
#include "shard/S2MovieSync.h"
#include "nn/fnd/TimeSpan.h"

extern "C" {

void svcSleepThread(nn::fnd::TimeSpan delay);

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
        svcSleepThread(nn::fnd::TimeSpan::FromMicroSeconds(500));
    }
}

} /* extern "C" */
