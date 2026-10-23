/* NON_MATCHING: panel pointer-base hoisting differs in image-exit branch (78 rows each). */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
void uiSpriteSelectAnim(void *sprite, s32 animation);
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 initial);
void uiSpriteSetImageKeyframe(void *sprite, s32 frame, s32 initial);
void ifTouchDecrementTimer();
void FUN_0019e330(void *sprite, s32 enabled, s32 initial);

// Release help touch registrations and start the four panel exit animations.
void FUN_00183318(s32 clearKinds)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        uiSpriteSelectAnim(&work->units[index], 1);
        if (work->kinds[index].kind != 0) {
            if (clearKinds != 0)
                work->kinds[index].kind = 0;
            ifTouchDecrementTimer();
            --work->count;
        }
    }
    if (work->count > 0) {
        for (s32 index = 0; index < work->count; ++index)
            ifTouchDecrementTimer();
        work->count = 0;
    }
    for (s32 index = 0; index < 4; ++index) {
        if (work->unk5E4 == 1) {
            uiSpriteSetKeyframe(&reinterpret_cast<ButtonHelpUnit *>(work->unk37C)[index], 3, 0);
        } else if (work->unk5E4 == 2) {
            ButtonHelpUnit *panel = &reinterpret_cast<ButtonHelpUnit *>(work->unk37C)[index];
            uiSpriteSetImageKeyframe(panel, 1, 0);
            FUN_0019e330(panel, 1, 0);
        } else {
            FUN_0019e330(&reinterpret_cast<ButtonHelpUnit *>(work->unk37C)[index], 0, 1);
        }
    }
    work = g_buttonHelp.work;
    work->unk0C = 0;
    work->state = 3;
}
}
