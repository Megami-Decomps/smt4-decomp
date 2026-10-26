#include "common.h"

namespace {
struct CallbackState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
};
}

extern "C" {
extern CallbackState *DAT_0044e110;

static __inline void callbackStateSetEnabled(CallbackState *state, u8 enabled)
{
    state->enabled = enabled;
}

/* Enables the callback state. */
void callbackStateEnable(void)
{
    callbackStateSetEnabled(DAT_0044e110, 1);
}
}
