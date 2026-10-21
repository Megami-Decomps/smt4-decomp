#include "shard/W5_W5Match7_AnimatedObject.h"

extern "C" {

void FUN_003f9ac4(AnimatedObject *object, f32 scale);

void controllerRefreshAtUnitScale(AnimatedObject *object)
{
    object->progress = 0.0f;
    FUN_003f9ac4(object, 1.0f);
    object->progress = 0.0f;
}

} /* extern "C" */
