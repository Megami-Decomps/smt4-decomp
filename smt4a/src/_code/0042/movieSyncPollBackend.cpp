/* NON_MATCHING: slot count now takes the entry pointer (as in movieSyncConsumeReadyFrame, which matches); retail also reloads sync->state for the second idle test and evaluates &status before the other FUN_00514018 arguments. */
#include "shard/S2MovieSync.h"
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
u32 FUN_00514018(u32 backend, u32 stream, u32 *status);
u32 FUN_005142c4(u32 backend);

// Advance movie synchronization state when source data or backend completion permits it.
void movieSyncPollBackend(MovieSync *sync)
{
    if (sync->state == 1)
        return;
    if (sync->state != 0 && sync->state != 4) {
        bool ready = false;
        for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
            if (sync->entryIndex[stream] >= 0) {
                s32 remaining;
                sync->io.sources[sync->entryIndex[stream]]->getPosition(&remaining);
                remaining = sync->io.sources[sync->entryIndex[stream]]->getSize() - remaining;
                u32 status;
                FUN_00514018(*sync->backend, sync->streamHandles[sync->entryIndex[stream]], &status);
                if (status == 0 && remaining > 0)
                    ready = true;
            }
        }
        if (!ready)
            return;
    }
    u8 state = FUN_005142c4(*sync->backend);
    if (state != 0 && state != 3 && state != 0x10) {
        if (state != 0x11) {
            sync->state = 7;
        } else if (sync->state == 3) {
            for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
                if (sync->entryIndex[stream] >= 0 &&
                    sync->limit[stream] - sync->readPos[stream] <
                    entrySlots(&sync->entries[sync->entryIndex[stream]]))
                    sync->state = 8;
            }
        } else {
            sync->state = 8;
        }
    }
}
}
