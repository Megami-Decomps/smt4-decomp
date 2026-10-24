#include "common.h"

extern "C" {

f32 scriptReadStackValueAsFloat(s32 index);
s32 scrGetArg(s32 index);
void FUN_004fea44(f32 first, f32 second, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

/* Script command: reads two floats and a flag from the script stack and arguments and passes them on. */
u32 FUN_00373e40(void)
{
    f32 first = scriptReadStackValueAsFloat(0);
    f32 second = scriptReadStackValueAsFloat(1);
    FUN_004fea44(first, second, 0, 0, 7, 6, 0, scrGetArg(2) != 0, 0);
    return 1;
}

} /* extern "C" */
