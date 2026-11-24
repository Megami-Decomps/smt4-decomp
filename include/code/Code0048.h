#pragma once
#include "common.h"

/* Functions in the 0x00480000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Returns the points stat item `id` adds (3 for the incenses, 1 or 20 for the 0x7a0 group); `slot` is unused. */
u32 itemGetStatGain(s32 id, s32 slot);

} /* extern "C" */
