#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {
extern CampCecSetting *g_campCecSetting;

/* This settings callback always reports zero. */
u8 campCecSettingQueryZero(void)
{
    u8 started = g_campCecSetting->started;
    if (started != 0) {
        return 0;
    }
    return started;
}
}
