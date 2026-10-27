#include "common.h"

struct CallbackState {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 flagBits; /* bits 0-9: flags, bits 10-15: otherFlags */
};

/* Clears the callback value and its ten low flag bits. */
extern "C" void callbackStateClear(CallbackState *state)
{
    state->value = 0;
    u32 bits = state->flagBits;
    bits >>= 10;
    bits <<= 10;
    state->flagBits = bits;
}
