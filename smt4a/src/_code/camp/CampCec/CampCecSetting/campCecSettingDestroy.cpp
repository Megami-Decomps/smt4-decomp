/* Closes the CEC settings screen: frees its heap blocks and resource, kills its task and frees the work area. */
#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {

int scrScriptProcessDestroy(u32 resource);
int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */

extern CampCecSetting *g_campCecSetting;

void campCecSettingDestroy(void)
{
    CampCecSetting *setting = g_campCecSetting;

    asdMemFree(setting->heapA);
    asdMemFree(setting->heapB);
    scrScriptProcessDestroy(setting->resource);
    jobStop(setting->task, 0);
    asdMemFree(setting);
    g_campCecSetting = NULL;
}

} /* extern "C" */
