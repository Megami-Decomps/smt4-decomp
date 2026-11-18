/* NON_MATCHING: register allocation of the fast-tick modulo only (retail keeps tick+1 in r2 and the smlal high word in r1; here they swap); a `s32 tick = fastTick + 1;` temporary reproduces it but is steering. */
#include "addon/aocMain.h"
#include "classes/AocMenu.h"
#include "addon/AocSystemSmt4a.h"
#include "addon/AocSystemA.h"
#include "sys/RuntimeObjects.h"

struct JobOwner;
struct JobFlagsWork;
struct SceneWindowWork;
extern "C" {

s32 sysLightEventTryWait(LightEvent *event);
void aocMenuSetButtonHelp(SceneWindowWork *window, s32 value, s32 mode);
void jobOwnerFreeSlotAndStop(JobOwner *owner);
void jobFlagsWorkStop(JobFlagsWork *work);
void ifTouchRegionRemove();
void FUN_0016ccb4(u32 *queryResult);
void aocReleasePackageOwner(AocSystemA *system);

// Drop the interactive child, including any touch region it owns.
static __inline void aocMenuStopChild(AocMenu *scene)
{
    if (jobIsValid(scene->childJob)) {
        if (scene->touchMarker != -1) {
            scene->touchMarker = -1;
            ifTouchRegionRemove();
        }
        scene->flags &= ~0x3000;
        jobStop(scene->childJob, 0);
    }
}

// Restore the waiting status for a finished add-on request.
static __inline void resetRequestOperation(RequestParameters *operation)
{
    operation->kind = 1;
    operation->word3 = 0;
    operation->result = WindowStatusResult(operation->word3);
}

// Runs the scene one frame. While the content is released (states 4..14 with the add-on event signalled) the scene
// shuts down instead: it stops its job, clears the result and returns to state 17.
void aocMenuUpdate(AocMenu *scene)
{
    if ((u32)(scene->step - 4) < 11 && sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000;
        aocMenuSetButtonHelp((SceneWindowWork *)scene, -1, 0);
        jobOwnerFreeSlotAndStop((JobOwner *)scene->jobOwner);
        jobFlagsWorkStop((JobFlagsWork *)scene);
        aocMenuStopChild(scene);
        resetRequestOperation(&scene->request);
        FUN_0016ccb4(&g_aocMain->queryResult);
        g_aocMain->flags &= ~0x10000;
        if (scene->step == 10) {
            aocClearDisplayFlag(g_aocSystem);
            aocReleasePackageOwner(g_aocSystem);
        }
        scene->step = 17;
        scene->substep = 0;
        if (scene->window != NULL) {
            delete scene->window;
            scene->window = NULL;
        }
        return;
    }
    for (s32 index = 0; index < 25; index++) {
        uiSpriteAdvanceAnimation(reinterpret_cast<UiSpriteState *>(scene->animated.effects[index]), 1.0f);
    }
    ++scene->animated.slowTick;
    scene->animated.slowTick = static_cast<s32>(scene->animated.slowTick) % 20;
    scene->animated.fastTick = (static_cast<s32>(scene->animated.fastTick) + 1) % 30;
    if (scene->stepDispatch.flat[scene->step] != NULL) {
        (scene->*scene->stepDispatch.flat[scene->step])();
    }
}
}
