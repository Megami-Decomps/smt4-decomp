/* NON_MATCHING: retail clears the pair through r2, but this readable reset uses r1. */
#include "common.h"

struct PairState {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
};

/* Clears both state values. */
extern "C" void FUN_003494f0(PairState *state)
{
    state->first = 0;
    state->second = 0;
}
