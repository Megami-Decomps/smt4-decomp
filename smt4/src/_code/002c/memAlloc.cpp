#include "sys/AllocationTracking.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern AllocationTracking DAT_00465120;
AllocationHeader *FUN_002b24d8(u32, u32, u32, u32, u32);
void FUN_002b23f4(AllocationHeader *);
void rt_memclr(void *, u32);
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);

/* Fills in the header and returns the payload: the first `alignment`-aligned address after the
 * header, whose preceding word points back at the header. */
static __inline void *allocationHeaderInit(AllocationHeader *header, u32 size, u16 alignment, u16 flags)
{
    header->size = size;
    header->alignment = alignment;
    header->flags = flags;
    u32 boundary = header->alignment;
    u32 mask = boundary - 1;
    u32 padding = (boundary - ((u32)(header + 1) & mask)) & mask;
    u8 *data = (u8 *)header + padding;
    ((AllocationHeader *)data)->owner = header;  /* the word just before the payload */
    data += sizeof(AllocationHeader);
    FUN_002b23f4(header);
    return data;
}

/* Allocates an aligned, zero-filled payload and registers its backing block. */
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category)
{
    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    if (alignment < 128)
        alignment = 128;
    u32 mask = -alignment;
    u32 backingSize = (size + alignment + alignment + sizeof(AllocationHeader) - 1) & mask;
    AllocationHeader *block = FUN_002b24d8(heap, alignmentClass, flags, backingSize, category);
    void *payload = allocationHeaderInit(block, backingSize, alignment, 0);
    rt_memclr(payload, size);
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
    return payload;
}
}
