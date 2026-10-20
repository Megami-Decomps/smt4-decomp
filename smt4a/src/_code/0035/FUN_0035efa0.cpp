#include "common.h"

extern "C" {

typedef struct MainState {
    /* 0x0000 */ u8 unk0000[0x4C70];
    /* 0x4C70 */ s16 first;
    /* 0x4C72 */ s16 second;
} MainState;

MainState *btlGetMainState(void);
int scrSetResult(s32 value);

/* Script command: result is the larger of the battle state's two 16-bit values at 0x4C70 and 0x4C72. */
u32 FUN_0035efa0(void)
{
    s16 value = btlGetMainState()->first;
    MainState *state = btlGetMainState();

    if (value < state->second) {
        value = state->second;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
