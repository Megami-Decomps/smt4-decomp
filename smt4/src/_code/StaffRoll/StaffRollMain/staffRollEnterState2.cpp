/* Staff roll: once screenFadesAllReady reports ready, starts the next fade and moves to state 2. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int soundChannelRequestIfEnabled(int a, int b, int c);

extern StaffRollWork *g_staffRoll;

extern int screenFadesAllReady(void);

void staffRollEnterState2(void)
{
    if (screenFadesAllReady() != 0) {
        soundChannelRequestIfEnabled(0x1000000, 0, 0x3c);
        StaffRollWork *work = g_staffRoll;

        staffRollSetState(work, STAFF_ROLL_STATE_SCROLL);
    }
}

} /* extern "C" */
