/* NON_MATCHING: Retail mov r6, #1 differs from recovered mov r1, #1. */
#include "battle/BtlMainAccess.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 scrSetResult(s32 result);

// Reports whether any eligible battle entry has the script-selected bit set.
u32 FUN_002f0304(void)
{
    const u32 mask = 1u << scrGetArg(0);

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        const BtlUnitEntry* entry =
            &btlGetMainStateExt()->units[entryIndex];
        const u32 flags = entry->flags;

        if ((flags & 0x10) != 0 &&
            (flags & 0x01) != 0 &&
            (flags & 0x40) == 0 &&
            (entry->flagMask & mask) != 0) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}
}
