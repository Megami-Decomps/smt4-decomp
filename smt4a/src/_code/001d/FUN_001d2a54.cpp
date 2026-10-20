#include "common.h"

extern "C" {

typedef struct Global5894e4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 value;
} Global5894e4;
extern Global5894e4 DAT_005894e4;

/* Returns the signed byte at 0x4 of the global at 0x5894E4. */
s32 FUN_001d2a54(void)
{
    return DAT_005894e4.value;
}

} /* extern "C" */
