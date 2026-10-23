/* NON_MATCHING: timestamp advancement is unrolled, and nullable stream-slot checks use an extra saved zero. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"

extern "C" {
void FUN_0042553c(MovieSync *);

// Consume a complete frame from each active stream and advance the timestamp ring cursors.
void FUN_00424268(MovieSync *sync)
{
    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            s32 available;
            sync->io.sources[sync->entryIndex[stream]]->getPosition(&available);
            if (available < movieSyncEntrySlots(sync, sync->entryIndex[stream]) * 2)
                return;
        }
    }

    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        if (sync->entryIndex[stream] >= 0 && &sync->entries[sync->entryIndex[stream]] != NULL) {
            s32 consumed = 0;
            do {
                sync->io.sources[sync->entryIndex[stream]]->unk1c();
                ++consumed;
            } while (consumed < movieSyncEntrySlots(sync, sync->entryIndex[stream]));
        }
    }

    s32 previousCounter = sync->counter;
    sync->firstTime = 0;
    s32 stream = 0;
    do {
        if (sync->entryIndex[stream] >= 0) {
            if (sync->firstTime == 0)
                sync->firstTime = sync->ring[stream][sync->readPos[stream] % MOVIE_SYNC_RING_SIZE];
            s32 slots = movieSyncEntrySlots(sync, sync->entryIndex[stream]);
            sync->readPos[stream] += slots;
            if (sync->counter == previousCounter)
                sync->counter += slots;
        }
        ++stream;
    } while (stream < MOVIE_SYNC_STREAMS);
    FUN_0042553c(sync);
}
}
