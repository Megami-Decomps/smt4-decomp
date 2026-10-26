#pragma once
#include "common.h"

/* Functions in the 0x002a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u8 FUN_002a21e8(void);

void FUN_002a46d0(void);

/* Runs the operation of a tagged selection object (tag 1: its embedded operation). */
s32 FUN_002a482c(const void *object);

s32 FUN_002a4878(void *object);

u32 FUN_002a7410(void);

int FUN_002ae8e4(u32 a, u32 file, u32 id, u32 value);

} /* extern "C" */
