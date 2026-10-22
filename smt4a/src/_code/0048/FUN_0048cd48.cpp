/* NON_MATCHING: sprite completion test uses an unsigned byte load instead of retail's signed-load address sequence and branch hint; 57 built versus 60 retail rows. */
#include "ui/SelectionNotification.h"

extern "C" void FUN_00163aa4(UiSpriteState *sprite, f32 delta);
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 frame);
extern "C" void FUN_0048a378(SelectionNotificationState *work);
extern "C" s32 buttonHelpIsNotActive(void);

extern "C" void FUN_0048cd48(SelectionNotificationState *work)
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
        if (work->entries[5].animationFlags.completed && buttonHelpIsNotActive()) {
            work->state = 2;
            work->phase = 0;
        }
    }
}
