/* NON_MATCHING: The native switch predicates mask writes and merges store/return blocks differently. */
#include "common.h"

extern "C" void FUN_003ff524(u16* flags, s32 kind)
{
    u16 previous = *flags;
    switch (kind) {
    case 22: *flags = previous | 0x3BE0; return;
    case 24: *flags = previous | 0x3FE2; return;
    case 27: *flags = previous | 0x3BE2; return;
    case 28: *flags = previous | 0x39C0; return;
    case 31: *flags = previous | 0x0220; return;
    case 37: *flags = previous | 0x3BEA; return;
    default: *flags = previous | (1u << kind); return;
    }
}
