#pragma once
#include "common.h"

extern "C" {

/* Selects the four-entry range (start 0, 55, 59 or 63) for `kind`. */
void FUN_00301a08(s32 kind, s32 *first, s32 *count);

/* The same range selection in smt4. */
void FUN_002499fc(s32 kind, s32 *first, s32 *count);

} /* extern "C" */
