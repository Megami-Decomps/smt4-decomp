#include "common.h"

extern "C" {

f32 scriptReadStackValueAsFloat(u32 index);
s32 scrGetArg(u32 index);
void FUN_004fea44(s32 first, s32 second, s32 third, s32 fourth, f32 x, f32 y, s32 fifth, s32 flag, s32 sixth);

/* Script command: starts FUN_004fea44 with the two floats of arguments zero and one and the flag in argument two. */
s32 FUN_003b8798(void)
{
    f32 x = scriptReadStackValueAsFloat(0);
    f32 y = scriptReadStackValueAsFloat(1);
    s32 flag = scrGetArg(2) != 0;
    FUN_004fea44(0, 0, 7, 7, x, y, 0, flag, 1);
    return 1;
}

} /* extern "C" */
