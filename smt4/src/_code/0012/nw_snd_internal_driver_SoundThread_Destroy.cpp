#include "common.h"

extern "C" {

int nw_snd_internal_driver_SoundThread_Stop(void);

typedef struct SoundThread {
    /* 0x000 */ u8 unk000[500];
    /* 0x1F4 */ u8 running;
    /* 0x1F5 */ u8 unk1F5[2];
    /* 0x1F7 */ u8 stopRequested;
} SoundThread;

void nw_snd_internal_driver_SoundThread_Destroy(SoundThread *thread)
{
    if (thread->running != 0) {
        thread->stopRequested = 1;
        nw_snd_internal_driver_SoundThread_Stop();
        thread->running = 0;
    }
}

} /* extern "C" */
