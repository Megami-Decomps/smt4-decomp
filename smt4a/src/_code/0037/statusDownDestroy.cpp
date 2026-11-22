#include "status/StatusDownA.h"
#include "script/scrScriptProcess.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void asdMemFreeSlot(void *slot);

/* Tears down the status-down screen: touch regions, its slot and script, then the work area. */
void statusDownDestroy(void)
{
    StatusDownStateA *status = g_statusDown;
    StatusDownSkillMenuA *script;

    statusDownClearTouchRegions(status);
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
