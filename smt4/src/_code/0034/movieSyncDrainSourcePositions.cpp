/* NON_MATCHING: nonvolatile state loads coalesce, redundant readiness checks disappear, and sleep/zero-slot branches are hoisted differently. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"

extern "C" {
s32 FUN_0023a5dc(void *queue);
s32 FUN_0023a4f8(void *queue);
void FUN_00350e30(MovieSync *sync);
void nn_os_LightEvent_Signal(void *event);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void threadSleepDuration(s64 nanoseconds);

u32 movieSyncDrainSourcePositions(MovieSync *sync)
{
    if (FUN_0023a5dc(sync->queue)) {
        if (!FUN_0023a4f8(sync->queue)) {
            sync->state = 7;
        }
        FUN_00350e30(sync);
    }
    if (sync->state != 3 && sync->state != 6) {
        return 0;
    }
    if (sync->state != 1) {
        if (sync->state == 6) {
            nn_os_LightEvent_Signal(sync->unk020);
        }
        nn_os_CriticalSection_Enter(sync);
        sync->state = 2;
        nn_os_CriticalSection_Leave(sync);
    }
    while (sync->state != 1 && sync->state != 8 && sync->state != 7) {
        threadSleepDuration(500000);
    }
    for (s32 stream = 0; stream < MOVIE_SYNC_STREAMS; ++stream) {
        s32 entryIndex = sync->entryIndex[stream];
        if (entryIndex >= 0) {
            s32 slots = 0;
            if (entryIndex < sync->io.entries.count) {
                slots = movieSyncEntrySlots(sync, entryIndex);
            }
            s32 position;
            sync->io.sources[entryIndex]->getPosition(&position);
            position = (position / slots) * slots;
            for (s32 step = 0; step < position; ++step) {
                sync->io.sources[sync->entryIndex[stream]]->unk1c();
                ++sync->readPos[stream];
            }
        }
    }
    return 1;
}
}
