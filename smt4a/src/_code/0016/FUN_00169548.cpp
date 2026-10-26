/* NON_MATCHING: only register assignment differs: retail forms the tail pointer (add r2, r1, #1280) before the enabled store and keeps the zero in r3. */
#include "common.h"

struct ButtonHelpTail {
    u8 unk00[0xD4];      // 0x00
    u32 counter;         // 0xD4
    u16 timer;           // 0xD8
    u8 resetState[9];    // 0xDA
    u8 enabled;          // 0xE3
};

struct ButtonHelpState {
    u8 unk00[0x500];      // 0x000
    ButtonHelpTail tail;  // 0x500
};

struct ButtonHelpGlobal {
    u32 unk00;              // 0x00
    ButtonHelpState* state;  // 0x04
};

extern "C" {
extern ButtonHelpGlobal g_buttonHelp;
void FUN_001a90e0(u8* state);

void FUN_00169548(s32 enabled)
{
    ButtonHelpState* state = g_buttonHelp.state;
    ButtonHelpTail* tail = &state->tail;
    state->tail.enabled = (u8)enabled;
    if (enabled != 0) {
        state->tail.counter = 0;
        tail->timer = 0;
        FUN_001a90e0(state->tail.resetState);
    }
}
}
