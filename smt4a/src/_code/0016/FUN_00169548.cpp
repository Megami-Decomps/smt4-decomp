/* NON_MATCHING: only the zero register differs (retail keeps it in r3 and schedules the stores around the resetState address; built uses r0). */
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
    ButtonHelpTail* tail = &g_buttonHelp.state->tail;
    g_buttonHelp.state->tail.enabled = (u8)enabled;
    if (enabled != 0) {
        g_buttonHelp.state->tail.counter = 0;
        tail->timer = 0;
        FUN_001a90e0(g_buttonHelp.state->tail.resetState);
    }
}
}
