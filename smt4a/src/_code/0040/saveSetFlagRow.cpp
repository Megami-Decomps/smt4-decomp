#include "code/Code002c.h"
#include "util/BitsAndBytes.h"

extern "C" {

extern s32 gameFlagIsSet(s32 id);

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

} /* extern "C" */
