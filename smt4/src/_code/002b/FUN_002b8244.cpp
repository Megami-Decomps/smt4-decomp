/* NON_MATCHING: retail forms state+0x400 once for the timer store (add r2,r1,#1024; strh [r2,#188]) and keeps zero in r3; the build addresses the timer through a pool-literal offset register. */
#include "common.h"

namespace {
struct ButtonHelpState {
    u8 unk000[0x4B8];
    u32 counter;        // 0x4B8
    u16 timer;          // 0x4BC
    u8 resetState[9];   // 0x4BE
    u8 enabled;         // 0x4C7
};
struct ButtonHelpGlobal { u32 unk00; ButtonHelpState *state; };
}

extern "C" {
extern ButtonHelpGlobal g_buttonHelp;
void FUN_002ae028(u8 *state);
void FUN_002b8244(s32 enabled)
{
    ButtonHelpState *state = g_buttonHelp.state;
    state->enabled = (u8)enabled;
    if (enabled != 0) {
        state->counter = 0;
        state->timer = 0;
        FUN_002ae028(state->resetState);
    }
}
}
