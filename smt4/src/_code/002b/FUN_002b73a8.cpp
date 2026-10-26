#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"

// Selects the allocation arena and initialization policy from the request flags.
extern "C" void* FUN_002b73a8(u32 size, u32 flags)
{
    if (flags & 1) {
        if (flags & 2) {
            return asdMemAlloc(0x10000, 0x100, 0, size, 0);
        }
        return asdMemAlloc(0x10000, 0x100, 0, size, 1);
    }
    if (flags & 2) {
        return asdMemAlloc(0x100, 0x100, 0, size, 0);
    }
    return asdMemAlloc(0x100, 0x100, 0, size, 1);
}
