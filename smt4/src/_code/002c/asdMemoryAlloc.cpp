/* NON_MATCHING: header setup inlined like smt4a FUN_001844ac; only the scheduling of the padding computation against the header stores differs (retail computes the misalignment first). */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/AllocatorState.h"
#include "bible/bibleDevil.h"

/* The header in front of an aligned allocation; the word just before the user data points back at it. */
struct AlignedAllocationHeader {
    /* 0x00 */ u32 size;
    /* 0x04 */ u16 alignment;
    /* 0x06 */ u16 flags;
    /* 0x08 */ u8 unk08[0x34];
};
typedef char AlignedAllocationHeaderSize[sizeof(AlignedAllocationHeader) == 0x3C ? 1 : -1];
extern "C" {
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void *asdMemoryAllocFromHeap(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
void asdMemoryTrackAllocation(AlignedAllocationHeader *allocation);
void rt_memclr(void *memory, u32 size);

// Align the user allocation after its header and install the preceding back-pointer.
static __inline void *alignedAllocationInit(AlignedAllocationHeader *header, u32 size, u16 alignment, u16 flags)
{
    header->size = size;
    header->alignment = alignment;
    header->flags = flags;
    u32 boundary = header->alignment;
    u32 mask = boundary - 1;
    u32 padding = (boundary - ((u32)(header + 1) & mask)) & mask;
    u8 *data = (u8 *)header + padding;
    ((AlignedAllocationHeader **)data)[sizeof(AlignedAllocationHeader) / sizeof(AlignedAllocationHeader *) - 1] = header;
    data += sizeof(AlignedAllocationHeader);
    asdMemoryTrackAllocation(header);
    return data;
}

// Allocate VRAM directly; ordinary allocations carry an aligned header and are cleared before use.
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags)
{
    if (heap != ASD_HEAP_VRAM_A && heap != ASD_HEAP_VRAM_B) {
        nn_os_CriticalSection_Enter(g_asdMemState.lock);
        u32 paddedSize = (size + 0x100 + sizeof(AlignedAllocationHeader) - 1) & ~0x7f;
        void *block = asdMemoryAllocFromHeap(heap, alignment, pool, paddedSize, flags);
        void *memory = alignedAllocationInit((AlignedAllocationHeader *)block, paddedSize, 0x80, 0);
        rt_memclr(memory, size);
        nn_os_CriticalSection_Leave(g_asdMemState.lock);
        return memory;
    }
    nn_os_CriticalSection_Enter(g_asdMemState.lock);
    void *memory = asdMemoryAllocFromHeap(heap, alignment, pool, size, flags);
    nn_os_CriticalSection_Leave(g_asdMemState.lock);
    return memory;
}
}
