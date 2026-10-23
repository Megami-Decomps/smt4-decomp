#ifndef SOUND_SOUNDEFFECTDELAY_H
#define SOUND_SOUNDEFFECTDELAY_H

#include "common.h"
#include <stddef.h>

struct SoundEffectDelayParameters {
    /* 0x00 */ union { u32 unk00; u32 time; };
    /* 0x04 */ union { f32 unk04; f32 feedback; };
    /* 0x08 */ union { f32 unk08; f32 damping; };
    /* 0x0C */ union { u8 unk0c; u8 surround; };
    /* 0x0d */ u8 unk0d[3];
};
struct SoundEffectDelay {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ SoundEffectDelayParameters parameters;
    /* 0x1C */ u8 unk1C[0x28];
    /* 0x44 */ u32 delayBlocks;
    /* 0x48 */ u32 unk48;
    /* 0x4C */ s32 feedbackGain;
    /* 0x50 */ s32 directGain;
    /* 0x54 */ s32 dampingGain;
    /* 0x58 */ u32 maximumTime;
    /* 0x5C */ u8 surroundSupported;
    /* 0x5D */ u8 channelCount;
    /* 0x5E */ u8 initialized;
    /* 0x5F */ u8 padding;
};
typedef char SoundEffectDelayLayoutCheck[
    sizeof(SoundEffectDelayParameters) == 0x10 && sizeof(SoundEffectDelay) == 0x60 &&
    offsetof(SoundEffectDelay, delayBlocks) == 0x44 &&
    offsetof(SoundEffectDelay, initialized) == 0x5E ? 1 : -1];
typedef char SoundEffectDelayParameterOffsets[
    offsetof(SoundEffectDelayParameters, time) == 0 &&
    offsetof(SoundEffectDelayParameters, feedback) == 4 &&
    offsetof(SoundEffectDelayParameters, damping) == 8 &&
    offsetof(SoundEffectDelayParameters, surround) == 0xC ? 1 : -1];
typedef char SoundEffectDelayGainOffsets[
    offsetof(SoundEffectDelay, parameters) == 0xC &&
    offsetof(SoundEffectDelay, feedbackGain) == 0x4C &&
    offsetof(SoundEffectDelay, directGain) == 0x50 &&
    offsetof(SoundEffectDelay, dampingGain) == 0x54 &&
    offsetof(SoundEffectDelay, maximumTime) == 0x58 &&
    offsetof(SoundEffectDelay, surroundSupported) == 0x5C &&
    offsetof(SoundEffectDelay, channelCount) == 0x5D ? 1 : -1];

#endif
