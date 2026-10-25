#ifndef ASDSDK_SOURCE_SND_SOUNDACTORQUEUE_H
#define ASDSDK_SOURCE_SND_SOUNDACTORQUEUE_H

#include "common.h"
#include <stddef.h>

struct SoundActorQueuePosition {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

struct SoundActorQueueEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 soundId;
    /* 0x08 */ u32 handle;
    union {
        /* 0x0c */ u32 unk0c;
        /* 0x0c */ u32 started; /* 1 while the distance-managed actor sound runs */
    };
    union {
        /* 0x10 */ u16 unk10;
        /* 0x10 */ u16 positional; /* 1: sound started and stopped by distance to the listener */
    };
    union {
        /* 0x12 */ u8 unk12[2];
        /* 0x12 */ s16 inactiveFrames;
    };
    /* 0x14 */ SoundActorQueuePosition position;
};

struct SoundActorQueue {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 pending;
    /* 0x09 */ u8 enabled;
    /* 0x0a */ u8 unk0a[2];
    /* 0x0c */ SoundActorQueueEntry entries[1];
};

typedef char SoundActorQueueEntrySizeCheck[sizeof(SoundActorQueueEntry) == 0x20 ? 1 : -1];
typedef char SoundActorQueueTimerOffsetCheck[offsetof(SoundActorQueueEntry, inactiveFrames) == 0x12 &&
    sizeof(SoundActorQueueEntry) == 0x20 ? 1 : -1];
typedef char SoundActorQueuePositionLayoutCheck[
    sizeof(SoundActorQueuePosition) == 0xC &&
    offsetof(SoundActorQueuePosition, x) == 0 && offsetof(SoundActorQueuePosition, y) == 4 &&
    offsetof(SoundActorQueuePosition, z) == 8 &&
    offsetof(SoundActorQueueEntry, position) == 0x14 ? 1 : -1];

/* Adapt the engine's three-float position arrays to the positional-sound value type. */
static __inline SoundActorQueuePosition soundActorPositionFromArray(const f32 *values)
{
    SoundActorQueuePosition position = { values[0], values[1], values[2] };
    return position;
}

static __inline SoundActorQueuePosition soundActorScalePosition(SoundActorQueuePosition position, f32 scale)
{
    position.x *= scale;
    position.y *= scale;
    position.z *= scale;
    return position;
}

/* Start a positional actor sound, returning its slot handle or the invalid handle. */
extern "C" u32 FUN_00291e40(u32 soundId, SoundActorQueuePosition position);
extern "C" void eventSoundPlayByKind(u32 kind, s32 index, SoundActorQueuePosition position);

#endif
