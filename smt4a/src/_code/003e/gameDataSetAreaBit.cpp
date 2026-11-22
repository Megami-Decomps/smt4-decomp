#include "common.h"

extern "C" {

u8 *gameDataBlockGetArea28350(void);

/* Sets or clears bit `index` of the area block's first bitset. */
void gameDataSetAreaBit(u32 index, s32 enabled)
{
    u8 *flags = gameDataBlockGetArea28350();
    s32 byte = index / 8;
    s32 bit = index % 8;
    u8 *flag = &flags[byte];

    if (enabled != 0) {
        *flag |= 1 << bit;
    } else {
        *flag &= ~(1 << bit);
    }
}

} /* extern "C" */
