#pragma once
#include "common.h"

/* Functions in the 0x00280000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u8 FUN_002857dc(void);

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */

u32 FUN_002865c0(u32 kind, f32 value);

u32 FUN_00287800(void);

int FUN_00288ddc(int limit, u32 id);

void FUN_0028f694(s32 x, s32 y, u32 region);

u16 FUN_0028fb40(s32 id);

} /* extern "C" */
