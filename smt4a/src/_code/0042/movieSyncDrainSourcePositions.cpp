/* NON_MATCHING: retail reloads sync->state before every compare (thread-polled field; matches with `volatile s32 state`); remaining diffs are branch layout around the state=7 store and the sleep loop. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"

extern "C" {
s32 counterPairRemaining(void *queue);
s32 FUN_0042337c(void *queue);
void FUN_00425448(MovieSync *sync);
void nn_os_LightEvent_Signal(void *event);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void svcSleepThread(s64 nanoseconds);

u32 movieSyncDrainSourcePositions(MovieSync *sync)
{
    if (counterPairRemaining(sync->queue)) {
        if (!FUN_0042337c(sync->queue)) {
            sync->state = 7;
        }
        FUN_00425448(sync);
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
        svcSleepThread(500000);
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
