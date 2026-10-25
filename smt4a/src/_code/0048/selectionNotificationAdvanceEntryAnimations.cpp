#include "ui/SelectionNotification.h"

extern "C" void FUN_00163aa4(UiSpriteState *sprite, f32 delta);
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 frame);
extern "C" void FUN_0048a378(SelectionNotificationState *work);
extern "C" s32 buttonHelpIsNotActive(void);
struct ObjectFlagState;
extern "C" s32 objectGetSignedFlag(const ObjectFlagState *state);

extern "C" void selectionNotificationAdvanceEntryAnimations(SelectionNotificationState *work)
{
    if (work->phase == 0) {
        uiSpriteSetImageKeyframe(&work->headings[0], 3, 0);
        uiSpriteSetImageKeyframe(&work->headings[1], 5, 0);
        FUN_0048a378(work);
        work->phase = 1;
        return;
    }
    if (work->phase == 1) {
        for (s32 index = 0; index < 6; ++index) {
            FUN_00163aa4(&work->entries[index], 1.0f);
        }
        FUN_00163aa4(&work->auxiliary[1], 1.0f);
        FUN_00163aa4(&work->auxiliary[0], 1.0f);
        if (objectGetSignedFlag(reinterpret_cast<const ObjectFlagState *>(&work->entries[5])) && buttonHelpIsNotActive()) {
            work->state = 2;
            work->phase = 0;
        }
    }
}
