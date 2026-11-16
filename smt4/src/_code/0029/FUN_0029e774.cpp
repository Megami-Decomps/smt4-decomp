#include "common.h"

extern "C" void gameSetIconDisplayEnabled(s32 enabled);
extern "C" void FUN_0029e788(void);

/* Enable the subsystem before resetting its timers and state. */
extern "C" void FUN_0029e774(void)
{
    gameSetIconDisplayEnabled(1);
    FUN_0029e788();
}
