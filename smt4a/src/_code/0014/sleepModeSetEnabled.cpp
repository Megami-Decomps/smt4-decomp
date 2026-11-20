#include "common.h"

extern "C" {

void sleepAllow(s32 sleepIfClosed);
void sleepQueryAnswer(s32 reply);

extern s8 g_appletEventState; /* sleep mode enabled */

/* Enables or disables sleep mode and returns the previous setting: enabling allows sleep (and
 * sleeps at once when the shell is closed), disabling answers the pending sleep query. */
s32 sleepModeSetEnabled(s32 enable)
{
    s32 previous = g_appletEventState;

    g_appletEventState = enable;
    if (enable != 0) {
        sleepAllow(1);
    } else {
        sleepQueryAnswer(1);
    }
    return previous;
}

} /* extern "C" */
