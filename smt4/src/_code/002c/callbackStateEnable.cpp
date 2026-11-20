#include "common.h"

namespace {
struct CallbackState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
};
}

extern "C" {
extern CallbackState *g_soundTestWork;

static __inline void callbackStateSetEnabled(CallbackState *state, u8 enabled)
{
    state->enabled = enabled;
}

/* Enables the callback state. */
void callbackStateEnable(void)
{
    callbackStateSetEnabled(g_soundTestWork, 1);
}
}
