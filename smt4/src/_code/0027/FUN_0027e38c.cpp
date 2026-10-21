#include "common.h"

namespace {
struct ActionState {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2c */ u8 active;
};
struct ActionOwner {
    /* 0x0000 */ u8 unk0000[0x2f98];
    /* 0x2f98 */ s32 active;
};
}

extern "C" {
extern ActionOwner *DAT_00435d18;

/* Completes the action and clears its owner's active state. */
void FUN_0027e38c(ActionState *action)
{
    action->state = 9;
    action->active = 0;
    DAT_00435d18->active = 0;
}
}
