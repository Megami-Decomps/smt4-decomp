/* NON_MATCHING: register choice for the lock global (r9 vs sl) and the header stores/uxth of the alignment are scheduled differently from retail. */
#include "common.h"

extern "C" {

/* The header in front of every allocation. */
typedef struct AsdMemoryBlock {
    /* 0x00 */ u32 size;
    /* 0x04 */ u16 alignment;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 unk08[0x34];
} AsdMemoryBlock;

typedef struct AsdMemoryLock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 criticalSection;
} AsdMemoryLock;

extern AsdMemoryLock DAT_00465120;

void nn_os_CriticalSection_Enter(u32 section);
void nn_os_CriticalSection_Leave(u32 section);
AsdMemoryBlock *FUN_002b24d8(u32 heap, u32 kind, u32 flags, u32 size, s32 tag);
void FUN_002b23f4(AsdMemoryBlock *block);
void rt_memclr(void *dest, u32 size);

/* The aligned user data of a block: the first `alignment` boundary past its header. */
static __inline u8 *asdMemoryBlockData(AsdMemoryBlock *block)
{
    u32 mask = block->alignment - 1;
    return (u8 *)(block + 1) + ((block->alignment - ((u32)(block + 1) & mask)) & mask);
}

/* Allocates `size` cleared bytes aligned to `alignment` (at least 0x80); the block header sits below. */
void *asdMemoryAllocAligned(u32 heap, u32 kind, u32 flags, u32 size, u32 alignment, s32 tag)
{
    nn_os_CriticalSection_Enter(DAT_00465120.criticalSection);
    if (alignment < 0x80) {
        alignment = 0x80;
    }
    u32 total = (size + alignment + alignment + sizeof(AsdMemoryBlock) - 1) & -alignment;
    AsdMemoryBlock *block = FUN_002b24d8(heap, kind, flags, total, tag);
    block->size = total;
    block->alignment = alignment;
    block->unk06 = 0;
    u8 *data = asdMemoryBlockData(block);
    ((AsdMemoryBlock **)data)[-1] = block;
    FUN_002b23f4(block);
    rt_memclr(data, size);
    nn_os_CriticalSection_Leave(DAT_00465120.criticalSection);
    return data;
}

} /* extern "C" */
