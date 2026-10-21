#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

void soundVolumeSettingSet(u8 value)
{
    g_soundVolumeSetting = value;
}

} /* extern "C" */
