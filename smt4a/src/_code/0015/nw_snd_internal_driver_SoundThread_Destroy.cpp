#include "common.h"

extern "C" {

void FUN_001a171c(void);

typedef struct SoundThread {
    /* 0x000 */ u8 unk000[0x1F4];
    /* 0x1F4 */ u8 running;
    /* 0x1F5 */ u8 unk1F5[2];
    /* 0x1F7 */ u8 stopRequested;
} SoundThread;

/* Stops a running sound thread: sets `stopRequested`, calls FUN_001a171c and clears `running`. */
void nw_snd_internal_driver_SoundThread_Destroy(SoundThread *thread)
{
    if (thread->running != 0) {
        thread->stopRequested = 1;
        FUN_001a171c();
        thread->running = 0;
    }
}

} /* extern "C" */
