#include "gamedata/IndexedFlags.h"

extern "C" {
IndexedFlags *FUN_002c2710(void);

/* Sets or clears bit `bit` of a byte-packed bit array. */
static __inline void bitArrayWrite(u8 *bits, u32 bit, s32 set)
{
    u8 *byte = &bits[bit >> 3];
    u8 mask = 1 << (bit & 7);
    if (set != 0) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}

/* Sets or clears flag `flag` of owner `owner` (< 100); setting also marks the owner enabled. */
void FUN_00408274(u32 owner, u32 flag, s32 enabled)
{
    if (owner >= 110) {
        return;
    }
    if ((s32)owner >= 100 || (s32)flag > 100) {
        return;
    }
    bitArrayWrite(FUN_002c2710()->flags + owner * 4, flag, enabled);
    if (enabled != 0) {
        bitArrayWrite(FUN_002c2710()->enabled, owner, 1);
    }
}
}
