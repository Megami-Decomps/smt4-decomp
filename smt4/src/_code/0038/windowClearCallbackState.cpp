#include "common.h"

struct WindowCallbackState {
    /* 0x00 */ u8 unk00[0xb0];
    /* 0xB0 */ u32 state;
};

/* Clear the window callback's state. */
extern "C" void windowClearCallbackState(WindowCallbackState *window)
{
    window->state = 0;
}
