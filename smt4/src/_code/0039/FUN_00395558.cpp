/* NON_MATCHING: retail conditional instruction or constructor initialization ordering differs. */
#include "common.h"

struct CallbackState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x54];
    /* 0x58 */ s32 selection;
};
extern "C" {
CallbackState *_ZN9Obj422314C1Ei(CallbackState *state, s32 mode);
extern const u8 _ZTV9Obj4222ac[];
/* Initializes the callback base and clears its selection. */
CallbackState *FUN_00395558(CallbackState *state)
{
    state = _ZN9Obj422314C1Ei(state, 0);
    state->vtable = _ZTV9Obj4222ac + 8;
    state->selection = -1;
    return state;
}
}
