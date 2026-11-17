#include "common.h"

extern "C" {

typedef struct SoundGlobalByte {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 active;
} SoundGlobalByte;
extern SoundGlobalByte DAT_005891b0;

/* Returns the signed byte at 0x2 of the global at 0x5891B0. */
s32 FUN_00170404(void)
{
    return DAT_005891b0.unk02;
}

} /* extern "C" */
