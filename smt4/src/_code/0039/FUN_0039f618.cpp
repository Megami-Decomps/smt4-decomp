#include "common.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 flagBitIsSet(u32 bit);

/* Returns flag bit 0x76 when game flag 0x400 is set, else 0. */
s32 FUN_0039f618(void)
{
    if (gameFlagIsSet(0x400) != 0) {
        return flagBitIsSet(0x76);
    }
    return 0;
}
}
