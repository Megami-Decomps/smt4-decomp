/* NON_MATCHING: zero uses a core register rather than retail's VFP register, with different global aliasing and store scheduling. */
#include "shard/W6_W6Match7_BattleEffects.h"

struct TransitionGlobals {
    u32 unk00;
    u8 reset;
    u8 unk05[0x1b];
    u32 first;
    u32 second;
};

struct TransitionView {
    u8 unk00[0x48];
    s32 state;
    u8 unk4c[0x64];
    u32 first; // 0xb0
    u8 unkb4[0x10];
    u32 second; // 0xc4
    u32 counter; // 0xc8
    u8 unkcc[0x30];
    u32 progress; // 0xfc
    u32 target; // 0x100
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;

void FUN_004cb8a0(TransitionView *state)
{
    const TransitionGlobals *globals =
        reinterpret_cast<const TransitionGlobals *>(&g_battleEffectSettings);
    u32 first = globals->first;
    u32 second = globals->second;
    if (globals->reset != 0) {
        state->target = second;
        state->first = first;
        state->second = second;
        state->state = 2;
        state->progress = 0;
        state->counter = 0;
    } else if (state->state != 2) {
        state->target = second;
        state->first = first;
        state->second = second;
        state->state = 2;
        state->progress = 0;
    }
}
}
