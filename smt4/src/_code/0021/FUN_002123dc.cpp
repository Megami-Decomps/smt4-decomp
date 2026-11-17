#include "ui/MessageMain.h"

extern "C" {

s32 msgBoxFlagsClearBit7(u32 id);

/* Returns the message window in active state 2 to state 0, clearing its bit 7 unless flag 0x20 is set. */
void FUN_002123dc(void)
{
    MessageWindow *window = g_messageMain.window;

    if (window != NULL && window->activeState == 2) {

        window->activeState = 0;
        if ((window->flags & 0x20) == 0) {
            msgBoxFlagsClearBit7(window->box);
        }
    }
}

} /* extern "C" */
