/* NON_MATCHING: readable rewrite of the command-holder creator (line buffers from one allocator, the 0x860-byte holder from the other through its class operator new, two VRAM lines with their physical offsets, then the holder's own buffers carved from its storage). Retail keeps the holder size (0x860) and count * 2 in saved registers, clears the sixteen entries with an up-counting loop and the header pairs after them, and walks the storage buffers with a loop it does not unroll. */
#include "common.h"
#include "gfx/CommandHolder.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
u32 vramAreaGetBaseAddress(u32 area);
}

extern "C" {

/* Creates the command holder for `resource` (kept only when its type flags match) with two VRAM
 * lines of `count` halfwords; NULL when an allocation fails. */
CommandHolder *commandHolderCreate(const u32 *resource, s32 count, AsdAllocatorObject *allocator,
                            AsdAllocatorObject *bufferAllocator)
{
    const u32 *owner = (resource != NULL && (*resource & 0x10000002) == 0x10000002) ? resource : NULL;
    u32 lineSize = count * sizeof(u16) + 16;
    u32 buffer = (u32)bufferAllocator->allocate(((lineSize + 31) & ~31) + lineSize, 32);
    if (buffer == 0) {
        return NULL;
    }
    CommandHolder *holder = new (allocator) CommandHolder(owner, count, allocator, bufferAllocator, buffer);
    if (holder == NULL) {
        bufferAllocator->release((void *)buffer);
        return NULL;
    }
    for (s32 i = 0; i < 2; i++) {
        holder->lines[i] = (buffer + 31) & ~31;
        buffer = holder->lines[i] + lineSize;
        u32 vramBase = osVirtToPhysAddress(vramAreaGetBaseAddress(0x20000));
        holder->lineOffsets[i] = osVirtToPhysAddress(holder->lines[i]) - vramBase;
    }
    u32 address = (u32)holder->storage;
    for (s32 i = 0; i < 2; i++) {
        holder->bufferAddress[i] = (address + 31) & ~31;
        address = holder->bufferAddress[i] + 0x220;
    }
    holder->commandAddress = (address + 31) & ~31;
    holder->extraAddress = (holder->commandAddress + 0x180 + 31) & ~31;
    return holder;
}

} /* extern "C" */
