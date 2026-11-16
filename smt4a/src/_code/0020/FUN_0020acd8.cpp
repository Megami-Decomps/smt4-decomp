#include "common.h"

namespace {
struct BattleSelectionTransition {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ u32 parameter;
};
}
extern "C" {
void btlCommandMenuEnterMode(BattleSelectionTransition *state, s32 nextState, s32 enabled);
s32 btlDebugQueryEnabled(void);
u32 FUN_002cc9e0(BattleSelectionTransition *state, s32 inBattle);
void screenSetContextHint(BattleSelectionTransition *state, u32 kind, u32 parameter);

/* Stores the selection parameter and enters the normal or alternate transition state. */
void FUN_0020acd8(BattleSelectionTransition *state, u32 parameter, s32 enabled)
{
    state->parameter = parameter;
    if (enabled == 0) {
        btlCommandMenuEnterMode(state, 0x29, 1);
        return;
    }
    if (parameter == 0 && btlDebugQueryEnabled() != 0) {
        btlCommandMenuEnterMode(state, 1, 1);
        screenSetContextHint(state, FUN_002cc9e0(state, 1), state->parameter);
        return;
    }
    btlCommandMenuEnterMode(state, 9, 1);
}
}
