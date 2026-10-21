/* NON_MATCHING: retail clears the upper halfword with shifts and uses r2 for zero; this version uses an AND and r1. */
#include "common.h"

struct CallbackState {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 flags : 10;
    /* 0x02 */ u16 otherFlags : 6;
};

/* Clears the callback value and its ten low flag bits. */
extern "C" void FUN_003a0740(CallbackState *state)
{
    state->value = 0;
    state->flags = 0;
}
