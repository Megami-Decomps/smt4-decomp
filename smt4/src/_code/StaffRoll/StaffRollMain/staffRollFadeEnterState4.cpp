/* NON_MATCHING: retail materialises the state constant (mov r1, #N) before loading the global pointer; this loads the pointer first */
/* Staff roll: fades the screen layers out and moves to state 4. */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {

int slotSetRequest(int layer, int frames, int alpha);

extern StaffRollWork *g_staffRoll;

void staffRollFadeEnterState4(int layer, int frames, int alpha)
{
    slotSetRequest(layer, frames, alpha);
    slotSetRequest(1, 0x3c, 0xff);
    g_staffRoll->state = 4;
}

} /* extern "C" */
