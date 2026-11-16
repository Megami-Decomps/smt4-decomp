/* NON_MATCHING: the flag-block and value registers now match; only the bit write swaps scratch registers (retail: mask r0, index r1). */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {
u8 *gameGetFlagBlock(void);
void FUN_0023ddbc(u32, s32);

/* Sets or clears the flag bit `id` in the flag block. */
static __inline void flagBitWrite(u8 *flags, u32 id, s32 value)
{
    u32 mask = 1u << (id & 7);
    u32 index = id >> 3;
    u32 previous = flags[index];
    flags[index] = value != 0 ? mask | previous : previous & ~mask;
}

// Update a game flag, optionally notifying the flag-change handler first.
void gameFlagSetValue(u32 id, s32 value, s32 notify)
{
    u8 *flags = gameGetFlagBlock();
    if (notify != 0)
        FUN_0023ddbc(id, value);
    flagBitWrite(flags, id, value);
}
}
