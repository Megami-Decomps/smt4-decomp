/* Staff roll: once screenFadesAllReady reports ready, moves to state 5. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

extern StaffRollWork *g_staffRoll;

extern int screenFadesAllReady(void);

void staffRollEnterState5(void)
{
    if (screenFadesAllReady() != 0) {
        staffRollSetState(g_staffRoll, STAFF_ROLL_STATE_COMPLETE);
    }
}

} /* extern "C" */
