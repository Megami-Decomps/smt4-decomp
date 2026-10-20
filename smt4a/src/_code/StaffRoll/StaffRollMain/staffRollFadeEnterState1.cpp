/* NON_MATCHING: retail materialises the state constant (mov r1, #N) before loading the global pointer; this loads the pointer first */
/* Staff roll: fades the screen layers out and moves to state 1. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int FUN_0013cab8(int layer, int frames, int alpha);

extern StaffRollWork *g_staffRoll;

void staffRollFadeEnterState1(int layer, int frames, int alpha)
{
    FUN_0013cab8(layer, frames, alpha);
    FUN_0013cab8(1, 0x3c, 0xff);
    g_staffRoll->state = 1;
}

} /* extern "C" */
