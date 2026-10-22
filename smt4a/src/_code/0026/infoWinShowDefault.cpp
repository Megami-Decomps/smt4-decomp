#include "shard/W4_Match3_InfoWindow.h"

extern "C" {

extern void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 arg);
extern void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);

void infoWinShowDefault(void)
{
    InfoWindow *window = g_infoWin;

    window->state = 1;
    uiSpriteSetKeyframe(window->sprite, 0, 0);
    uiSpriteSetImageKeyframe(window->sprite, 0, 0);
    window->style = 1;
    window->shown = 1;
    window->timer = 30;
    window->active = 3;
    window->unk32D = 0;
}

} /* extern "C" */
