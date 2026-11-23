#include "classes/Obj532300.h"
#include "util/BitsAndBytes.h"

extern "C" {
void naviRefreshBackgroundAndFeedback(Obj532300 *panel);
u8 buttonHelpIsNotActive(void);
}

// Task state machine: open the help (0), wait until it has closed (1), then clear the display flag and finish (2).
void Obj532300::FUN_0048d1c8()
{
    s32 next;
    if (state == 0) {
        naviRefreshBackgroundAndFeedback(this);
        next = 1;
    } else if (state == 1) {
        if (buttonHelpIsNotActive() != 0) {
            state = 2;
        }
        return;
    } else if (state == 2) {
        flagsClearBits(&flags, 0x1000000);
        step = 2;
        next = 0;
    } else {
        return;
    }
    state = next;
}
