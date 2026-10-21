/* NON_MATCHING: retail uses different bitwise float comparison or dispatch-store scheduling. */
#include "common.h"

struct CallbackState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 flags;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 kind;
    /* 0x0c */ u32 state;
};
extern "C" {
extern const u8 DAT_0055c80c[];
/* Initializes the callback state and its dispatch type. */
void FUN_004823ec(CallbackState *state)
{
    state->flags = 0;
    state->vtable = DAT_0055c80c;
    state->state = 0;
    state->kind = 1;
}
}
