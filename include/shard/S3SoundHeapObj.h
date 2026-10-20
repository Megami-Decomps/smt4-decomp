/* A sound object that owns a frame heap (a secondary base at +0x10) guarded by a critical section. */
#ifndef SHARD_S3SOUNDHEAPOBJ_H
#define SHARD_S3SOUNDHEAPOBJ_H

#include "common.h"

typedef struct SoundHeapObjHandle {
    u32 unk00;
} SoundHeapObjHandle;

typedef struct SoundHeapObj {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 lock[0x8];                 /* CriticalSection */
    /* 0x0C */ s32 id;
    /* 0x10 */ u32 heap;                     /* FrameHeap base: its first word is the heap handle */
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ SoundHeapObjHandle handleA;
    /* 0x24 */ SoundHeapObjHandle handleB;
} SoundHeapObj;

#endif
