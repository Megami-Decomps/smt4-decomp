#include "common.h"

extern "C" {

extern s8 g_appletBusyFlag;

s32 appletGetBusyFlag(void)
{
    return g_appletBusyFlag;
}

} /* extern "C" */
