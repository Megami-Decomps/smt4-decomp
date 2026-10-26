#pragma once
#include "common.h"

/* Functions in the 0x00510000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ShiftRandomState;
extern "C" {

f32 shiftRandomNextFraction(ShiftRandomState* state);

} /* extern "C" */
