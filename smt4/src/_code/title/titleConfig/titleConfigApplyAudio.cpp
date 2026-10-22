#include "common.h"

extern "C" {
extern u8 g_titleConfigValues[4];
void sysSetStateByte(u8 value);
void soundVolumeSettingSet(u8 value);
void FUN_00109670(u8 value);
void soundSetVolumeSetting(u8 value);

/* Applies the four saved audio configuration values. */
void titleConfigApplyAudio(void)
{
    sysSetStateByte(g_titleConfigValues[0]);
    soundVolumeSettingSet(g_titleConfigValues[1]);
    FUN_00109670(g_titleConfigValues[2]);
    soundSetVolumeSetting(g_titleConfigValues[3]);
}
}
