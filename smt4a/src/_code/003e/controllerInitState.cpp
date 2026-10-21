#include "common.h"

extern "C" {

struct ControllerState {
    /* 0x00 */ void *owner;
    /* 0x04 */ u16 mode;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *target;
    /* 0x0c */ u8 unk0c[0xc];
    /* 0x18 */ void *callback;
    /* 0x1c */ u8 active;
};

void controllerInitState(ControllerState *state)
{
    state->owner = NULL;
    state->mode = 7;
    state->target = NULL;
    state->callback = NULL;
    state->active = 0;
}

} /* extern "C" */
