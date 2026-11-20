#include "classes/AocMenu.h"
#include "ui/SceneWindowWork.h"
#include "addon/aocBootProcess.h"

extern "C" {
void aocEntryPanelCreateText(void *dialog, s32 entry, u32 mode, u32 flags);
void aocMenuSetButtonHelp(SceneWindowWork *window, u32 state, s32 enabled);
void jobOwnerFreeSlotAndStop(void *owner);
s32 inputConfirmPressed();
s32 inputIsQuestMenuPressed();
void eventQueueAddUniqueIfValid(u32 event);
s8 uiSpriteGetCompletionState(const SceneWindowCursorView *cursor);

// Open the confirmation entry, handle accept/cancel, then retire its callback.
void AocMenu::runQuestDialog()
{
    SceneWindowWork * window = reinterpret_cast<SceneWindowWork *>(this);
    s32 phase = window->transition.phase;
    if (phase == 0) {
        aocEntryPanelCreateText(&window->dialogJob, 100, 1, 0);
        aocMenuSetButtonHelp(window, 0, 1);
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
        if (inputConfirmPressed()) {
            eventQueueAddUniqueIfValid(0x100016D);
            aocMenuSetButtonHelp(window, -1, 0);
            flagObjAdvance(&window->dialogJob);
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
            flagObjAdvance(&window->dialogJob);
        }
    }
}
}
