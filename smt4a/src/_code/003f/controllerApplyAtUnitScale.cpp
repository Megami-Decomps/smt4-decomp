#include "shard/W5_W5Match7_AnimatedObject.h"

extern "C" {

void cameraAnimationSampleAndAdvance(AnimatedObject *object, f32 scale);

void controllerApplyAtUnitScale(AnimatedObject *object)
{
    object->progress = 0.0f;
    cameraAnimationSampleAndAdvance(object, 1.0f);
    object->progress = 0.0f;
}

} /* extern "C" */
