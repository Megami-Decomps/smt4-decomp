/* NON_MATCHING: zero-size return is shrink-wrapped, lock release tails are shared and heap/lock addresses are recomputed; 78 versus retail 91 instructions, -O2 candidate. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemory g_asdMemory;
extern AsdVramHeap g_asdVramHeapA;
extern AsdVramHeap g_asdVramHeapB;
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, s32 alignment, u8 mode, s32 argument, u8 flags);
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size);

// Route an aligned allocation to the selected FCRAM heap or VRAM bank.
void *FUN_002b24d8(s32 heap, u32 alignmentClass, u32 unused, u32 size, s32 fromFront)
{
    if (!size)
        return 0;
    s32 alignment = 8;
    switch (alignmentClass) {
    case ASD_ALIGN_DEFAULT: alignment = 4; break;
    case ASD_ALIGN_VRAM: alignment = 0x80; break;
    case ASD_ALIGN_TEXTURE: alignment = 0x40; break;
    case ASD_ALIGN_16:
    case ASD_ALIGN_16 + 1: alignment = 0x10; break;
    }
    if (!fromFront)
        alignment = -alignment;
    AsdMemSystem *system = g_asdMemory.system;
    void *block = 0;
    if (heap == ASD_HEAP_MAIN) {
        nn_os_CriticalSection_Enter(system->mainLock);
        block = nn_fnd_ExpHeapBase_Allocate(system->mainHeap, size, alignment, 0, 0, 0);
        nn_os_CriticalSection_Leave(system->mainLock);
    } else if (heap == ASD_HEAP_EXTRA) {
        nn_os_CriticalSection_Enter(system->extraLock);
        block = nn_fnd_ExpHeapBase_Allocate(system->extraHeap, size, alignment, 0, 0, 0);
        nn_os_CriticalSection_Leave(system->extraLock);
    } else if (heap == ASD_HEAP_VRAM_A) {
        block = reinterpret_cast<void *>(asdVramHeapAlloc(&g_asdVramHeapA, size));
    } else if (heap == ASD_HEAP_VRAM_B) {
        block = reinterpret_cast<void *>(asdVramHeapAlloc(&g_asdVramHeapB, size));
    }
    return block;
}
}
