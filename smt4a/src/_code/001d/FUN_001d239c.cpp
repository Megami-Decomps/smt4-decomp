#include "common.h"

extern "C" {

void nw_snd_internal_driver_Voice_SetPriority(s32 driverVoice, s32 priority);

typedef struct Voice {
    /* 0x000 */ u8 unk000[0x98];
    /* 0x098 */ u8 state;
    /* 0x099 */ u8 unk099[0x9F];
    /* 0x138 */ u8 active;
    /* 0x139 */ u8 unk139[3];
    /* 0x13C */ u8 locked;
    /* 0x13D */ u8 unk13D[0x6B];
    /* 0x1A8 */ s32 driverVoice;
} Voice;

/* Moves the voice to state 4 (lowering its driver voice's priority to 1 first when it has one and is not locked) and clears `active`. */
void FUN_001d239c(Voice *voice)
{
    if (voice->state != 4) {
        if ((voice->driverVoice != 0) && (voice->locked == 0)) {
            nw_snd_internal_driver_Voice_SetPriority(voice->driverVoice, 1);
        }
        voice->state = 4;
    }
    voice->active = 0;
}

} /* extern "C" */
