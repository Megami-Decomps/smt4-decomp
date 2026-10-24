#include "common.h"

extern "C" void soundChannelStopAll(s32 mask);

/* Script command: stops every sound channel in group 15. */
extern "C" s32 FUN_001c35cc(void)
{
    soundChannelStopAll(15);
    return 1;
}
