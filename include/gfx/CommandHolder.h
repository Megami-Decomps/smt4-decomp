#ifndef GFX_COMMANDHOLDER_H
#define GFX_COMMANDHOLDER_H

#include "common.h"
#include "classes/AsdAllocatorObject.h"
#include <stddef.h>

extern "C" u8 g_ifaceHolderVtable;

/* One attribute in a command holder, with two upload addresses and sizes. */
struct CommandHolderEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 componentCount;
    /* 0x09 */ u8 active;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 address[2];
    /* 0x14 */ u32 size[2];
};

/* The command buffers and attribute uploads for a double-buffered model. */
struct CommandHolder {
    static void *operator new(u32 bytes, AsdAllocatorObject *allocator) throw()
    {
        return allocator->allocate(bytes, 32);
    }

    CommandHolder(const u32 *resource, s32 count, AsdAllocatorObject *allocator, AsdAllocatorObject *bufferAllocator, u32 buffer)
        : vtable(&g_ifaceHolderVtable), allocator(allocator), resource(resource), count(count), bufferIndex(0), entryCount(0),
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
    /* 0x030 */ u8 bufferIndex;
    /* 0x034 */ s32 entryCount;
    /* 0x038 */ CommandHolderEntry entries[16];
    /* 0x1F8 */ u32 lines[2];
    /* 0x200 */ u32 lineOffsets[2];
    /* 0x208 */ AsdAllocatorObject *bufferAllocator;
    /* 0x20C */ u32 buffer;
    /* 0x210 */ u8 storage[0x650];
};

typedef char CommandHolderLayoutCheck[
    sizeof(CommandHolderEntry) == 0x1C && offsetof(CommandHolderEntry, componentCount) == 8 &&
    offsetof(CommandHolderEntry, address) == 0xC && offsetof(CommandHolder, entries) == 0x38 &&
    offsetof(CommandHolder, lines) == 0x1F8 && sizeof(CommandHolder) == 0x860 ? 1 : -1];

#endif
