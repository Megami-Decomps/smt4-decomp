#ifndef MOBICLIP_CTRL_MOBICLIPHEAPS_H
#define MOBICLIP_CTRL_MOBICLIPHEAPS_H

#include "common.h"
#include <stddef.h>

struct MobiclipHeap {
    u8 heapState[0x30];
    void *allocation;
    u8 unk34[0x24];
};
typedef char MobiclipHeapLayoutCheck[sizeof(MobiclipHeap) == 0x58 &&
    offsetof(MobiclipHeap, allocation) == 0x30 ? 1 : -1];

extern "C" void nn_fnd_ExpHeapBase_Finalize(MobiclipHeap *);
extern "C" void asdMemFree(void *);

static inline void mobiclipFinalizeHeap(MobiclipHeap *heap)
{
    void *allocation = heap->allocation;
    nn_fnd_ExpHeapBase_Finalize(heap);
    asdMemFree(allocation);
}

#endif
