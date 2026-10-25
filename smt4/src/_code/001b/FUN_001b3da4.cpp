/* NON_MATCHING: instructions match, but the global-address literal follows the float constants instead of preceding them. */
/* Resets map camera controls, scalar tracks, and transition defaults. */
#include "map/MapCameraWork.h"

extern "C" {
extern MapCameraGlobals DAT_004474f0;
void FUN_002df5f8(void);

void FUN_001b3da4(void)
{
    MapCameraWork *work = DAT_004474f0.work;
    work->states[0] = 0;
    work->states[1] = 0;
    work->states[2] = 0;
    work->tracks[0].state = 0;
    work->target = -1;
    work->tracks[0].value = 100.0f;
    work->tracks[1].value = 220.0f;
    work->tracks[2].value = 0.0f;
    work->tracks[3].value = 700.0f;
    work->tracks[4].value = 42.0f;
    work->updateFlags = 0;
    work->active = 0;
    work->scale = 1.0f;
    work->values[0] = 0.0f;
    work->values[1] = 0.0f;
    work->values[2] = 0.0f;
    work->values[3] = 0.0f;
    work->tracking = 0;
    work->moving = 0;
    work->offset[0] = 0.0f;
    work->offset[1] = 0.0f;
    work->offset[2] = 0.0f;
    work->counters[0] = 0;
    work->counters[1] = 0;
    work->range[0] = 0;
    work->range[1] = 0;
    work->range[2] = 0;
    work->range[3] = 0;
    work->parameters[3] = 0.0f;
    work->parameters[4] = 50.0f;
    work->parameters[5] = 0.0f;
    work->parameters[0] = 0.0f;
    work->parameters[6] = 40.0f;
    work->weight = 0.0f;
    work->parameters[1] = 50.0f;
    work->parameters[2] = 100.0f;
    work->enabled = 0;
    work->pending = 0;
    work->duration = 0;
    work->elapsed = 0;
    work->transition[0] = 0.0f;
    work->transition[1] = 0.0f;
    work->transition[2] = 1.0f;
    FUN_002df5f8();
}
}
