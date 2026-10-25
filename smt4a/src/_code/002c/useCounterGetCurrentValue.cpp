#include "common.h"

extern "C" {

typedef struct UseSub {
    /* 0x00 */ u8 unk00[1];
} UseSub;

typedef struct UseState {
    /* 0x000 */ u8 unk000[0x74c];
    /* 0x74c */ u8 active;
    /* 0x74d */ u8 unk74d[0xb];
    /* 0x758 */ u8 values[0x30];
    /* 0x788 */ UseSub sub;
} UseState;

typedef struct UseCounter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ UseState *state;
} UseCounter;

extern UseCounter g_useCounter;

s32 resourceRunOperationIfUnblocked(UseSub *sub);
s32 FUN_002a4894(UseSub *sub);

/* The current use-counter value byte (105 while the state is inactive). */
u8 useCounterGetCurrentValue(void)
{
    UseState *state = g_useCounter.state;
    u8 value = 105;

    if (state->active != 0) {
        value = state->values[resourceRunOperationIfUnblocked(&state->sub) + FUN_002a4894(&state->sub)];
    }
    return value;
}

} /* extern "C" */
