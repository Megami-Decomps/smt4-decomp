/* NON_MATCHING: retail reads the distance through a core register (ldr + vmov) and orders the
 * constant loads differently; the arithmetic and branches otherwise match. */
#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {
f32 FUN_002881bc(f32 angle);

/* Returns the battle camera's visible width for a layer: 0 at the camera distance, 1 for the
 * layer 15 units nearer, 2 for the layer 20 units farther; 0.1 for any other layer. */
f32 FUN_003c1964(s32 layer)
{
    BtlCamera *camera = g_btlMain;
    f32 width = 0.1f;
    f32 distance = camera->offset.z;
    f32 halfFov = camera->fov * 0.5f;
    f32 tangent = FUN_002881bc(halfFov * (1.0f / 180.0f) * 3.14159274f);
    f32 visible = distance / (120.0f / tangent);
    switch (layer) {
    case 0:
        width = visible;
        break;
    case 1:
        width = visible / camera->distance * (camera->distance - 15.0f);
        break;
    case 2:
        width = visible / camera->distance * (camera->distance - -20.0f);
        break;
    }
    return width;
}
}
