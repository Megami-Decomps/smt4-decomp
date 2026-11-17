#include "font/InfoWinA.h"

extern "C" {

void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 a, s32 b);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 a, s32 b);


/* If the scene is running, moves it to state 5 with a 30-frame timer and restarts its members (the second one too in mode 2).
 * Callers pass an `immediate` flag that this function does not read. */
void dialogClose(s32 immediate)
{
    InfoWindowA *scene = g_infoWin;

    if (scene->state != 0) {
        scene->state = 5;
        scene->timer = 0x1E;
        uiSpriteSetKeyframe(&scene->background, 1, 0);
        uiSpriteSetImageKeyframe(&scene->background, 1, 0);
        if (scene->active == 2) {
            uiSpriteSetKeyframe(&scene->content, 4, 0);
            return;
        }
    }
}

} /* extern "C" */
