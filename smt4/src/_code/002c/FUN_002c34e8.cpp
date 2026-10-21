#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

void FUN_002c34e8(u8 value)
{
    g_soundVolumeSetting = value;
}

} /* extern "C" */
