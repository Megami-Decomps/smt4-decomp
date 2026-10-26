#pragma once
#include "common.h"

/* Functions in the 0x003f0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void FUN_003f39ac(u8 value);

void FUN_003f5b14(void *owner, s32 y, u32 color, s32 firstX, s32 secondX, f32 alpha);

u32 FUN_003f9ab0(u32 value);

u32 FUN_003fdadc(void *obj);

} /* extern "C" */
