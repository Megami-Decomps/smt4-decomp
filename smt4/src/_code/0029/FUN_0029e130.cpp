#include "common.h"

extern "C" {

typedef struct UseCounterState {
    /* 0x000 */ u8 unk000[0x74C];
    /* 0x74C */ u8 active;
    /* 0x74D */ u8 unk74D[0xB];
    /* 0x758 */ u8 values[0x30];
    /* 0x788 */ u8 cursor[1];
} UseCounterState;

typedef struct UseCounterGlobal {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ UseCounterState *state;
} UseCounterGlobal;

extern UseCounterGlobal g_useCounter;

s32 FUN_0029efc0(void *cursor);
s32 FUN_0029efa8(void *cursor);

/* Returns the current value for the cursor (indexed by the sum of FUN_0029efc0 and FUN_0029efa8), or 75 when inactive. */
u8 FUN_0029e130(void)
{
    UseCounterState *state = g_useCounter.state;
    u8 value = 75;

    if (state->active != 0) {
        value = state->values[FUN_0029efc0(state->cursor) + FUN_0029efa8(state->cursor)];
    }
    return value;
}

} /* extern "C" */
