#pragma once
#include "common.h"

/* Random (declarations migrated from callers). */
struct RandomState;
extern "C" {

u32 randomGetUpperSixBits(u32 first,u32 second);

void randomStateSeed(RandomState *state, u32 seed);

} /* extern "C" */
