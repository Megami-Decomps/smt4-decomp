#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
u32 clockGetSecondsSinceStart();
/* Converts the command timer to a bounded script result. */
s32 scrCommandTimerReached()
{
    u32 timer = clockGetSecondsSinceStart();
    scrSetResult(timer >= 3600 ? 1 : 0);
    return 1;
}
}
