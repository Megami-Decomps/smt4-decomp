#pragma once
#include "common.h"

/* Functions in the 0x00220000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u32 FUN_0022a030(s32 slot, u32 skill);

void FUN_00227af0(const char *text);

u8 FUN_0022e750(void);

} /* extern "C" */
