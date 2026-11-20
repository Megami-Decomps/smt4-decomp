#include "gfx/CameraMotion.h"

extern "C" {


void controllerRefreshAtUnitScale(AnimatedObject *object, CameraMotionOutput *output, s32 index)
{
    object->progress = 0.0f;
    cameraMotionSampleAtFrame(object, output, index, 1.0f);
    object->progress = 0.0f;
}

} /* extern "C" */
