#include "classes/AocMenu.h"
#include "ui/SceneWindowWork.h"

extern "C" {
void FUN_0027ea28(void *dialog, s32 entry, u32 mode, u32 flags);
void FUN_0023392c(SceneWindowWork *window, u32 state, s32 enabled);
void jobOwnerFreeSlotAndStop(void *owner);
void FUN_0027e9c0(void *dialog);
s32 FUN_0027ee9c();
s32 inputIsQuestMenuPressed();
void eventQueueAddUniqueIfValid(u32 event);
s8 uiSpriteGetCompletionState(const SceneWindowCursorView *cursor);

// Open the confirmation entry, handle accept/cancel, then retire its callback.
void AocMenu::runQuestDialog()
{
    SceneWindowWork * window = reinterpret_cast<SceneWindowWork *>(this);
    s32 phase = window->transition.phase;
    if (phase == 0) {
        FUN_0027ea28(&window->dialogJob, 100, 1, 0);
        FUN_0023392c(window, 0, 1);
        window->transition.phase = 1;
        return;
    }
    if (phase != 1) {
        if (phase == 2 && uiSpriteGetCompletionState(&window->dialog.cursor) != 0) {
            jobOwnerFreeSlotAndStop(&window->dialogJob);
            window->transition.state = 3;
            window->transition.phase = 0;
            if (window->transition.callback != NULL) {
                window->transition.callback->vtable->destroy(window->transition.callback);
                window->transition.callback = NULL;
            }
        }
    } else if (uiSpriteGetCompletionState(&window->dialog.cursor) != 0) {
        if (FUN_0027ee9c()) {
            eventQueueAddUniqueIfValid(0x100016D);
            FUN_0023392c(window, -1, 0);
            FUN_0027e9c0(&window->dialogJob);
            window->transition.phase = 2;
            return;
        }
        if (inputIsQuestMenuPressed()) {
            eventQueueAddUniqueIfValid(0x100016D);
            window->transition.state = 15;
            window->transition.phase = 0;
            if (window->transition.callback != NULL) {
                window->transition.callback->vtable->destroy(window->transition.callback);
                window->transition.callback = NULL;
            }
            FUN_0027e9c0(&window->dialogJob);
        }
    }
}
}
