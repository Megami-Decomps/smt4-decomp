#include "common.h"

extern "C" {

int titleOverlaySetModeAnimation(void *state, int arg);

typedef struct StateObj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A[0x2A];
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35;
} StateObj;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ StateObj *state;
} Owner;

u32 FUN_002ed568(Owner *owner)
{
    StateObj *state = owner->state;

    if (state->unk35 != 0) {
        titleOverlaySetModeAnimation(state, state->unk09);
        state->state = 3;
        state->unk34 = 0;
        state->unk35 = 0;
    } else if (state->state == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
