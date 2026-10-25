/* NON_MATCHING: allocation-tracker registers and header halfword-store scheduling differ. */
#include "sys/AllocationTracking.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern AllocationTracking DAT_00465120;
AllocationHeader *FUN_002b24d8(u32, u32, u32, u32, u32);
void FUN_002b23f4(AllocationHeader *);
void rt_memclr(void *, u32);
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);

// Allocate an aligned, zero-filled payload and register its backing block.
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category)
{
    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    if (alignment < 128)
        alignment = 128;
    u32 backingSize = (size + alignment + alignment + sizeof(AllocationHeader) - 1) & -alignment;
    AllocationHeader *block = FUN_002b24d8(heap, alignmentClass, flags, backingSize, category);
    block->size = backingSize;
    block->alignment = static_cast<u16>(alignment);
    block->flags = 0;
    u32 mask = static_cast<u16>(alignment) - 1;
    u32 padding = (static_cast<u16>(alignment) - (reinterpret_cast<u32>(block + 1) & mask)) & mask;
    u8 *payload = reinterpret_cast<u8 *>(block + 1) + padding;
    reinterpret_cast<AllocationHeader **>(payload)[-1] = block;
    FUN_002b23f4(block);
    rt_memclr(payload, size);
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
    return payload;
}
}
