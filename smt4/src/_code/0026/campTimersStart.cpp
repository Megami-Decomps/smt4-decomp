#include "camp/CampState.h"

extern "C" {

int timerStart(void *timer, int a, int b);

/* Starts the camp's sprite animations: the first one, the eight at sprites[5..12] and sprites[4]. */
void campTimersStart(void)
{
    CampState *scene = g_camp;
    int i;

    timerStart(&g_camp->sprites[0], 3, 0);
    i = 0;
    do {
        timerStart(&scene->sprites[5 + i], 3, 0);
        i++;
    } while (i < 8);
    timerStart(&scene->sprites[4], 3, 0);
}

} /* extern "C" */
