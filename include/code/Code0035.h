#pragma once
#include "common.h"

/* Functions in the 0x00350000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Apocalypse: draw the message associated with the selected table-0C record. */
void FUN_0035bd4c(u16 id, u32 x, u32 y, u32 style);

void FUN_00359974(s32 index, u32 a, u32 b, u32 c);

} /* extern "C" */
