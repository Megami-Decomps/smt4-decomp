/* NON_MATCHING: store scheduling only: retail stores 13 then 0 and uses a writeback `str [r1,#468]!` for the last store */
/* Resets the FUN_00162e8c state and starts mode 13 with the scrGetArg value as its argument; always returns 1. */
#include "common.h"

extern "C" {

typedef struct State {
    /* 0x000 */ u8 unk000[0x1D0];
    /* 0x1D0 */ u32 mode;
    /* 0x1D4 */ u32 modeStep;
    /* 0x1D8 */ u8 unk1D8[0x50];
    /* 0x228 */ u32 value;
    /* 0x22C */ u8 unk22C[0x0C];
    /* 0x238 */ u32 value2;
} State;

extern State *g_lmapScene;

extern void FUN_00162e8c(void);
extern u32 scrGetArg(u32 arg);

s32 FUN_0035cfd4(void)
{
    State *state;
    u32 value;

    FUN_00162e8c();
    value = scrGetArg(0);
    state = g_lmapScene;
    state->value = value;
    state->mode = 13;
    state->modeStep = 0;
    state->value2 = value;
    return 1;
}

}
