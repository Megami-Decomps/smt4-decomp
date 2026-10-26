#include "common.h"

struct UiState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 block[0x70];
};

extern "C" {
s32 uiStateGetFirstFlag(const void *block);
s32 uiStateGetSecondFlag(const void *block);

/* Reports whether either activity flag is set. */
s32 uiStateHasAnyActiveFlag(const UiState *state)
{
    return uiStateGetSecondFlag(state->block) != 0 || uiStateGetFirstFlag(state->block) != 0;
}
}
