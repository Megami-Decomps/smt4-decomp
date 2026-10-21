#ifndef SHARD_W6_W6MATCH7_UNITHEAPMODULE_H
#define SHARD_W6_W6MATCH7_UNITHEAPMODULE_H
#include "common.h"

struct UnitHeapModuleRecord {
    u32 words[4];
};

struct UnitHeapModuleState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 state[5];
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ u32 count;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ u32 lock;
    /* 0x34 */ u32 flags;
    /* 0x38 */ s32 limit;
};

typedef void (*UnitHeapModuleDestructor)(void *);

extern "C" {
void nn_fnd_UnitHeapBase_Initialize(UnitHeapModuleState *, u32 elementSize,
                                     void *buffer, u32 bytes, s32 alignment, u32 flags);
void nn_os_CriticalSection_Initialize(u32 *);
__weak s32 __aeabi_atexit(void *, UnitHeapModuleDestructor, void *module);
}

static __inline void unitHeapModuleInitialize(UnitHeapModuleState *heap, const void *vtable,
                                               u32 elementSize, void *buffer, u32 bytes)
{
    for (u32 index = 0; index < 5; ++index) {
        heap->state[index] = 0;
    }
    heap->count = 0;
    heap->lock = 0;
    heap->flags = 0;
    heap->limit = -1;
    heap->vtable = vtable;
    nn_fnd_UnitHeapBase_Initialize(heap, elementSize, buffer, bytes, 4, 0);
    nn_os_CriticalSection_Initialize(&heap->lock);
}
#endif
