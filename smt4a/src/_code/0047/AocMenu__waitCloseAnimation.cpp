#include "classes/AocMenu.h"
#include "shard/ScreenTransitionState.h"
#include "ui/SceneWindowWork.h"

extern "C" {
void eventQueueAddUniqueIfValid(u32);
void flagObjAdvance(void *);
void FUN_0047306c(void *, u32, u32, u32);
void jobOwnerFreeSlotAndStop(void *);
void FUN_00477d10(ScreenTransitionState *, s32, u32);
s32 FUN_002e1a18(u32);
s8 uiSpriteGetCompletionState(const void *record);

// Wait for the close animation and input, post the transition event, then release its callback.
void AocMenu::waitCloseAnimation()
{
    ScreenTransitionState * transition = reinterpret_cast<ScreenTransitionState *>(this);
    SceneWindowWork *view = reinterpret_cast<SceneWindowWork *>(this);
    RequestParameters time;
    void *animation = &view->dialogJob;
    switch (transition->phase) {
    case 0:
        FUN_0047306c(animation, 0x67, 0, 0);
        FUN_00477d10(transition, 3, 1);
        transition->phase = 1;
        break;
    case 1:
        if (uiSpriteGetCompletionState(&view->dialog.cursor) && FUN_002e1a18(0x10)) {
            eventQueueAddUniqueIfValid(0x100020e);
            flagObjAdvance(animation);
            FUN_00477d10(transition, -1, 0);
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
