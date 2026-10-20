/* Staff roll: once FUN_002896bc reports ready, starts the next fade and moves to state 2. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int soundChannelRequestIfEnabled(int a, int b, int c);

extern StaffRollWork *g_staffRoll;

extern int FUN_002896bc(void);

void staffRollEnterState2(void)
{
    if (FUN_002896bc() != 0) {
        soundChannelRequestIfEnabled(0x1000000, 0, 0x3c);
        StaffRollWork *work = g_staffRoll;

        work->state = 2;
    }
}

} /* extern "C" */
