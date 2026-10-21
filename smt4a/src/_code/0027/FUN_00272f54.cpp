/* NON_MATCHING: retail uses ldr r0, [pc, #40] where the compiled block uses ldr r0, [pc, #36]. */
#include "common.h"

struct ResetState {
    u32 unk00;       // 0x00
    u32 state;       // 0x04
    u32 counter;     // 0x08
};

struct ResetGlobals {
    u8 unk00[0xC8];  // 0x00
    u16 counter;     // 0xC8
    u8 unkCA[3];     // 0xCA
    u8 flag;         // 0xCD
};

extern "C" {
extern ResetState* g_mapEnemy;
extern ResetGlobals DAT_005f16fc;

void FUN_00272f54(void)
{
    ResetState* state = g_mapEnemy;
    state->state = 4;
    state->counter = 0;
    DAT_005f16fc.counter = 0;
    DAT_005f16fc.flag = 0;
}
}
