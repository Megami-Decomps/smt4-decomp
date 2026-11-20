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
extern const NaviCallbackStateView::Handler g_naviCallbackHandlerTable[11];

// Clear all navigation handlers, then install the supported screen actions.
void NaviMain_InitCallbacks(NaviCallbackStateView *state)
{
    for (s32 index = 0; index < 13; ++index)
        state->callbacks[index] = g_naviCallbackHandlerTable[0];
    state->callbacks[0] = g_naviCallbackHandlerTable[1];
    state->callbacks[1] = g_naviCallbackHandlerTable[2];
    state->callbacks[2] = g_naviCallbackHandlerTable[3];
    state->callbacks[4] = g_naviCallbackHandlerTable[4];
    state->callbacks[5] = g_naviCallbackHandlerTable[5];
    state->callbacks[6] = g_naviCallbackHandlerTable[6];
    state->callbacks[8] = g_naviCallbackHandlerTable[7];
    state->callbacks[9] = g_naviCallbackHandlerTable[8];
    state->callbacks[10] = g_naviCallbackHandlerTable[9];
    state->callbacks[11] = g_naviCallbackHandlerTable[10];
}
}
