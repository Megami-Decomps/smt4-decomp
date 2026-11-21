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
/* Sets a thread stack's buffer and size: one `stm r0, {r1, r2}`, which armlink inlined at every call (inlined.txt). */
void soundInitStackSet(SoundInitStack* stack, u8* buffer, u32 size);
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

void fsMountRomFs(u32 maxFiles, u32 maxDirectories, void *buffer, u32 bufferSize, u32 useCache);

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
