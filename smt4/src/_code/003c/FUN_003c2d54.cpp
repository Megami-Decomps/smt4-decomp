#include "common.h"

struct StateBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags[0x70];
};
extern "C" {
s8 uiStateGetSecondFlag(const void *state);
s8 uiStateGetFirstFlag(const void *state);

/* Reports whether either activity flag is set. */
s32 FUN_003c2d54(const StateBlock *state)
{
    return uiStateGetSecondFlag(state->flags) != 0 || uiStateGetFirstFlag(state->flags) != 0;
}
}
