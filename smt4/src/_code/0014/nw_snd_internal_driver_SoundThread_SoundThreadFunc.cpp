#include "common.h"
#include "shard/S3SoundThread.h"

extern "C" {

SoundThreadTick FUN_0014fbc4(void);
void FUN_0014c6a8(SoundThread *thread, SoundThreadTick *tick);
void FUN_0014c544(SoundThread *thread);

/* Sound thread frame entry: logs the frame's start tick when profiling, then runs the frame. */
void nw_snd_internal_driver_SoundThread_SoundThreadFunc(SoundThread *thread)
{
    if (thread->profileEnabled == 1) {
        SoundThreadTick start;
        start.value = 0;
        start = FUN_0014fbc4();
        if (thread->profileUsed < thread->profileBufferSize) {
            thread->profileBuffer[thread->profileUsed] = start;
            thread->profileUsed++;
        }
        FUN_0014c6a8(thread, &start);
    }
    FUN_0014c544(thread);
}

} /* extern "C" */
