#include "common.h"

struct TitleConfigValues {
    u8 first;  // 0x0
    u8 second; // 0x1
    u8 third;  // 0x2
    u8 fourth; // 0x3
};

extern "C" {
extern TitleConfigValues DAT_00588fc0;

void FUN_0013c874(u32 value);
void FUN_0013c1ec(u32 value);
void FUN_0013dee0(u32 value);
void soundSetVolumeSetting(u32 value);

void titleConfigApply()
{
    FUN_0013c874(DAT_00588fc0.first);
    FUN_0013c1ec(DAT_00588fc0.second);
    FUN_0013dee0(DAT_00588fc0.third);
    soundSetVolumeSetting(DAT_00588fc0.fourth);
}
}
