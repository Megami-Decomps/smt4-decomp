#include "ui/SpriteWindow.h"

extern "C" {

extern SpriteWindow *g_sWin; /* 0x57f57c */
s32 FUN_001517b4(s32 first, s32 second);
s32 slotIsActive(s32 id);
void uiSpriteSetImageKeyframe(ByteStateWork *sprite, s32 keyframe, s32 frame);
void FUN_0019e330(ByteStateWork *sprite, s32 keyframe, s32 frame);
void workSetStateByte(ByteStateWork *work, u8 state);

/* Moves an active sprite window to state 3 and restarts its sprite animation (or clears its state byte when a sound or flag blocks it). */
void FUN_003d3738(void)
{
    SpriteWindow *window = g_sWin;

    if (window->state == 0) {
        return;
    }
    window->state = 3;
    window->phase = 0;
    if (FUN_001517b4(9, 2) == 0 && slotIsActive(6) == 0) {
        uiSpriteSetImageKeyframe(&window->sprite, 1, 0);
        FUN_0019e330(&window->sprite, 1, 0);
    } else {
        workSetStateByte(&window->sprite, 0);
    }
}

} /* extern "C" */
