/* NON_MATCHING: Retail mov r6, #1 differs from recovered mov r1, #1. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

// Reports whether any eligible battle entry has the script-selected bit set.
u32 FUN_002f0304(void)
{
    const u32 mask = 1u << scrGetArg(0);

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        const BtlEntry* entry =
            &btlGetMainState()->entries[entryIndex];
        const u32 flags = entry->flags;

        if ((flags & 0x10) != 0 &&
            (flags & 0x01) != 0 &&
            (flags & 0x40) == 0 &&
            (entry->groupMask & mask) != 0) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}
}
