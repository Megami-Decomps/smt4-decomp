#pragma once
#include "common.h"

/* Functions in the 0x00240000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u8 FUN_00241990(void);

void FUN_00242914(void *block, u8 value);

void FUN_002454c4(void *obj, u32 b, u32 a, int flag);

void FUN_0024ac68(u8 value);

void FUN_0024ac7c(u8 value);

} /* extern "C" */
