#include "common.h"

extern "C" {

typedef struct Sound {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ int volumeFrames;
    /* 0x70 */ int volumeFrame;
    /* 0x74 */ u8 unk74[0x34];
    /* 0xA8 */ int panFrames;
    /* 0xAC */ int panFrame;
} Sound;

/* Advances the volume and pan interpolation counters. */
void nw_snd_internal_BasicSound_UpdateMoveValue(Sound *sound)
{
    if (sound->volumeFrame < sound->volumeFrames) {
        sound->volumeFrame = sound->volumeFrame + 1;
    }
    if (sound->panFrame < sound->panFrames) {
        sound->panFrame = sound->panFrame + 1;
    }
}

} /* extern "C" */
