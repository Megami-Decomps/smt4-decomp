#include "ui/UiSpriteApi.h"
#include "camp/CampState.h"

extern "C" {


/* Starts the camp's sprite animations: the first one, the eight at sprites[5..12] and sprites[4]. */
void campTimersStart(void)
{
    CampState *scene = g_camp;
    int i;

    uiSpriteSetKeyframe(&g_camp->sprites[0], 3, 0);
    i = 0;
    do {
        uiSpriteSetKeyframe(&scene->sprites[5 + i], 3, 0);
        i++;
    } while (i < 8);
    uiSpriteSetKeyframe(&scene->sprites[4], 3, 0);
}

} /* extern "C" */
