#pragma once
#include "common.h"

/* Functions in the 0x00260000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

int FUN_002613f0(int index);

s32 FUN_002621b4(u32 user, s32 target, u32 id, s32 *result);

void *FUN_00267144(u32 index);

void FUN_0026d654(u8 value);

void FUN_0026f188(int mode, u32 arg);

} /* extern "C" */
