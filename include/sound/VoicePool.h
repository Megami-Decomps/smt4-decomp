#ifndef SOUND_VOICE_POOL_H
#define SOUND_VOICE_POOL_H
#include "common.h"
#include <stddef.h>

class SoundVoiceBufferAllocator {
public:
    virtual void *allocate(u32 size, u32 alignment) = 0;
    virtual void release(void *buffer) = 0;
};

struct SoundVoicePoolEntry {
    /* 0x00 */ u32 voice;
    /* 0x04 */ void *buffer;
    /* 0x08 */ f32 volume;
    /* 0x0C */ f32 targetVolume;
    /* 0x10 */ u8 unk10[0x28];
    /* 0x38 */ s32 capacity;
    /* 0x3C */ s32 first;
    /* 0x40 */ s32 second;
    /* 0x44 */ u32 counters[4];
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 timing[4];
    /* 0x68 */ s64 startTick;   /* system tick when the voice was started */
};
struct SoundVoicePool {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SoundVoiceBufferAllocator *allocator;
    /* 0x08 */ SoundVoicePoolEntry *entries;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u32 count;
};
typedef char SoundVoicePoolLayout[sizeof(SoundVoicePoolEntry) == 0x70 &&
    offsetof(SoundVoicePoolEntry, capacity) == 0x38 &&
    offsetof(SoundVoicePoolEntry, timing) == 0x58 &&
    offsetof(SoundVoicePool, count) == 0x14 ? 1 : -1];
#endif
