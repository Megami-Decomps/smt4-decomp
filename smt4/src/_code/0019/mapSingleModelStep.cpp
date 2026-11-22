/* NON_MATCHING: retail keeps the work pointer's pool address in r2 and the constant 1 in r3 (the build swaps them). Reading the state into a local declared first (`s32 state = g_mapModelWork->state; switch (state)`) is IDENTICAL, but only in that declaration order and only with the always-zero `result` local, so it is not kept. */
#include "map/SingleModelState.h"

extern "C" {

extern MapSingleModelWork *g_mapModelWork;

/* Steps the placed model: after 40 frames (or on request) it changes its motion, and 30 frames after the
 * request it is removed. */
s32 mapSingleModelStep(void)
{
    MapSingleModelState *model;
    s32 result = 0;

    switch (g_mapModelWork->state) {
    case 0:
    case 1:
        break;
    case 2:
        model = &g_mapModelWork->model;
        if (++g_mapModelWork->timer == 40) {
            model->motion = 1;
            model->changed = 1;
        }
        if (g_mapModelWork->requested) {
            model->motion = 2;
            model->changed = 1;
            g_mapModelWork->state = 3;
            g_mapModelWork->timer = 0;
        }
        break;
    case 3:
        model = &g_mapModelWork->model;
        if (++g_mapModelWork->timer > 30) {
            model->active = 0;
            g_mapModelWork->state = 1;
            g_mapModelWork->timer = 0;
        }
        break;
    }
    return result;
}

} /* extern "C" */
