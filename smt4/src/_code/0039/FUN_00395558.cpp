#include "classes/Obj422318.h"
/* NON_MATCHING: retail conditional instruction or constructor initialization ordering differs. */
#include "common.h"

struct CallbackState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x54];
    /* 0x58 */ s32 selection;
};
extern "C" {
extern const u8 _ZTV9Obj4222ac[];
/* Initializes the callback base and clears its selection. */
CallbackState *FUN_00395558(CallbackState *state)
{
    state = (CallbackState *)(new (state) Obj422318(0));
    state->vtable = _ZTV9Obj4222ac + 8;
    state->selection = -1;
    return state;
}
}
