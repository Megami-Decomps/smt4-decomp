#ifndef SHARD_CONTROLLERSETPOSITION_H
#define SHARD_CONTROLLERSETPOSITION_H

#include "common.h"
#include "shard/W5_W5Match7_ControllerPose.h"

#ifdef __cplusplus
extern "C" {
#endif

void controllerSetPosition(ControllerPose *owner, f32 x, f32 y, f32 z);

#ifdef __cplusplus
}
#endif

#endif
