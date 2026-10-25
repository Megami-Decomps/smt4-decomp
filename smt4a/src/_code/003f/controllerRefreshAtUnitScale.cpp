#include "gfx/CameraMotion.h"

extern "C" {


void controllerRefreshAtUnitScale(AnimatedObject *object, CameraMotionOutput *output, s32 index)
{
    object->progress = 0.0f;
    FUN_003f9ac4(object, output, index, 1.0f);
    object->progress = 0.0f;
}

} /* extern "C" */
