/* NON_MATCHING: retail materialises the state constant (mov r1, #N) before loading the global pointer; this loads the pointer first */
/* Staff roll: once FUN_002e07f4 reports ready, starts the next fade and moves to state 2. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int soundChannelRequestIfEnabled(int a, int b, int c);

extern StaffRollWork *g_staffRoll;

extern int FUN_002e07f4(void);

void staffRollEnterState2(void)
{
    if (FUN_002e07f4() != 0) {
        soundChannelRequestIfEnabled(0x1000000, 0, 0x3c);
        g_staffRoll->state = 2;
    }
}

} /* extern "C" */
