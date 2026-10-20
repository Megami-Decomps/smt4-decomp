/* NON_MATCHING: retail computes the rounded size in r4 (push {r4, r5}) before storing the handle; built keeps it in r1 and stores first. */
#include "shard/S2SharedMemoryBlock.h"

extern "C" {

extern u32 FUN_001396cc(SharedMemoryBlock *block, u32 size, u32 readOnly);

/* Records the handle, then maps the block with its size rounded up to whole 4 KiB pages. */
u32 nn_os_SharedMemoryBlock_AttachAndMap(SharedMemoryBlock *block, s32 handle, u32 size, u32 readOnly)
{
    block->handle = handle;
    return FUN_001396cc(block, (size + 0xfff) / 0x1000 * 0x1000, readOnly);
}

} /* extern "C" */
