/* NON_MATCHING: compiler uses different saved registers and folds the byte index into scaled memory accesses. */
#include "common.h"

extern "C" {
u8 *gameFlagBlockGet(void);
void FUN_004bb6d8(u32, s32);

// Update a game flag, optionally notifying the flag-change handler first.
void gameFlagSetValue(u32 id, s32 value, s32 notify)
{
    u8 *flags = gameFlagBlockGet();
    if (notify != 0)
        FUN_004bb6d8(id, value);
    u32 mask = 1u << (id & 7);
    u32 previous = flags[id >> 3];
    flags[id >> 3] = value != 0 ? mask | previous : previous & ~mask;
}
}
