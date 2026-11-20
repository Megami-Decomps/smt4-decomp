#include "common.h"

extern "C" {

extern u8 g_resultDebugMode;

/* Stores `value` in the global at 0x005894cc. */
void FUN_0013b754(u8 value)
{
    g_resultDebugMode = value;
}

} /* extern "C" */
