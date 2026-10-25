#include "shard/W5_W5Match7_ControllerPose.h"
#include "shard/controllerSetPosition.h"

extern "C" {



void controllerSetPosition(ControllerPose *owner, f32 x, f32 y, f32 z)
{
    owner->position.x = x;
    owner->position.y = y;
    owner->position.z = z;
}

} /* extern "C" */
