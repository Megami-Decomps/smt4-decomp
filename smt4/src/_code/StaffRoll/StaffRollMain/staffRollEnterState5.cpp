/* NON_MATCHING: retail materialises the state constant (mov r1, #N) before loading the global pointer; this loads the pointer first */
/* Staff roll: once FUN_002896bc reports ready, moves to state 5. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int FUN_002896bc(void);

void staffRollEnterState5(void)
{
    if (FUN_002896bc() != 0) {
        g_staffRoll->state = 5;
    }
}

} /* extern "C" */
