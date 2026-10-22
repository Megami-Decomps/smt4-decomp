/* NON_MATCHING: compiler collapses retail's individual status-bit tests into constant mask operations. */
#include "common.h"

struct ResourceStatusKind { u8 unk00[0x3a]; u8 kind; };

// Filter the requested status bits according to the active resource kind.
extern "C" u32 FUN_003d2b2c(const ResourceStatusKind *resource, u32 mask)
{
    if (!(resource->kind & 0x7f) || !mask)
        return 0;
    u32 kind = resource->kind & 0x7f;
    switch (kind) {
    case 23: return mask & 0x80;
    case 22: case 31: return mask & 0x39e0;
    case 24: return (u16)mask;
    case 28: return mask & 0x3bc0;
    default: return (u16)(mask & (1u << kind));
    }
}
