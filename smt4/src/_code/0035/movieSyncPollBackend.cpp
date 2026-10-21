/* NON_MATCHING: state loads are coalesced, scoped readiness temporaries increase the frame to 28 bytes, and the final ring-capacity test uses different registers. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"

extern "C" {
void FUN_0023a488(u32 backend, u32 stream, s32 *status);
u32 FUN_003f6a40(u32 backend);

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
                s32 status[2];
                FUN_0023a488(*sync->backend, sync->streamHandles[sync->entryIndex[stream]], status);
                if (status[0] == 0 && remaining > 0)
                    ready = true;
            }
        }
        if (!ready)
            return;
    }
    u8 state = FUN_003f6a40(*sync->backend);
    if (state != 0 && state != 3 && state != 0x10) {
        if (state != 0x11) {
            sync->state = 7;
        } else if (sync->state == 3) {
            for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
                if (sync->entryIndex[stream] >= 0 &&
                    sync->limit[stream] - sync->readPos[stream] <
                    movieSyncEntrySlots(sync, sync->entryIndex[stream]))
                    sync->state = 8;
            }
        } else {
            sync->state = 8;
        }
    }
}
}
