/* NON_MATCHING: dialog cursor base-address folding, signed-load optimization and removed-call NOPs differ. */
#include "ui/SceneWindowWork.h"

extern "C" {
void FUN_0047306c(u32 *dialog, s32 value, s32 mode, s32 flags);
void FUN_00477d10(SceneWindowWork *window, s32 value, s32 mode);
void jobOwnerFreeSlotAndStop(u32 *dialog);
void flagObjAdvance(u32 *dialog);
s32 FUN_004d0584(void);
s32 inputIsQuestMenuPressed(void);
void eventQueueAddUniqueIfValid(u32 event);

/* Open the quest dialog, handle confirmation/menu cancellation, and release its callback on exit. */
void FUN_00477744(SceneWindowWork *window)
{
    u32 *dialog = &window->dialogJob;
    switch (window->transition.phase) {
    case 0:
        FUN_0047306c(dialog, 100, 1, 0);
        FUN_00477d10(window, 0, 1);
        window->transition.phase = 1;
        break;
    case 1:
        if (window->dialog.cursor.confirmed != 0) {
            if (FUN_004d0584() != 0) {
                eventQueueAddUniqueIfValid(0x0100020E);
                FUN_00477d10(window, -1, 0);
                flagObjAdvance(dialog);
                window->transition.phase = 2;
            } else if (inputIsQuestMenuPressed() != 0) {
                eventQueueAddUniqueIfValid(0x0100020E);
                window->transition.state = 15;
                window->transition.phase = 0;
                if (window->transition.callback != NULL) {
                    window->transition.callback->vtable->destroy(window->transition.callback);
                    window->transition.callback = NULL;
                }
                flagObjAdvance(dialog);
            }
        }
        break;
    case 2:
        if (window->dialog.cursor.confirmed != 0) {
            jobOwnerFreeSlotAndStop(dialog);
            window->transition.state = 3;
            window->transition.phase = 0;
            if (window->transition.callback != NULL) {
                window->transition.callback->vtable->destroy(window->transition.callback);
                window->transition.callback = NULL;
            }
        }
        break;
    }
}
}
