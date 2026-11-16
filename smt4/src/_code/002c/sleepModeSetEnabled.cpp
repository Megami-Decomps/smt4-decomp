#include "common.h"

extern "C" {

extern int FUN_002c5434(int arg);
extern int sleepQueryAnswer(int arg);

extern s8 g_appletEventState; /* 0x465198 */

/* Sets the flag and runs the matching routine (FUN_002c5434 when set, sleepQueryAnswer otherwise); returns the old flag. */
s32 sleepModeSetEnabled(s32 enable)
{
    s32 previous = g_appletEventState;

    g_appletEventState = enable;
    if (enable != 0) {
        FUN_002c5434(1);
    } else {
        sleepQueryAnswer(1);
    }
    return previous;
}

}
