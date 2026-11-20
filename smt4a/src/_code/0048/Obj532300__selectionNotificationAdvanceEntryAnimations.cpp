#include "ui/UiSpriteApi.h"
#include "ui/SelectionNotification.h"

extern "C" void naviRefreshBackgroundAndFeedback(SelectionNotificationState *work);
extern "C" s32 buttonHelpIsNotActive(void);
struct ObjectFlagState;

extern "C" void _ZN9Obj53230043selectionNotificationAdvanceEntryAnimationsEv(SelectionNotificationState *work)
{
    if (work->phase == 0) {
        uiSpriteSetImageKeyframe(&work->headings[0], 3, 0);
        uiSpriteSetImageKeyframe(&work->headings[1], 5, 0);
        naviRefreshBackgroundAndFeedback(work);
        work->phase = 1;
        return;
    }
    if (work->phase == 1) {
        for (s32 index = 0; index < 6; ++index) {
            uiSpriteAdvanceAnimation(&work->entries[index], 1.0f);
        }
        uiSpriteAdvanceAnimation(&work->auxiliary[1], 1.0f);
        uiSpriteAdvanceAnimation(&work->auxiliary[0], 1.0f);
        if (uiSpriteGetCompletionState((UiSpriteState *)(reinterpret_cast<const ObjectFlagState *>(&work->entries[5]))) && buttonHelpIsNotActive()) {
            work->state = 2;
            work->phase = 0;
        }
    }
}
