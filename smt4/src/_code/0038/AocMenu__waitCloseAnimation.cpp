/* NON_MATCHING: cursor signed-byte load/base calculation and switch NOP placement differ. */
#include "classes/AocMenu.h"
#include "ui/SceneWindowWork.h"

extern "C" {
TimedState *timeInitializeActiveState(TimedState *);
void FUN_0027ea28(void *job, u32 message, s32 argument, s32 flags);
void FUN_0023392c(SceneWindowWork *, s32, s32);
void FUN_0027e9c0(void *job);
void jobOwnerFreeSlotAndStop(void *job);
void eventQueueAddUniqueIfValid(u32 eventId);
s32 buttonHelpHasEnabledEntryForId(u32);

/* Open the dialog, await confirmation, and finish its close transition. */
void AocMenu::waitCloseAnimation()
{
    SceneWindowWork * work = reinterpret_cast<SceneWindowWork *>(this);
    TimedState time;
    timeInitializeActiveState(&time);
    void *job = &work->dialogJob;
    switch (work->transition.phase) {
    case 0:
        FUN_0027ea28(job, 0x67, 0, 0);
        FUN_0023392c(work, 3, 1);
        work->transition.phase = 1;
        break;
    case 1:
        if (work->dialog.cursor.confirmed && buttonHelpHasEnabledEntryForId(0x10)) {
            eventQueueAddUniqueIfValid(0x100016d);
            FUN_0027e9c0(job);
            FUN_0023392c(work, -1, 0);
            work->transition.phase = 2;
        }
        break;
    case 2:
        if (work->dialog.cursor.confirmed) {
            jobOwnerFreeSlotAndStop(job);
            work->transition.state = 0xf;
            work->transition.phase = 0;
            if (work->transition.callback != NULL) {
                ScreenTransitionCallback *callback = work->transition.callback;
                callback->vtable->destroy(callback);
                work->transition.callback = NULL;
            }
        }
        break;
    }
}
}
