#include "common.h"
#include "map/LmapGlobals.h"
#include "map/SingleModelState.h"

extern "C" {
extern MapSingleModelWork *g_mapModelWork;

/* Activate a requested placement using the local scene's position and heading. */
void placementUpdateSceneState(void)
{
    if (g_mapModelWork->state == 1) {
        g_mapModelWork->timer = 0;
        g_mapModelWork->state = 2;
        g_mapModelWork->requested = 0;
        MapSingleModelState *model = &g_mapModelWork->model;
        model->active = 1;
        model->position = g_lmapScene->pose.position;
        model->heading = g_lmapScene->pose.heading;
        model->motion = 0;
        model->changed = 1;
    }
}
}
