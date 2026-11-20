#pragma once
#include "common.h"

/* Functions in the 0x003e0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

s32 FUN_003e0024(void);

void saveSlotTableSetPreferredId(s32 value);

void FUN_003e7840(void);

u32 FUN_003ecd94(u8 *owner);

void btlSlotManagerResetStates(void *manager);

} /* extern "C" */
