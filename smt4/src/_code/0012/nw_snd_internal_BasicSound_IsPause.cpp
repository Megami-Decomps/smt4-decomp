#include "common.h"

extern "C" {

typedef struct BasicSound {
    /* 0x00 */ u8 unk00[0x8B];
    /* 0x8B */ u8 pauseState;
} BasicSound;

/* Pause state 1 or 2 (pausing/paused) counts as paused. */
u8 nw_snd_internal_BasicSound_IsPause(BasicSound *sound)
{
    return sound->pauseState == 1 || sound->pauseState == 2;
}

} /* extern "C" */
