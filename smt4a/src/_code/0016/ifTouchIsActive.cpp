#include "common.h"

struct TouchState {
    u8 unk00[0x67C];
    u8 active; // 0x67C
};

struct TouchInterface {
    u32 unk00;         // 0x00
    TouchState* state; // 0x04
};

extern "C" {
extern TouchInterface g_ifTouch;

u8 ifTouchIsActive(void)
{
    TouchState* state = g_ifTouch.state;
    if (state == NULL)
        return 0;

    u8 active = state->active;
    if (active != 0)
        active = 1;
    return active;
}
}
