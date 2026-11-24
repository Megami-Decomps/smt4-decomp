#ifndef GFX_CAMERADIRECTION_H
#define GFX_CAMERADIRECTION_H

#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Computes the normalized direction from the camera origin to the target. */
void renderGetDirectionToTarget(const Vector4 *target, Vector4 *output); /* IV */
void renderGetDirectionToTarget(const Vector4 *target, Vector4 *output); /* Apocalypse */

} /* extern "C" */

#endif
