/* NON_MATCHING: retail swaps r1/r2 (entry pointer and value) through the stream loop and tests firstTime
 * with two loads (high word first) where the build uses ldm; the tail call is NOPed in retail. */
#include "shard/S2MovieSync.h"
#include <string.h>

extern "C" {

extern s32 block158CountReadyEntries(void *queue);
extern void FUN_00423298(void *queue);
extern void FUN_0042553c(MovieSync *sync);

/* Drops the queued messages, advances every active stream past its current entry (remembering
 * the first stream's timestamp), then waits for the next timestamp (FUN_0042553c). */
void FUN_00425448(MovieSync *sync)
{
    s32 queued = block158CountReadyEntries(sync->queue);
    s32 i;
    s32 counter;

    for (i = 0; i < queued; i++) {
        FUN_00423298(sync->queue);
    }

    counter = sync->counter;
    sync->firstTime = 0;
    for (i = 0; i < MOVIE_SYNC_STREAMS; i++) {
        s32 slots;

        if (sync->entryIndex[i] < 0) {
            continue;
        }
        if (sync->firstTime == 0) {
            memcpy(&sync->firstTime, &sync->ring[i][sync->readPos[i] % MOVIE_SYNC_RING_SIZE], sizeof(u64));
        }
        slots = movieSyncEntrySlots(sync, sync->entryIndex[i]);
        sync->readPos[i] += slots;
        if (sync->counter == counter) {
            sync->counter += slots;
        }
    }
    FUN_0042553c(sync);
}

} /* extern "C" */
