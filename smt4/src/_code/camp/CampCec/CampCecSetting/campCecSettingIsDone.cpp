/* Returns nonzero once the CEC settings screen has finished. */
#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {

extern CampCecSetting *g_campCecSetting;

u8 campCecSettingIsDone(void)
{
    return g_campCecSetting->done != 0;
}

} /* extern "C" */
