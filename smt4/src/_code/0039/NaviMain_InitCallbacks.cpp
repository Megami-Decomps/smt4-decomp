/* NON_MATCHING: eight callback-table loads use r0 as their address register instead of retail r3; instruction count matches. */
#include "common.h"
#include <stddef.h>

namespace {
struct NaviCallbackStateView {
    typedef void (NaviCallbackStateView::*Handler)();
    u8 unk0000[0xb14];
    Handler callbacks[13];
};
typedef char NaviCallbackOffsetCheck[offsetof(NaviCallbackStateView, callbacks) == 0xb14 ? 1 : -1];
}

extern "C" {
extern const NaviCallbackStateView::Handler DAT_004049cc[11];

// Clear all navigation handlers, then install the supported screen actions.
void NaviMain_InitCallbacks(NaviCallbackStateView *state)
{
    for (s32 index = 0; index < 13; ++index)
        state->callbacks[index] = DAT_004049cc[0];
    state->callbacks[0] = DAT_004049cc[1];
    state->callbacks[1] = DAT_004049cc[2];
    state->callbacks[2] = DAT_004049cc[3];
    state->callbacks[4] = DAT_004049cc[4];
    state->callbacks[5] = DAT_004049cc[5];
    state->callbacks[6] = DAT_004049cc[6];
    state->callbacks[8] = DAT_004049cc[7];
    state->callbacks[9] = DAT_004049cc[8];
    state->callbacks[10] = DAT_004049cc[9];
    state->callbacks[11] = DAT_004049cc[10];
}
}
