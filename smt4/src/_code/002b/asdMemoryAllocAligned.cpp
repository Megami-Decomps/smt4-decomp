#include "common.h"
#include "classes/AllocatorState.h"

extern "C" {

/* The header in front of every allocation. */
typedef struct AsdMemoryBlock {
    /* 0x00 */ u32 size;
    /* 0x04 */ u16 alignment;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 unk08[0x34];
} AsdMemoryBlock;


void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
AsdMemoryBlock *asdMemoryAllocFromHeap(u32 heap, u32 kind, u32 flags, u32 size, s32 tag);
void asdMemoryTrackAllocation(AsdMemoryBlock *block);
void rt_memclr(void *dest, u32 size);

/* Fills in the block's header and returns its user data: the first `alignment` boundary past the
 * header, whose preceding word points back at the block. */
static __inline void *asdMemoryBlockInit(AsdMemoryBlock *block, u32 size, u16 alignment, u16 unk06)
{
    block->size = size;
    block->alignment = alignment;
    block->unk06 = unk06;
    u32 boundary = block->alignment;
    u32 mask = boundary - 1;
    u32 padding = (boundary - ((u32)(block + 1) & mask)) & mask;
    u8 *data = (u8 *)block + padding;
    data += sizeof(AsdMemoryBlock);
    ((AsdMemoryBlock **)data)[-1] = block;
    asdMemoryTrackAllocation(block);
    return data;
}

/* Allocates `size` cleared bytes aligned to `alignment` (at least 0x80); the block header sits below. */
void *asdMemoryAllocAligned(u32 heap, u32 kind, u32 flags, u32 size, u32 alignment, s32 tag)
{
    nn_os_CriticalSection_Enter(g_asdMemState.lock);
    if (alignment < 0x80) {
        alignment = 0x80;
    }
    u32 mask = -alignment;
    u32 total = (size + alignment + alignment + sizeof(AsdMemoryBlock) - 1) & mask;
    AsdMemoryBlock *block = asdMemoryAllocFromHeap(heap, kind, flags, total, tag);
    void *data = asdMemoryBlockInit(block, total, alignment, 0);
    rt_memclr(data, size);
    nn_os_CriticalSection_Leave(g_asdMemState.lock);
    return data;
}

} /* extern "C" */
