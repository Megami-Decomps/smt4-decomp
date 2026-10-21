#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

u8 FUN_0010f134(void)
{
    return g_soundVolumeSetting;
}

} /* extern "C" */
