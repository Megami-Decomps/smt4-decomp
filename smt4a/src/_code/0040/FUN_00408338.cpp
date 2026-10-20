/* NON_MATCHING: register allocation only: retail keeps `bit` in r6 and the save base in r5 (built the other way round) */
/* Sets or clears flag `bit` (0-63) of `group` in the save data, unless the 0x4F/0x41 conditions block it. */
#include "common.h"

extern "C" {

extern s32 gameFlagIsSet(s32 id);
extern u8 *FUN_002c2710(void);

void FUN_00408338(s32 group, u32 bit, s32 value)
{
    u8 *base = FUN_002c2710();

    if (gameFlagIsSet(0x4F) == 0 || gameFlagIsSet(0x41) != 0) {
        u8 *flags;
        u8 mask;

        if (group > 0xBF) {
            flags = base + group * 8 + 0x2F0;
        } else {
            flags = base + group * 8 + 0xCF0;
        }
        flags += bit >> 3;
        mask = 1 << (bit & 7);
        if (value != 0) {
            *flags |= mask;
        } else {
            *flags &= ~mask;
        }
    }
}

}
