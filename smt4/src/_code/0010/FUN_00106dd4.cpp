#include "common.h"

extern "C" {

extern u8 g_resultDebugMode;

void FUN_00106dd4(u8 value)
{
    g_resultDebugMode = value;
}

} /* extern "C" */
