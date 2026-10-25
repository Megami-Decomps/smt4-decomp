#ifndef SHARD_W6_W6MATCH7_SOUNDINIT_H
#define SHARD_W6_W6MATCH7_SOUNDINIT_H

#include "common.h"

struct SoundSystemInitParameters {
    /* 0x00 */ u32 soundPriority;
    /* 0x04 */ u32 threadMode;
    /* 0x08 */ u32 soundStackSize;
    /* 0x0c */ u32 poolSizeA;
    /* 0x10 */ u32 taskPriority;
    /* 0x14 */ u32 taskStackSize;
    /* 0x18 */ u32 poolSizeB;
    /* 0x1c */ u8 startThread;
    /* 0x1d */ s8 profiling;
    /* 0x1e */ u8 auxiliary;
    /* 0x1f */ u8 unk1f;
    /* 0x20 */ s32 profileBufferSize;
};

struct SoundSystemInitFlags {
    u8 usesThread, initialized, poolsInitialized, unk03;
    u32 driverMode;
};

struct SoundInitStack {
    u8* buffer;
    u32 size;
};

extern "C" {
void asdSoundInitialize(s32 auxiliaryMode);
u32 nw_snd_SoundSystem_GetRequiredMemSize(const SoundSystemInitParameters* parameters);
void nwSoundSystemInitializeBuffers(const SoundSystemInitParameters* parameters, u8* buffer, u32 bufferSize);
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00106db4(u32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_0010f548(u32 parameter);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdSoundSetVolumeIfEnabled(u8 volume);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void romPathForward(u32 a, u32 b, u32 c, u32 d, u32 e);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 sndSystemShutdown(void);

#ifdef __cplusplus
}
#endif

#endif
