/* nw::snd::internal::driver::Voice: up to two hardware channels, state flags and the parameters
 * the Voice_Set* functions change (each marks its group dirty in `dirtyFlags`). */
#ifndef SHARD_DRIVERVOICE_H
#define SHARD_DRIVERVOICE_H

#include "common.h"

struct DriverVoice;
typedef void (*DriverVoiceCallback)(struct DriverVoice *voice, s32 reason, u32 userData);

typedef struct DriverVoice {
    /* 0x00 */ u32 channels[2];
    /* 0x08 */ s32 channelCount;
    /* 0x0C */ DriverVoiceCallback callback;
    /* 0x10 */ u32 userData;
    /* 0x14 */ u8 allocated;
    /* 0x15 */ u8 started;
    /* 0x16 */ u8 playing;
    /* 0x17 */ u8 paused;
    /* 0x18 */ u8 pending;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ u32 lastWaveBuffer;
    /* 0x20 */ u16 dirtyFlags;
    /* 0x22 */ u8 unk22[6];
    /* 0x28 */ f32 pitch;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ f32 pan;
    /* 0x34 */ f32 surroundPan;
    /* 0x38 */ f32 lpfFreq;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ s32 priority;
} DriverVoice;

#endif
