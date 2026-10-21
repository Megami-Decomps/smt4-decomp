#include "common.h"

extern "C" {

typedef struct SceneState {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 value;
    /* 0x30 */ u8 unk30[0x38];
    /* 0x68 */ u32 pending;
} SceneState;

extern SceneState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* Stores `value` and clears the pending word when game flag 0x4D0 is set. */
void FUN_00272e0c(u32 value)
{
    if (gameFlagIsSet(0x4D0)) {
        g_battleViewState.value = value;
        g_battleViewState.pending = 0;
    }
}

} /* extern "C" */
