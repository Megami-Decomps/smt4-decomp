#pragma once
#include "common.h"

/* Functions in the 0x00190000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */

s32 FUN_0019acdc(s32 id, s32 flag);

u16 FUN_0019e52c(u32 key);

} /* extern "C" */
