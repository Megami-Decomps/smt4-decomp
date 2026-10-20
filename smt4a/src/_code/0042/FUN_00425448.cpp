/* NON_MATCHING: the 2-stream loop is unrolled in the build and not in retail (which also reloads entryIndex after the ring copy). */
#include "shard/S2MovieSync.h"

extern "C" {

extern s32 FUN_0042343c(void *queue);
extern void FUN_00423298(void *queue);
extern void FUN_0042553c(MovieSync *sync);

/* Drops the queued messages, advances every active stream past its current entry (remembering
 * the first stream's timestamp), then waits for the next timestamp (FUN_0042553c). */
void FUN_00425448(MovieSync *sync)
{
    s32 queued = FUN_0042343c(sync->queue);
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
            sync->firstTime = sync->ring[i][sync->readPos[i] % MOVIE_SYNC_RING_SIZE];
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
