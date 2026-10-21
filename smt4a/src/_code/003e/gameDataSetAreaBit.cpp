/* NON_MATCHING: retail uses `ldrb r2, [r0, r4, lsr #3]!` where armcc emits `and r2, r4, #7`. */
#include "common.h"

extern "C" {

u8 *gameDataBlockGetArea28350(void);

void gameDataSetAreaBit(u32 index, s32 enabled)
{
    u8 *byte = &gameDataBlockGetArea28350()[index >> 3];
    u32 bit = 1u << (index & 7);
    if (enabled != 0) {
        *byte |= bit;
    } else {
        *byte &= ~bit;
    }
}

} /* extern "C" */
