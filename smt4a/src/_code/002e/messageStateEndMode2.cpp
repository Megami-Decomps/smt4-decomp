#include "ui/MessageMainA.h"

extern "C" {

void msgBoxFlagsClearBit7(u32 box);

/* Ends the message window's mode 2; clears the box's bit 7 unless the state's flag 0x20 is set. */
void messageStateEndMode2(void)
{
    MessageWindowA *window = g_messageMain.window;

    if (window != NULL && window->activeState == 2) {
        window->activeState = 0;
        if ((window->flags & 0x20) == 0) {
            msgBoxFlagsClearBit7(window->box);
        }
    }
}

} /* extern "C" */
