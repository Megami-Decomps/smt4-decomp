#pragma once
#include "common.h"

/* Functions in the 0x00270000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Finds the populated slot (of 42 at 0x2134) whose entry has the requested id. */
void *FUN_0027d9e8(const void *slots, s32 id);

u32 FUN_0027db08(int which);

u32 FUN_0027e3b8(int *obj);

} /* extern "C" */
