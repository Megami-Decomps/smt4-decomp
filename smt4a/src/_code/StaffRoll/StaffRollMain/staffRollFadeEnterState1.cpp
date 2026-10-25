/* Staff roll: fades the screen layers out and moves to state 1. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int FUN_0013cab8(int layer, int frames, int alpha);

extern StaffRollWork *g_staffRoll;

static __inline void staffRollSetState(StaffRollWork *work, s32 state)
{
    work->state = state;
}

void staffRollFadeEnterState1(void)
{
    FUN_0013cab8(0, 0x3c, 0xff);
    FUN_0013cab8(1, 0x3c, 0xff);
    staffRollSetState(g_staffRoll, 1);
}

} /* extern "C" */
