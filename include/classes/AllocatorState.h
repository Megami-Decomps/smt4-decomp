#ifndef CLASSES_ALLOCATORSTATE_H
#define CLASSES_ALLOCATORSTATE_H

#include "common.h"
#include <stddef.h>
#include "sys/AllocationTracking.h"

/* The engine allocator's global state: a scoped allocation tag, the mutex that guards the heaps,
 * the usage record of the active heap, the asdMemMap debug display's processes, and the base and
 * size of the four heap regions (main, extra, VRAM A, VRAM B).
 * IV: DAT_00465120 (0x3C bytes); Apocalypse: g_allocationAddressRanges at 0x5B4028 (0x40 bytes,
 * one more word before the regions). */
struct AllocatorState {
    /* 0x00 */ u16 tagPrevious;          /* usage tag saved by the outermost tag scope */
    /* 0x02 */ u16 tagDepth;             /* nesting depth of tag scopes */
    /* 0x04 */ void *lock;                /* critical section guarding the heaps */
    /* 0x08 */ AllocationUsage *usage;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ void *lastMapProcess;     /* latest debug process started */
    /* 0x14 */ void *mapProcess;         /* the running asdMemMap process */
    /* 0x18 */ s32 debugEnabled;
    /* 0x1C */ u32 regionBase[4];
    /* 0x2C */ u32 regionSize[4];
};
typedef char AllocatorStateLayoutCheck[offsetof(AllocatorState, usage) == 0x08 &&
    offsetof(AllocatorState, debugEnabled) == 0x18 && offsetof(AllocatorState, regionBase) == 0x1C &&
    sizeof(AllocatorState) == 0x3C ? 1 : -1];

struct AllocatorStateA {
    /* 0x00 */ u16 tagPrevious;
    /* 0x02 */ u16 tagDepth;
    /* 0x04 */ u32 *mutex;               /* points at mutexHandle */
    /* 0x08 */ AllocationUsage *usage;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ void *lastMapProcess;
    /* 0x14 */ void *mapProcess;
    /* 0x18 */ s32 debugEnabled;
    /* 0x1C */ u32 mutexHandle;          /* handle of the mutex guarding the heaps */
    /* 0x20 */ u32 regionBase[4];
    /* 0x30 */ u32 regionSize[4];
};
typedef char AllocatorStateALayoutCheck[offsetof(AllocatorStateA, usage) == 0x08 &&
    offsetof(AllocatorStateA, debugEnabled) == 0x18 && offsetof(AllocatorStateA, regionBase) == 0x20 &&
    sizeof(AllocatorStateA) == 0x40 ? 1 : -1];

extern "C" {
extern AllocatorState DAT_00465120;
extern AllocatorStateA g_allocationAddressRanges;
}

#endif
