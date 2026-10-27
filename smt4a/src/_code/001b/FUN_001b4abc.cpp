/* NON_MATCHING: the origin words are copied through core registers (retail loads all three into s1-s3 and stores them with one vstmia) and the normalising divides store one by one (retail stores s2-s4 with one vstmia and copies the result with ldm/ldr). */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include <math.h>

static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

static __inline void vector4Set(Vector4 *vector, f32 x, f32 y, f32 z, f32 w)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
    vector->w = w;
}

static __inline void vector4Subtract(Vector4 *minuend, const Vector4 *subtrahend)
{
    minuend->x -= subtrahend->x;
    minuend->y -= subtrahend->y;
    minuend->z -= subtrahend->z;
    minuend->w -= subtrahend->w;
}

extern "C" {
extern CameraVectorScratch DAT_006471dc;
void FUN_001bced4(Matrix44* output);

// Compute the normalized XYZ direction from the current camera origin to a target.
void FUN_001b4abc(const Vector4* target, Vector4* output)
{
    Matrix44 view;
    FUN_001bced4(&view);
    vector4Copy(target, &DAT_006471dc.direction);
    DAT_006471dc.origin.x = view.values[3];
    DAT_006471dc.origin.y = view.values[7];
    DAT_006471dc.origin.z = view.values[11];
    DAT_006471dc.origin.w = 0.0f;
    vector4Subtract(&DAT_006471dc.direction, &DAT_006471dc.origin);
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
