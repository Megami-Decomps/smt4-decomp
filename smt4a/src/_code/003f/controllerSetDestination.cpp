#include "shard/W5_W5Match7_ControllerPose.h"

extern "C" {



void controllerSetDestination(ControllerPose *owner, const MapVector *position)
{
    owner->destination = *position;
}

} /* extern "C" */
