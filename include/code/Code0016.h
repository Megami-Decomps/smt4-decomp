#pragma once
#include "common.h"

/* Functions in the 0x00160000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void FUN_00164034(u32 first, u32 second, u32 third, f32 value0, f32 value1, f32 value2, f32 value3, u32 fourth, f32 value4);

u32 FUN_00164b5c(u32 flags, u32 bank, u32 node, s32 x, s32 y, s32 depth);

u32 FUN_00168750(u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

} /* extern "C" */
