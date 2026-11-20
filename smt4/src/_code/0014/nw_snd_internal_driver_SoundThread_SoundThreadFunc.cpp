#include "common.h"
#include "shard/S3SoundThread.h"

extern "C" {

SoundThreadTick nw_snd_internal_driver_SoundThread_GetCurrentTick(void);
void nw_snd_internal_driver_SoundThread_WaitForNextFrame(SoundThread *thread, SoundThreadTick *tick);
void nw_snd_internal_driver_SoundThread_RunFrame(SoundThread *thread);

/* Sound thread frame entry: logs the frame's start tick when profiling, then runs the frame. */
void nw_snd_internal_driver_SoundThread_SoundThreadFunc(SoundThread *thread)
{
    if (thread->profileEnabled == 1) {
        SoundThreadTick start;
        start.value = 0;
        start = nw_snd_internal_driver_SoundThread_GetCurrentTick();
        if (thread->profileUsed < thread->profileBufferSize) {
            thread->profileBuffer[thread->profileUsed] = start;
            thread->profileUsed++;
        }
        nw_snd_internal_driver_SoundThread_WaitForNextFrame(thread, &start);
    }
    nw_snd_internal_driver_SoundThread_RunFrame(thread);
}

} /* extern "C" */
