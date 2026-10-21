#include "common.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
/* Reports whether the navigation feature is enabled. */
s32 naviIsFeatureEnabled(void)
{
    return gameFlagIsSet(0x4D0) != 0;
}
}
