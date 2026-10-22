#ifndef SOUND_SOUNDEFFECTDELAY_H
#define SOUND_SOUNDEFFECTDELAY_H

#include "common.h"

struct SoundEffectDelayParameters {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0c */ u8 unk0c;
    /* 0x0d */ u8 unk0d[3];
};
struct SoundEffectDelay;

#endif
