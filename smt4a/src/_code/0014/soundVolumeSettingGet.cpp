#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

/* Returns the byte at 0x588FB4. */
u8 soundVolumeSettingGet(void)
{
    return g_soundVolumeSetting;
}

} /* extern "C" */
