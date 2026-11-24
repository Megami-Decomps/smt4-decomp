#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int unk, u8 unk2);
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size);
void FUN_0019a534(void);

/* Allocates from an ExpHeap under its critical section (nn::fnd::ExpHeap's locked Allocate, whose group id,
 * allocation mode and reuse flag default to 0). */
static __inline void *allocateLocked(void *heap, void *lock, u32 size, int alignment, u8 groupId = 0, int mode = 0,
                                     u8 reuse = 0)
{
    ScopedCriticalLock guard(lock);
    return nn_fnd_ExpHeapBase_Allocate(heap, size, alignment, groupId, mode, reuse);
}

/* Allocates `size` bytes from `heap` (a heap id); the alignment class picks the alignment, and
 * a negative alignment allocates from the back of an ExpHeap. Out-of-memory calls the failure hook. */
void *asdMemoryAllocImpl(int heap, u32 alignClass, u32 unk08, u32 size, int fromFront)
{
    if (size == 0) {
        return NULL;
    }

    s32 alignment = 8;
    void *block = NULL;
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

    switch (heap) {
    case ASD_HEAP_MAIN:
        block = allocateLocked(g_asdMemory.system->mainHeap, g_asdMemory.system->mainLock, size, alignment);
        if (block == NULL) {
            FUN_0019a534();
        }
        break;
    case ASD_HEAP_EXTRA:
        block = allocateLocked(g_asdMemory.system->extraHeap, g_asdMemory.system->extraLock, size, alignment);
        if (block == NULL) {
            FUN_0019a534();
        }
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
