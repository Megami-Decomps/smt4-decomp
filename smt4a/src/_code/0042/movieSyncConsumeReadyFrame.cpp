#include "shard/S2MovieSync.h"
#include <string.h>
#include "shard/W6_W6Match7_MovieSource.h"

// Ring slots a stream entry consumes (0 when there is no entry).
static __inline s32 entrySlots(const MovieSyncEntry *entry)
{
    if (entry == NULL) {
        return 0;
    }
    return entry->type == 0 || entry->type == 1 ? 2 : 1;
}

extern "C" {
void FUN_0042553c(MovieSync *);

// Consume a complete frame from each active stream and advance the timestamp ring cursors.
void movieSyncConsumeReadyFrame(MovieSync *sync)
{
    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            s32 available;
            sync->io.sources[sync->entryIndex[stream]]->getPosition(&available);
            if (available < entrySlots(&sync->entries[sync->entryIndex[stream]]) * 2)
                return;
        }
    }

    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            MovieSyncEntry *entry = &sync->entries[sync->entryIndex[stream]];
            s32 consumed = 0;
            if (entry == NULL)
                continue;
            do {
                sync->io.sources[sync->entryIndex[stream]]->unk1c();
                ++consumed;
            } while (consumed < entrySlots(&sync->entries[sync->entryIndex[stream]]));
        }
    }

    s32 previousCounter = sync->counter;
    sync->firstTime = 0;
    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            if (sync->firstTime == 0)
                memcpy(&sync->firstTime, &sync->ring[stream][sync->readPos[stream] % MOVIE_SYNC_RING_SIZE], sizeof(u64));
            s32 slots = entrySlots(&sync->entries[sync->entryIndex[stream]]);
            sync->readPos[stream] += slots;
            if (sync->counter == previousCounter)
                sync->counter += slots;
        }
    }
    FUN_0042553c(sync);
}
}
