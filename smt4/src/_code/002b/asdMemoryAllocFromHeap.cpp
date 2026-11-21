/* NON_MATCHING: only where `block` is cleared: retail sets it after the size test, next to the default alignment; the build clears it before the test. Assigning `block = NULL;` right after `alignment = 8;` is IDENTICAL (as in smt4a asdMemoryAllocImpl) but was found by trying placements. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern AsdMemory g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */
void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, s32 alignment, u8 mode, s32 argument, u8 flags);
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size);

/* Allocates from an ExpHeap under its critical section (nn::fnd::ExpHeap's locked Allocate, whose group id,
 * allocation mode and reuse flag default to 0; the same helper as smt4a asdMemoryAllocImpl's). */
static __inline void *allocateLocked(void *heap, void *lock, u32 size, s32 alignment, u8 groupId = 0, s32 mode = 0,
                                     u8 reuse = 0)
{
    ScopedCriticalLock guard(lock);
    return nn_fnd_ExpHeapBase_Allocate(heap, size, alignment, groupId, mode, reuse);
}

/* Allocates `size` bytes from `heap` (a heap id); the alignment class picks the alignment, and
 * a negative alignment allocates from the back of an ExpHeap. */
void *asdMemoryAllocFromHeap(s32 heap, u32 alignmentClass, u32 unused, u32 size, s32 fromFront)
{
    void *block = NULL;
    s32 alignment;

    if (size == 0) {
        return NULL;
    }

    alignment = 8;
    switch (alignmentClass) {
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

    switch (heap) {
    case ASD_HEAP_MAIN:
        block = allocateLocked(g_asdMemory.system->mainHeap, g_asdMemory.system->mainLock, size, alignment);
        break;
    case ASD_HEAP_EXTRA:
        block = allocateLocked(g_asdMemory.system->extraHeap, g_asdMemory.system->extraLock, size, alignment);
        break;
    case ASD_HEAP_VRAM_A:
        block = (void *)asdVramHeapAlloc(&g_asdVramHeapA, size);
        break;
    case ASD_HEAP_VRAM_B:
        block = (void *)asdVramHeapAlloc(&g_asdVramHeapB, size);
        break;
    }
    return block;
}

} /* extern "C" */
