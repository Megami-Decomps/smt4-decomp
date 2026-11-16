#include "common.h"

struct TitleConfigValues {
    u8 first;  // 0x0
    u8 second; // 0x1
    u8 third;  // 0x2
    u8 fourth; // 0x3
};

extern "C" {
extern TitleConfigValues g_titleConfigValues;

void FUN_0013c874(u32 value);
void soundVolumeSettingSet(u32 value);
void FUN_0013dee0(u32 value);
void soundSetVolumeSetting(u32 value);

void titleConfigApply()
{
    FUN_0013c874(g_titleConfigValues.first);
    soundVolumeSettingSet(g_titleConfigValues.second);
    FUN_0013dee0(g_titleConfigValues.third);
    soundSetVolumeSetting(g_titleConfigValues.fourth);
}
}
