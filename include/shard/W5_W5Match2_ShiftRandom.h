#ifndef SHARD_W5_W5MATCH2_SHIFTRANDOM_H
#define SHARD_W5_W5MATCH2_SHIFTRANDOM_H
#include "common.h"
struct ShiftRandomState { u32 first,second,third,fourth; };

/* The next value of the generator (the shared one when `state` is NULL), in [0, 1). */
extern "C" f32 shiftRandomNextFraction(ShiftRandomState *state);
#endif
