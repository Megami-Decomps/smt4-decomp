/* NON_MATCHING: Retail retains an unreachable debug branch after a stripped zero-returning query; this source expresses only the reachable transitions. */
#include "common.h"

namespace {
struct BattleSelectionTransition {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ u32 parameter;
};
}
extern "C" {
void FUN_0020ad6c(BattleSelectionTransition *state, s32 nextState, s32 enabled);

/* Stores the selection parameter and enters the normal or alternate transition state. */
void FUN_0020acd8(BattleSelectionTransition *state, u32 parameter, s32 enabled)
{
    state->parameter = parameter;
    if (enabled != 0) {
        FUN_0020ad6c(state, 9, 1);
    } else {
        FUN_0020ad6c(state, 0x29, 1);
    }
}
}
