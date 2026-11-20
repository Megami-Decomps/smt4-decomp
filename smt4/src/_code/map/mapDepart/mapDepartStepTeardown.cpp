#include "map/mapDepart.h"

extern "C" {

void navigationFinishReadyField(void);
void mapGimicReset(void);
void mapDepartClearExtra(void);
s32 mapGimicIsIdle(void);
s32 mapModelsPollDeferredDestroy(void);

extern MapDepartSequence g_mapDepartSequence;

/* Runs one step of the map departure teardown; returns 1 once deferred model destruction has
 * finished (the steps then start over), else 0. */
s32 mapDepartStepTeardown(void)
{
    switch (g_mapDepartSequence.teardownStep) {
    case MAP_DEPART_TEARDOWN_START:
        navigationFinishReadyField();
        mapGimicReset();
        g_mapDepartSequence.teardownStep = MAP_DEPART_TEARDOWN_WAIT_GIMMICKS;
        break;
    case MAP_DEPART_TEARDOWN_WAIT_GIMMICKS:
        if (mapGimicIsIdle()) {
            g_mapDepartSequence.teardownStep = MAP_DEPART_TEARDOWN_CLEAR;
        }
        break;
    case MAP_DEPART_TEARDOWN_CLEAR:
        mapDepartClearExtra();
        g_mapDepartSequence.teardownStep = MAP_DEPART_TEARDOWN_WAIT_MODELS;
        break;
    case MAP_DEPART_TEARDOWN_WAIT_MODELS:
        if (mapModelsPollDeferredDestroy()) {
            g_mapDepartSequence.teardownStep = MAP_DEPART_TEARDOWN_START;
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
