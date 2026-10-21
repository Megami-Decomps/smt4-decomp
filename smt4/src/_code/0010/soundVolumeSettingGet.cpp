#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

u8 soundVolumeSettingGet(void)
{
    return g_soundVolumeSetting;
}

} /* extern "C" */
