#include "common.h"

extern "C" {

typedef struct Global57f560 {
    /* 0x00 */ s8 value;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 marker;
} Global57f560;
extern Global57f560 DAT_0057f560;

/* Returns the signed byte at 0x57F560 when the word at 0x57F564 is negative, otherwise 0. */
s32 FUN_00162ea4(void)
{
    s32 result;

    if (DAT_0057f560.marker < 0) {
        result = DAT_0057f560.value;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
