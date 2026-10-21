#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

/* Stores `value` in the global at 0x00588fb4. */
void FUN_0013c1ec(u8 value)
{
    g_soundVolumeSetting = value;
}

} /* extern "C" */
