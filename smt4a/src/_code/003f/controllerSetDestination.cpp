#include "shard/W5_W5Match7_ControllerPose.h"
#include "shard/W8X15_ModelStatePlayer.h"

extern "C" {



void controllerSetDestination(ControllerPose *owner, const MapVector *position)
{
    owner->destination = *position;
}

} /* extern "C" */
