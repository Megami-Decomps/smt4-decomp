/* NON_MATCHING: retail uses `add r0, r0, #16640` where armcc emits `add r0, r0, #16384`. */
#include "common.h"

extern "C" {

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x41e8];
    /* 0x41e8 */ u8 flags[5];
};

s32 uiSceneAreFlagsClear(const SceneState *state)
{
    return state->flags[0] == 0 && state->flags[1] == 0 &&
        state->flags[2] == 0 && state->flags[3] == 0 && state->flags[4] == 0;
}

} /* extern "C" */
