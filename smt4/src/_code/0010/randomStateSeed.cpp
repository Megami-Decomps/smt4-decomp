#include "common.h"

extern "C" {

typedef struct RandomState {
    /* 0x0 */ u32 word[4];
} RandomState;

extern RandomState DAT_004d9748;

/* Seeds a 4-word random state (the default state when `state` is NULL) by xoring in constants and rotating right by 8. */
void randomStateSeed(RandomState *state, u32 seed)
{
    u32 x;

    if (state == NULL) {
        state = &DAT_004d9748;
    }
    x = seed ^ 0x0AED1A0C;
    state->word[0] = x;
    x = (x >> 8) | (x << 24);
    state->word[1] = x;
    x ^= 0xAA5A02FE;
    x = (x >> 8) | (x << 24);
    state->word[2] = x;
    x ^= 0x11BE81C7;
    x = (x >> 8) | (x << 24);
    state->word[3] = x;
}

} /* extern "C" */
