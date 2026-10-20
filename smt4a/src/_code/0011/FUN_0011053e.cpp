#include "common.h"

extern "C" {

void FUN_00110528(u32 a, u32 b);
void FUN_002fb2d0(u32 a, s32 count, s32 size, u32 b);

/* Calls FUN_002fb2d0 with (1, 0x400), then FUN_00110528, on the same two arguments. */
void FUN_0011053e(u32 a, u32 b)
{
    FUN_002fb2d0(a, 1, 0x400, b);
    FUN_00110528(a, b);
}

} /* extern "C" */
