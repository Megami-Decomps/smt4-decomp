#include "common.h"

extern "C" {

extern s32 FUN_00180998(u32 handle, u32 mode, u32 value, f32 x, f32 y, f32 z, f32 w);

/* Sends mode eighteen with cleared vector parameters. */
s32 FUN_001696d4(u32 handle, u32 value)
{
    return FUN_00180998(handle, 18, value, 0.0f, 0.0f, 0.0f, 0.0f);
}

} /* extern "C" */
