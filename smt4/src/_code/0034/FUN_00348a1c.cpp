/* NON_MATCHING: flag clearing now uses the retail BIC forms (complement masks); remaining: retail pushes r4-sl hoisting two separate zero registers and the 1 for the flag-clear loop, and shares the `return 1` tail with the flag-4 test (no predicated movne). */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/gameGetFlagBlock.h"

extern "C" {
s32 FUN_0023ddbc(u32 flagIndex, s32 value);
}

extern "C" u32 FUN_00348a1c(u32 entryIndex)
{
    // The stride is known, but neither the entry count nor its valid range is.
    GameFlagEntryIV *entry = reinterpret_cast<GameFlagEntryIV *>(
        reinterpret_cast<u8 *>(gameGetFlagBlock()) + entryIndex * 4u + 0x200u);
    const u8 flags = entry->flags;
    if ((flags & 1u) == 0)
        return 0;
    if ((flags & 4u) != 0)
        return 1;

    if ((flags & 2u) != 0) {
        GameFlagEntryIV *activeEntry = reinterpret_cast<GameFlagEntryIV *>(
            reinterpret_cast<u8 *>(gameGetFlagBlock()) + entryIndex * 4u + 0x200u);
        if ((activeEntry->flags & 2u) != 0) {
            if (reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock())->selectedEntryIndex != entryIndex) {
                activeEntry->flags &= ~0x6u;
            } else {
                activeEntry->flags &= ~0x6u;
                activeEntry->flags &= ~0x40u;
                reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock())->selectedEntryIndex = 0;
                for (u32 flagIndex = 0x500; flagIndex < 0x520; ++flagIndex) {
                    GameFlagBlockPrefixIV *block = reinterpret_cast<GameFlagBlockPrefixIV *>(gameGetFlagBlock());
                    FUN_0023ddbc(flagIndex, 0);
                    block->packedFlags[flagIndex >> 3] &= ~(1u << (flagIndex & 7u));
                }
            }
        }
    }

    entry->value = 0;
    entry->secondaryFlags &= ~0x5u;
    entry->flags &= ~0xE3u;
    return 1;
}
