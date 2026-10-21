#include "common.h"

extern "C" {
extern u32 DAT_005880c0[];
s32 FUN_0013f4c4(u32 value);

void titleSelectMovieResource(s32 index)
{
    FUN_0013f4c4(DAT_005880c0[index] & 0xffu);
}
}
