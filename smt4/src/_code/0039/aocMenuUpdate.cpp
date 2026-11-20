#include "addon/AocSystem.h"
#include "addon/AocSystem_VariantA.h"
#include "ui/UiControl.h"
/* NON_MATCHING: retail loads the window into r2 and moves it into r0 just before the deleting destructor; the build loads directly into r0. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "sys/RuntimeObjects.h"

extern "C" {
void aocMenuSetButtonHelp(AocMenu *menu, s32 a, s32 b);
void jobOwnerFreeSlotAndStop(void *owner);
void jobStopAndClearFlags(AocMenu *menu);
void FUN_00126fb8(void *block);
}

// Both the update and shutdown paths release the child job's touch region.
static __inline void aocMenuStopChild(AocMenu *menu)
{
    if (jobIsValid(menu->childJob)) {
        if (menu->touchMarker != -1) {
            menu->touchMarker = -1;
            ifTouchRegionRemove();
        }
        menu->flags &= ~0x3000u;
        jobStop(menu->childJob, 0);
    }
}

static __inline void resetRequestOperation(RequestParameters *operation)
{
    operation->kind = 1;
    operation->word3 = 0;
    operation->result = WindowStatusResult(operation->word3);
}

extern "C" void aocMenuUpdate(AocMenu *menu)
{
    if ((u32)(menu->step - 4) < 11 && FUN_002ad1e0(&g_aocMain->operationDone)) {
        g_aocMain->flags &= ~0x10000u;
        aocMenuSetButtonHelp(menu, -1, 0);
        jobOwnerFreeSlotAndStop(menu->jobOwner);
        jobStopAndClearFlags(menu);
        aocMenuStopChild(menu);
        resetRequestOperation(&menu->request);
        FUN_00126fb8(&g_aocMain->queryResult);
        g_aocMain->flags &= ~0x10000u;
        if (menu->step == 10) {
            aocClearDisplayFlag(g_aocSystem);
            aocReleasePackageOwner(g_aocSystem);
        }
        menu->step = 17;
        menu->substep = 0;
        if (menu->window != NULL) {
            delete menu->window;
            menu->window = NULL;
        }
        return;
    }
    for (s32 i = 0; i < 25; i++)
        uiSpriteAdvanceAnimation(reinterpret_cast<UiSpriteState *>(menu->animated.effects[i]));
    menu->animated.slowTick = (menu->animated.slowTick + 1) % 20;
    menu->animated.fastTick = (menu->animated.fastTick + 1) % 30;
    if (menu->stepDispatch.flat[menu->step] != NULL)
        (menu->*menu->stepDispatch.flat[menu->step])();
}
