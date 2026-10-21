#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u8 soundVolumeSettingGet(void);
void soundVolumeSettingSet(u8 volume);
s32 FUN_002bf810(u32 soundId);
void scrSetResult(s32 result);

// Issue a sound request with a temporary volume setting, then restore the setting.
u32 scrCommRequestSoundWithVolume(void)
{
    u32 soundId = scrGetArg(0);
    u32 volume = scrGetArg(1);
    u8 previousVolume = soundVolumeSettingGet();
    soundVolumeSettingSet((u8)volume);
    s32 result = FUN_002bf810(soundId);
    soundVolumeSettingSet(previousVolume);
    scrSetResult(result);
    return 1;
}
}
