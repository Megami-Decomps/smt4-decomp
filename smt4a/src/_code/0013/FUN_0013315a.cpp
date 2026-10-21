#include "common.h"

extern "C" {

struct CallbackState {
    /* 0x00 */ u16 status;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u32 value;
};

void FUN_0013315a(CallbackState *state)
{
    state->status = 0;
    state->value = 0;
}

} /* extern "C" */
