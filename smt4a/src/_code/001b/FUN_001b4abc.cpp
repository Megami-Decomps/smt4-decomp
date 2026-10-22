/* NON_MATCHING: ARMCC caches vector components and uses core-register copies instead of retail's VFP reloads. */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include <math.h>

extern "C" {
extern CameraVectorScratch DAT_006471dc;
void FUN_001bced4(Matrix44* output);

// Compute the normalized XYZ direction from the current camera origin to a target.
void FUN_001b4abc(const Vector4* target, Vector4* output)
{
    Matrix44 view;
    FUN_001bced4(&view);
    DAT_006471dc.direction = *target;
    DAT_006471dc.origin.x = view.values[3];
    DAT_006471dc.origin.y = view.values[7];
    DAT_006471dc.origin.z = view.values[11];
    DAT_006471dc.origin.w = 0.0f;
    DAT_006471dc.direction.x -= DAT_006471dc.origin.x;
    DAT_006471dc.direction.y -= DAT_006471dc.origin.y;
    DAT_006471dc.direction.z -= DAT_006471dc.origin.z;
    DAT_006471dc.direction.w -= DAT_006471dc.origin.w;
    f32 length = sqrtf(DAT_006471dc.direction.x * DAT_006471dc.direction.x +
                       DAT_006471dc.direction.y * DAT_006471dc.direction.y +
                       DAT_006471dc.direction.z * DAT_006471dc.direction.z);
    if (length > 0.0f) {
        DAT_006471dc.direction.x /= length;
        DAT_006471dc.direction.y /= length;
        DAT_006471dc.direction.z /= length;
    }
    *output = DAT_006471dc.direction;
}
}
