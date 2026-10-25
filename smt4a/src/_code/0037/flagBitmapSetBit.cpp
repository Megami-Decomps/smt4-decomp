#include "common.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {

typedef struct BitFlags {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 bits[1];
} BitFlags;


/* Sets or clears bit `bit` of the flag bitmap at 0x48 of the FUN_0026140c block. */
void flagBitmapSetBit(u32 bit, s32 on)
{
    BitFlags *flags = reinterpret_cast<BitFlags *>(FUN_0026140c());
    if (on != 0) {
        flags->bits[bit >> 3] |= 1 << (bit & 7);
    } else {
        flags->bits[bit >> 3] &= ~(1 << (bit & 7));
    }
}

} /* extern "C" */
