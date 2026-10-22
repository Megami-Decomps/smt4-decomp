#include "common.h"

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 kind, u32 bytes, u32 flags);

// Allocate from the flag-selected heap, optionally suppressing the allocator's default flag.
void *FUN_00163318(u32 bytes, u32 flags)
{
    if (flags & 1) {
        if (flags & 2)
            return asdMemoryAlloc(0x10000, 0x100, 0, bytes, 0);
        return asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1);
    }
    if (flags & 2)
        return asdMemoryAlloc(0x100, 0x100, 0, bytes, 0);
    return asdMemoryAlloc(0x100, 0x100, 0, bytes, 1);
}
}
