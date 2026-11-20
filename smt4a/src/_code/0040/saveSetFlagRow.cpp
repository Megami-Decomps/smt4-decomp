#include "common.h"

extern "C" {

extern s32 gameFlagIsSet(s32 id);
extern u8 *saveGetFlagRowTable(void);

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

/* Sets or clears flag `bit` (0-63) of `group` in the save data, unless the 0x4F/0x41 conditions block it. */
void saveSetFlagRow(s32 group, u32 bit, s32 value)
{
    u8 *base = saveGetFlagRowTable();

    if (gameFlagIsSet(0x4F) == 0 || gameFlagIsSet(0x41) != 0) {
        u8 *flags;

        if (group > 0xBF) {
            flags = base + group * 8 + 0x2F0;
        } else {
            flags = base + group * 8 + 0xCF0;
        }
        bitArrayWrite(flags, bit, value);
    }
}

}
