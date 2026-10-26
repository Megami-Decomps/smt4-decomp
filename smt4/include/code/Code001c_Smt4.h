#pragma once
#include "common.h"

/* Functions in the 0x001c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct UniteEntryList;
extern "C" {

s32 FUN_001c0954(u64 key);

void FUN_001c08ec(f32 x, f32 y, f32 z, f32 w, f32 value);

s32 FUN_001c36a0(void);

s32 FUN_001ce224(UniteEntryList *list);

} /* extern "C" */
