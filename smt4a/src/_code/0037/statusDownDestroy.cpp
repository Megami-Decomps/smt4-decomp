#include "status/StatusDownA.h"
#include "script/scrScriptProcess.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void ifTouchRegionRemove(void);
void asdMemFree(void *block);
void asdMemFreeSlot(void *slot);
void __aeabi_memset4(void *dst, u32 size, s32 value);

/* Tears down the status-down screen: touch regions, its slot and script, then the work area. */
void statusDownDestroy(void)
{
    StatusDownStateA *status = g_statusDown;
    StatusDownSkillMenuA *script;
    s32 i;

    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, sizeof(status->slots), -1);
    asdMemFreeSlot(status->text);
    script = &g_statusDown->menu;
    if (script->process != NULL) {
        scrScriptProcessDestroy(script->process);
        script->process = NULL;
    }
    if (script->dataA != NULL) {
        asdMemFree(script->dataA);
        script->dataA = NULL;
    }
    if (script->dataB != NULL) {
        asdMemFree(script->dataB);
        script->dataB = NULL;
    }
    jobStop(status->job, 0);
    asdMemFree(status);
    g_statusDown = NULL;
}

} /* extern "C" */
