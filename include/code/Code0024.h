#pragma once
#include "common.h"

/* Functions in the 0x00240000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u8 FUN_00241990(void);

void btlUiObjCSetActive(void *block, u8 value);

void FUN_002454c4(void *obj, u32 b, u32 a, int flag);

void frameTexSetZanEnabled(u8 value);

void frameTexSetHdrEnabled(u8 value);

} /* extern "C" */
