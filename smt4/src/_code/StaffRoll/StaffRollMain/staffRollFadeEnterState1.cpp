#include "common.h"
#include "StaffRoll/StaffRollMain.h"
#include "code/Code002c_Smt4.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

/* Starts fading both screens in over 60 frames and waits for the fades. */
void staffRollFadeEnterState1(void)
{
    screenFadeStartIn(0, 60, 0xff);
    screenFadeStartIn(1, 60, 0xff);
    staffRollSetState(g_staffRoll, STAFF_ROLL_STATE_WAIT_FADE_IN);
}

} /* extern "C" */
