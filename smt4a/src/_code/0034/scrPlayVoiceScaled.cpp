#include "common.h"

extern "C" {

void soundVolumeSettingSet(u32 volume);
u32 soundVolumeSettingGet(void);
s32 FUN_002bf09c(void);
void scrSetResult(u32 value);
u32 scrGetArg(u32 index);
u32 scrGetArgString(u32 index);
u32 sysPlayVoice(void);

/* Script command: plays a voice with the volume setting scaled by the percentage argument, then restores the setting. */
u32 scrPlayVoiceScaled(void)
{
    s32 percent = scrGetArg(1);
    u32 volume = soundVolumeSettingGet();

    soundVolumeSettingSet((u8)(u32)((f32)percent * (f32)volume * 0.0125f));
    scrGetArgString(0);
    if (FUN_002bf09c() < 0) {
        return 1;
    }
    u32 result = sysPlayVoice();
    soundVolumeSettingSet(volume);
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
