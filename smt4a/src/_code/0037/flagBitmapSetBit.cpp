#include "common.h"

extern "C" {

typedef struct BitFlags {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 bits[1];
} BitFlags;

extern BitFlags *FUN_0026140c(void);

/* Sets or clears bit `bit` of the flag bitmap at 0x48 of the FUN_0026140c block. */
void flagBitmapSetBit(u32 bit, s32 on)
{
    BitFlags *flags = FUN_0026140c();
    if (on != 0) {
        flags->bits[bit >> 3] |= 1 << (bit & 7);
    } else {
        flags->bits[bit >> 3] &= ~(1 << (bit & 7));
    }
}

} /* extern "C" */
