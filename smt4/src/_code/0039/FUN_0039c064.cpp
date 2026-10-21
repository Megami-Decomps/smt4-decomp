/* NON_MATCHING: retail packed state stores or parameter lifetime differs. */
#include "common.h"
struct NavigationState {
    /* 0x0000 */ u8 unk00[16];
    /* 0x0010 */ u32 flags;
    /* 0x0014 */ u8 unk14[0x5a78];
    /* 0x5a8c */ u8 requested;
    /* 0x5a8d */ u8 unk5a8d[0x200];
    /* 0x5c8d */ u8 active;
};
extern "C" void FUN_0039c57c(NavigationState *state);
/* Resets navigation control and requests both update paths. */
extern "C" void FUN_0039c064(NavigationState *state)
{
    FUN_0039c57c(state);
    state->flags &= ~16;
    state->requested = 1;
    state->active = 1;
}
