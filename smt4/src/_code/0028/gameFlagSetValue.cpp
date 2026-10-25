/* NON_MATCHING: instruction sequence matches; only the saved registers differ (retail: value r5, flag block r7; built swaps them). */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {
u8 *gameGetFlagBlock(void);
void FUN_0023ddbc(u32, s32);

// Update a game flag, optionally notifying the flag-change handler first.
void gameFlagSetValue(u32 id, s32 value, s32 notify)
{
    u8 *flags = gameGetFlagBlock();
    if (notify != 0)
        FUN_0023ddbc(id, value);
    u32 mask = 1u << (id & 7);
    u32 index = id >> 3;
    u32 previous = flags[index];
    flags[index] = value != 0 ? mask | previous : previous & ~mask;
}
}
