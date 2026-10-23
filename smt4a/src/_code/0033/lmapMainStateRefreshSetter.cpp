#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct LmapMainState {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u8 unk4c[0xA8];
    /* 0xF4 */ u8 setter[1];
} LmapMainState;

extern LmapMainState *g_lmapMainState;

void FUN_00483acc(u8 *setter);
void stateSetterSetFromBase(u8 *setter, s32 base, u32 value);
void fieldBuildAreaPlacementList(u8 *setter);

/* Re-applies the state setter of the lmap main state: reset, set from its base (unk40 - 100, unk48), then finish. */
void lmapMainStateRefreshSetter(void)
{
    LmapMainState *state = g_lmapMainState;

    if (state != NULL) {
        asdDebugHookVoid();
        asdDebugHookVoid();
        FUN_00483acc(state->setter);
        stateSetterSetFromBase(state->setter, state->unk40 - 100, state->unk48);
        fieldBuildAreaPlacementList(state->setter);
    }
}

} /* extern "C" */
