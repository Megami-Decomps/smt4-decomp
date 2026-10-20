/* NON_MATCHING: retail's switch is a jump table and its nops (stripped debug calls) sit after each failed-allocation check. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int unk, u8 unk2);
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size);
void FUN_0019a534(void);

/* Allocates `size` bytes from `heap` (a heap id); the alignment class picks the alignment, and
 * a negative alignment allocates from the back of an ExpHeap. Out-of-memory calls the failure hook. */
void *asdMemoryAllocImpl(int heap, u32 alignClass, u32 unk08, u32 size, int fromFront)
{
    AsdMemSystem *sys;
    void *block;
    int alignment;

    if (size == 0) {
        return NULL;
    }

    alignment = 8;
    switch (alignClass) {
    case ASD_ALIGN_DEFAULT:
        alignment = 4;
        break;
    case ASD_ALIGN_VRAM:
        alignment = 0x80;
        break;
    case ASD_ALIGN_TEXTURE:
        alignment = 0x40;
        break;
    case ASD_ALIGN_16:
    case ASD_ALIGN_16 + 1:
        alignment = 0x10;
        break;
    }
    if (!fromFront) {
        alignment = -alignment;
    }

    sys = g_asdMemory.system;
    if (heap == ASD_HEAP_MAIN) {
        nn_os_CriticalSection_Enter(sys->mainLock);
        block = nn_fnd_ExpHeapBase_Allocate(sys->mainHeap, size, alignment, 0, 0, 0);
        nn_os_CriticalSection_Leave(sys->mainLock);
    } else if (heap == ASD_HEAP_EXTRA) {
        nn_os_CriticalSection_Enter(sys->extraLock);
        block = nn_fnd_ExpHeapBase_Allocate(sys->extraHeap, size, alignment, 0, 0, 0);
        nn_os_CriticalSection_Leave(sys->extraLock);
    } else if (heap == ASD_HEAP_VRAM_A) {
        return (void *)asdVramHeapAlloc(&g_asdVramHeapA, size);
    } else if (heap == ASD_HEAP_VRAM_B) {
        return (void *)asdVramHeapAlloc(&g_asdVramHeapB, size);
    } else {
        return NULL;
    }
    if (block == NULL) {
        FUN_0019a534();
    }
    return block;
}

} /* extern "C" */
