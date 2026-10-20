#include "common.h"
#include "shard/S3SoundThread.h"

extern "C" {

SoundThreadTick FUN_001afc10(void);
void FUN_001a611c(SoundThread *thread, SoundThreadTick *tick);
void FUN_001a5fb8(SoundThread *thread);

/* Sound thread frame entry: logs the frame's start tick when profiling, then runs the frame. */
void nw_snd_internal_driver_SoundThread_SoundThreadFunc(SoundThread *thread)
{
    if (thread->profileEnabled == 1) {
        SoundThreadTick start;
        start.value = 0;
        start = FUN_001afc10();
        if (thread->profileUsed < thread->profileBufferSize) {
            thread->profileBuffer[thread->profileUsed] = start;
            thread->profileUsed++;
        }
        FUN_001a611c(thread, &start);
    }
    FUN_001a5fb8(thread);
}

} /* extern "C" */
