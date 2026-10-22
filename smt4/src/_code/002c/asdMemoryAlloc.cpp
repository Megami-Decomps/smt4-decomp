/* NON_MATCHING: aligned-header pointer arithmetic is combined differently and the retail VRAM-branch NOP is absent. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include <stddef.h>

struct AlignedAllocationHeader { u32 size; u16 alignment, flags; };
struct AlignedAllocationView {
    u8 prefix[0x38];
    AlignedAllocationHeader *allocation;
    u8 data[1];
};
struct MemoryAllocationGlobals { u32 unk00; void *lock; };
extern "C" {
extern MemoryAllocationGlobals DAT_00465120;
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void *FUN_002b24d8(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
void FUN_002b23f4(AlignedAllocationHeader *allocation);
void rt_memclr(void *memory, u32 size);

// Allocate VRAM directly; ordinary allocations carry an aligned header and are cleared before use.
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags)
{
    if (heap != ASD_HEAP_VRAM_A && heap != ASD_HEAP_VRAM_B) {
        nn_os_CriticalSection_Enter(DAT_00465120.lock);
        u32 allocatedSize = (size + 0x100 + offsetof(AlignedAllocationView, data) - 1) & ~127u;
        AlignedAllocationHeader *header = (AlignedAllocationHeader *)FUN_002b24d8(heap, alignment, pool, allocatedSize, flags);
        header->size = allocatedSize;
        header->alignment = 128;
        u32 padding = (128 - (((u32)header + offsetof(AlignedAllocationView, data)) & 127)) & 127;
        header->flags = 0;
        AlignedAllocationView *allocation = (AlignedAllocationView *)((u8 *)header + padding);
        allocation->allocation = header;
        void *memory = allocation->data;
        FUN_002b23f4(header);
        rt_memclr(memory, size);
        nn_os_CriticalSection_Leave(DAT_00465120.lock);
        return memory;
    }
    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    void *memory = FUN_002b24d8(heap, alignment, pool, size, flags);
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
    return memory;
}
}
