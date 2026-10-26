#pragma once
#include "common.h"

/* Functions in the 0x00370000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void *FUN_00370ecc(u16 id);

void *FUN_003799d0(u32 index);

void FUN_0037d6e4(u8 value);

void FUN_0037e09c(u8 value);

void FUN_0037eb64(u32 mode, s32 x, s32 y, f32 speed);

} /* extern "C" */
