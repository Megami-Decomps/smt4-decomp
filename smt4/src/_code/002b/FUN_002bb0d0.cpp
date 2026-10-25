#include "common.h"

extern "C" {

extern s8 g_appletSleepModuleState;

s32 FUN_002bb0d0(void)
{
    return g_appletSleepModuleState;
}

} /* extern "C" */
