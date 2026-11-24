/* Staff roll: fades the screen layers out and moves to state 4. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int slotSetRequest(int layer, int frames, int alpha);

extern StaffRollWork *g_staffRoll;

void staffRollFadeEnterState4(void)
{
    slotSetRequest(0, 0x3c, 0xff);
    slotSetRequest(1, 0x3c, 0xff);
    staffRollSetState(g_staffRoll, STAFF_ROLL_STATE_WAIT_FADE_OUT);
}

} /* extern "C" */
