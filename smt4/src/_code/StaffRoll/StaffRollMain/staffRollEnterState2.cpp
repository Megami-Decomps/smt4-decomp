/* NON_MATCHING: retail materialises the state constant (mov r1, #N) before loading the global pointer; this loads the pointer first */
/* Staff roll: once FUN_002896bc reports ready, starts the next fade and moves to state 2. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int FUN_002a03a0(int a, int b, int c);

extern StaffRollWork *g_staffRoll;

extern int FUN_002896bc(void);

void staffRollEnterState2(void)
{
    if (FUN_002896bc() != 0) {
        FUN_002a03a0(0x1000000, 0, 0x3c);
        g_staffRoll->state = 2;
    }
}

} /* extern "C" */
