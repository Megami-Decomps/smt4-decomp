#include "common.h"

extern "C" {

struct MenuState {
    /* 0x000 */ u8 unk000[0x11C];
    /* 0x11C */ u8 first[0x20];
    /* 0x13C */ u8 second[0x54];
    /* 0x190 */ u8 active;
};
void FUN_0019059c(void *member);
void FUN_001913e4(void *member);
s32 FUN_0018fee4(MenuState *state);
s32 uiTextStateReset(MenuState *state)
{
    if (state->active != 0) {
        FUN_0019059c(state->first);
        FUN_001913e4(state->second);
        state->active = 0;
    }
    return FUN_0018fee4(state);
}

} /* extern "C" */
