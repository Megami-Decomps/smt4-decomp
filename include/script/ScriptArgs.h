#pragma once
#include "common.h"

extern "C" {

/* Script argument `index` (0 = most recently pushed) as an int. */
s32 scrGetArg(s32 index);

/* Stores the script command's result and clears the waiting flag. */
void scrSetResult(s32 result);

} /* extern "C" */

