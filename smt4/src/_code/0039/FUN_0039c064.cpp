/* NON_MATCHING: `active` is the byte right after `requested` (0x5A8D, corrected); retail forms the two field addresses with separate large adds (0x5800+0x28C, 0x5A00+0x8D) and stores through them, this build uses a pooled offset register for both. */
#include "common.h"
struct NavigationState {
    /* 0x0000 */ u8 unk00[16];
    /* 0x0010 */ u32 flags;
    /* 0x0014 */ u8 unk14[0x5a78];
    /* 0x5a8c */ u8 requested;
    /* 0x5a8d */ u8 active;
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
