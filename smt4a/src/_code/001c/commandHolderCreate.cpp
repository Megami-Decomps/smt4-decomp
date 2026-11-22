/* NON_MATCHING: readable rewrite of the command-holder creator (line buffers from one allocator, the 0x860-byte holder from the other through its class operator new, two VRAM lines with their physical offsets, then the holder's own buffers carved from its storage). Retail keeps the holder size (0x860) and count * 2 in saved registers, clears the sixteen entries with an up-counting loop and the header pairs after them, and walks the storage buffers with a loop it does not unroll. */
#include "common.h"
#include "classes/AsdAllocatorObject.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantA.h"

extern "C" {
extern u8 g_ifaceHolderVtable;
u32 vramAreaGetBaseAddress(u32 area);
}

/* unit-local: the holder commandHolderCreate builds; only this creator and its destroy hook read it. */
struct CommandHolderEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 address[2];
    /* 0x14 */ u32 size[2];
};

struct CommandHolder {
    static void *operator new(u32 bytes, AsdAllocatorObject *allocator) throw()
    {
        return allocator->allocate(bytes, 32);
    }

    CommandHolder(const u32 *resource, s32 count, AsdAllocatorObject *allocator, AsdAllocatorObject *bufferAllocator, u32 buffer)
        : vtable(&g_ifaceHolderVtable), allocator(allocator), resource(resource), count(count), unk30(0), unk34(0),
          bufferAllocator(bufferAllocator), buffer(buffer)
    {
        for (s32 i = 0; i < 16; i++) {
            entries[i].address[0] = 0;
            entries[i].size[0] = 0;
            entries[i].address[1] = 0;
            entries[i].size[1] = 0;
        }
        lines[0] = 0;
        lines[1] = 0;
        lineOffsets[0] = 0;
        lineOffsets[1] = 0;
        for (s32 i = 0; i < 2; i++) {
            bufferAddress[i] = 0;
            bufferSize[i] = 0;
        }
        commandAddress = 0;
        commandSize = 0;
        extraAddress = 0;
        extraSize = 0;
    }

    /* 0x000 */ const void *vtable;
    /* 0x004 */ AsdAllocatorObject *allocator;
    /* 0x008 */ const u32 *resource;
    /* 0x00C */ u32 bufferAddress[2];
    /* 0x014 */ u32 bufferSize[2];
    /* 0x01C */ u32 commandAddress;
    /* 0x020 */ u32 commandSize;
    /* 0x024 */ u32 extraAddress;
    /* 0x028 */ u32 extraSize;
    /* 0x02C */ s32 count;
    /* 0x030 */ u8 unk30;
    /* 0x034 */ u32 unk34;
    /* 0x038 */ CommandHolderEntry entries[16];
    /* 0x1F8 */ u32 lines[2];
    /* 0x200 */ u32 lineOffsets[2];
    /* 0x208 */ AsdAllocatorObject *bufferAllocator;
    /* 0x20C */ u32 buffer;
    /* 0x210 */ u8 storage[0x650];
};

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
        u32 vramBase = asdGxGetPhysicalAddress(vramAreaGetBaseAddress(0x20000));
        holder->lineOffsets[i] = asdGxGetPhysicalAddress(holder->lines[i]) - vramBase;
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
