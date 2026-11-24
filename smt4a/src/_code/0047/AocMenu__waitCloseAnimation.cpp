#include "classes/AocMenu.h"
#include "shard/ScreenTransitionState.h"
#include "ui/SceneWindowWork.h"
#include "addon/aocBootProcess.h"

extern "C" {
void eventQueueAddUniqueIfValid(u32);
void aocEntryPanelCreateText(void *, u32, u32, u32);
void jobOwnerFreeSlotAndStop(void *);
void aocMenuSetButtonHelp(ScreenTransitionState *, s32, u32);
s32 buttonHelpIsActionActive(u32);
s8 uiSpriteGetCompletionState(const void *record);

// Wait for the close animation and input, post the transition event, then release its callback.
void AocMenu::waitCloseAnimation()
{
    ScreenTransitionState * transition = reinterpret_cast<ScreenTransitionState *>(this);
    SceneWindowWork *view = reinterpret_cast<SceneWindowWork *>(this);
    AocMenuRequest time;
    void *animation = &view->dialogJob;
    switch (transition->phase) {
    case 0:
        aocEntryPanelCreateText(animation, 0x67, 0, 0);
        aocMenuSetButtonHelp(transition, 3, 1);
        transition->phase = 1;
        break;
    case 1:
        if (uiSpriteGetCompletionState(&view->dialog.cursor) && buttonHelpIsActionActive(0x10)) {
            eventQueueAddUniqueIfValid(0x100020e);
            flagObjAdvance(animation);
            aocMenuSetButtonHelp(transition, -1, 0);
            transition->phase = 2;
        }
        break;
    case 2:
        if (uiSpriteGetCompletionState(&view->dialog.cursor)) {
            jobOwnerFreeSlotAndStop(animation);
            transition->flags = 15;
            transition->phase = 0;
            if (transition->callback) {
                transition->callback->vtable->destroy(transition->callback);
                transition->callback = NULL;
            }
        }
        break;
    }
}
}
