/* Staff roll: once FUN_002896bc reports ready, moves to state 5. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int FUN_002896bc(void);

static __inline void staffRollSetState(StaffRollWork *work, s32 state)
{
    work->state = state;
}

void staffRollEnterState5(void)
{
    if (FUN_002896bc() != 0) {
        staffRollSetState(g_staffRoll, 5);
    }
}

} /* extern "C" */
