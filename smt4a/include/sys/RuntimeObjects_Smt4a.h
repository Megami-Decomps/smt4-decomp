#pragma once
#include "common.h"

/* RuntimeObjects (declarations migrated from callers). */
struct Holder;
struct Pair;
extern "C" {

void pairSetHalves(Holder *object, u16 first, u16 second);

void pairSetSecondResetFirst(Pair *object, u32 second);

} /* extern "C" */
