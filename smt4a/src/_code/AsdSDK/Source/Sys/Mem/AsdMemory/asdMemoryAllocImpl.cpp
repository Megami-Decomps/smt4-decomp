/* NON_MATCHING: jump table, branch layout and the compiler's nop hints now match retail; retail keeps separate zero registers (sl, then r4/r6 copies feeding `stm sp, {r4, r6}`) per inlined ExpHeap allocation and size in r8, where the build hoists one zero (r8) and stores twice. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int unk, u8 unk2);
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size);
void FUN_0019a534(void);

/* Allocates from an ExpHeap under its critical section. */
static __inline void *allocateLocked(void *heap, void *lock, u32 size, int alignment)
{
    ScopedCriticalLock guard(lock);
    return nn_fnd_ExpHeapBase_Allocate(heap, size, alignment, 0, 0, 0);
}

/* Allocates `size` bytes from `heap` (a heap id); the alignment class picks the alignment, and
 * a negative alignment allocates from the back of an ExpHeap. Out-of-memory calls the failure hook. */
void *asdMemoryAllocImpl(int heap, u32 alignClass, u32 unk08, u32 size, int fromFront)
{
    AsdMemSystem *sys;
    void *block = NULL;
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
        block = allocateLocked(sys->mainHeap, sys->mainLock, size, alignment);
        if (block == NULL) {
            FUN_0019a534();
        }
    } else if (heap == ASD_HEAP_EXTRA) {
        block = allocateLocked(sys->extraHeap, sys->extraLock, size, alignment);
        if (block == NULL) {
            FUN_0019a534();
        }
    } else if (heap == ASD_HEAP_VRAM_A) {
        block = (void *)asdVramHeapAlloc(&g_asdVramHeapA, size);
    } else if (heap == ASD_HEAP_VRAM_B) {
        block = (void *)asdVramHeapAlloc(&g_asdVramHeapB, size);
    }
    return block;
}

} /* extern "C" */
