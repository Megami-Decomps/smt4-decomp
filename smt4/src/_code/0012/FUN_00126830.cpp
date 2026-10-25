#include "common.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

extern "C" {

extern s32 FUN_002b080c(u32 handle, u32 mode, u32 value, f32 x, f32 y, f32 z, f32 w);

/* Sends mode eighteen with cleared vector parameters. */
s32 FUN_00126830(u32 handle, u32 value)
{
    return FUN_002b080c(handle, 18, value, 0.0f, 0.0f, 0.0f, 0.0f);
}

} /* extern "C" */
