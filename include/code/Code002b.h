#pragma once
#include "common.h"

/* Functions in the 0x002b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u32 FUN_002b6480(u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

u32 FUN_002b6ad0(void);

void FUN_002b7638(u32 first, u32 second, u32 third, f32 value0, f32 value1, f32 value2, f32 value3, u32 fourth, f32 value4);

void FUN_002b76d0(u32 first, u32 second, u32 third, f32 value0, f32 value1, f32 value2, f32 value3, u32 fourth, f32 value4);

void FUN_002b945c(s32 id);

s8 FUN_002b950c(void);

void kernelThreadJoinAndClose(void *thread);

/* Whether the word at 0x04 of `obj` is non-zero. */
u8 FUN_002bf684(const void *obj);

u32 FUN_002bffe0(s32*x, s32*y, s32 mode);

} /* extern "C" */
