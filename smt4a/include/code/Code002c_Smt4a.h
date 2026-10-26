#pragma once
#include "common.h"

/* Functions in the 0x002c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object;
extern "C" {

u8 FUN_002c7cb4(void);

s32 FUN_002c2758(u32 index);

s32 objectApplyIfUnblocked(Object *object);

void FUN_002cc96c(Object *object);

} /* extern "C" */
