/* Returns nonzero while the CEC settings screen exists. */
#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {

extern CampCecSetting *g_campCecSetting;

u8 campCecSettingExists(void)
{
    return g_campCecSetting != NULL;
}

} /* extern "C" */
