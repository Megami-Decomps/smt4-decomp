/* NON_MATCHING: Flag clearing uses equivalent AND masks rather than the retail BIC sequence. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
GameFlagBlockPrefixIV *gameGetFlagBlock(void);
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
            if (gameGetFlagBlock()->selectedEntryIndex != entryIndex) {
                activeEntry->flags &= 0xf9u;
            } else {
                activeEntry->flags &= 0xb9u;
                gameGetFlagBlock()->selectedEntryIndex = 0;
                for (u32 flagIndex = 0x500; flagIndex < 0x520; ++flagIndex) {
                    GameFlagBlockPrefixIV *block = gameGetFlagBlock();
                    FUN_0023ddbc(flagIndex, 0);
                    block->packedFlags[flagIndex >> 3] &=
                        static_cast<u8>(~(1u << (flagIndex & 7u)));
                }
            }
        }
    }

    entry->value = 0;
    entry->secondaryFlags &= 0xfau;
    entry->flags &= 0x1cu;
    return 1;
}
