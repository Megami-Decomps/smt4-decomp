#include "status/StatusDownA.h"

extern "C" {



/* Switches the status screen to state 7, remembering the previous state; returns the screen (NULL if none). */
StatusDownStateA *stateHolderEnterState7(void)
{
    StatusDownStateA *scene = g_statusDown;

    if (scene != NULL) {
        scene->track.previous = scene->track.state;
        scene->track.state = 7;
    }
    return scene;
}

} /* extern "C" */
