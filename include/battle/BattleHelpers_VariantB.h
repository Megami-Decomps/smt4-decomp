#pragma once
#include "common.h"

/* Battle unit, entry and script helpers. */
struct BtlMainStateA;
extern "C" {

/* Whether the current script unit has flag 0x80 or 0x1000. The callers pass the battle state, which the
 * function itself does not read. */
s32 btlScriptUnitHasFlags(const BtlMainStateA *state);

} /* extern "C" */
