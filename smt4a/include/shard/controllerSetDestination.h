#ifndef SHARD_CONTROLLERSETDESTINATION_H
#define SHARD_CONTROLLERSETDESTINATION_H

#include "common.h"
#include "shard/W5_W5Match7_ControllerPose.h"

#ifdef __cplusplus
extern "C" {
#endif

void controllerSetDestination(ControllerPose *owner, const MapVector *position);

#ifdef __cplusplus
}
#endif

#endif
