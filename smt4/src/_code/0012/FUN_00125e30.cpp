/* NON_MATCHING: the null case sets r0 to 0 with `moveq`; retail reuses the already-zero pointer register and ends with `movne r0, #1; beq` (a branch to the next instruction). */
#include "common.h"

extern "C" {

typedef struct IfTouchState {
    /* 0x000 */ u8 unk000[0x67C];
    /* 0x67C */ u8 enabled;
} IfTouchState;

typedef struct IfTouchGlobal {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ IfTouchState *state;
} IfTouchGlobal;

extern IfTouchGlobal g_ifTouch;

/* Returns whether the touch interface state exists and is enabled. */
u8 FUN_00125e30(void)
{
    IfTouchState *state = g_ifTouch.state;

    return state != NULL && state->enabled;
}

} /* extern "C" */
