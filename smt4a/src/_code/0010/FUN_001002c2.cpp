/* NON_MATCHING: matches retail with `--cpu=5TE -Ospace` except that retail's function starts 2 bytes past a word boundary, so its literal pool needs no alignment pad (built has `movs r0, r0` and the pool loads read 4 bytes further) */
#include "common.h"

extern "C" {

/* True for the Unicode white-space characters (TAB..CR, space, NBSP, the U+2000 block, line/paragraph
 * separators, narrow NBSP, medium mathematical space, ideographic space). */
u32 FUN_001002c2(s32 c)
{
    if ((u32)(c - 9) <= 4 || c == 0x20 || c == 0xa0 || c == 0x1680 || c == 0x180e
        || (u32)(c - 0x2000) <= 10 || c == 0x2028 || c == 0x2029 || c == 0x202f || c == 0x205f
        || c == 0x3000) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
