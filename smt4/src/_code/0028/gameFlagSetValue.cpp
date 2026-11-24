/* NON_MATCHING: retail computes the bit mask before the byte index, using r1 for both in turn; the build takes the index first and uses r2 for the bit shift. */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {
u8 *gameGetFlagBlock(void);
void FUN_0023ddbc(u32, s32);

/* Updates a game flag, optionally notifying the flag-change handler first. */
void gameFlagSetValue(u32 id, s32 value, s32 notify)
{
    u8 *flags = gameGetFlagBlock();
    if (notify != 0)
        FUN_0023ddbc(id, value);
    flagBitWrite(flags, id, value);
}
}
