#pragma once
#include "common.h"

/* Functions in the 0x00290000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Whether data table 0x4C's record `index` has a zero halfword at 0xA. */
u8 FUN_00297008(u32 index);

} /* extern "C" */
