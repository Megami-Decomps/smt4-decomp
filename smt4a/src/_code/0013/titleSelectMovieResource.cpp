#include "common.h"

extern "C" {
extern u32 DAT_005880c0[];
s32 mobiclipRestoreDisplayState(u32 value);

void titleSelectMovieResource(s32 index)
{
    mobiclipRestoreDisplayState(DAT_005880c0[index] & 0xffu);
}
}
