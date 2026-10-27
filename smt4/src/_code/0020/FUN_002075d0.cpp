/* NON_MATCHING: the origin words are copied through core registers (retail loads all three into s1-s3 and stores them with one vstmia) and the normalising divides store one by one (retail stores s2-s4 with one vstmia and copies the result with ldm/ldr). */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include <math.h>

static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

static __inline void vector4Subtract(Vector4 *minuend, const Vector4 *subtrahend)
{
    minuend->x -= subtrahend->x;
    minuend->y -= subtrahend->y;
    minuend->z -= subtrahend->z;
    minuend->w -= subtrahend->w;
}

extern "C" {
extern CameraVectorScratch DAT_004ea81c;
void FUN_0028c92c(Matrix44* output);

// Compute the normalized XYZ direction from the current camera origin to a target.
void FUN_002075d0(const Vector4* target, Vector4* output)
{
    Matrix44 view;
    FUN_0028c92c(&view);
    vector4Copy(target, &DAT_004ea81c.direction);
    DAT_004ea81c.origin.x = view.values[3];
    DAT_004ea81c.origin.y = view.values[7];
    DAT_004ea81c.origin.z = view.values[11];
    DAT_004ea81c.origin.w = 0.0f;
    vector4Subtract(&DAT_004ea81c.direction, &DAT_004ea81c.origin);
    f32 length = sqrtf(DAT_004ea81c.direction.x * DAT_004ea81c.direction.x +
                       DAT_004ea81c.direction.y * DAT_004ea81c.direction.y +
                       DAT_004ea81c.direction.z * DAT_004ea81c.direction.z);
    if (length > 0.0f) {
        DAT_004ea81c.direction.x /= length;
        DAT_004ea81c.direction.y /= length;
        DAT_004ea81c.direction.z /= length;
    }
    *output = DAT_004ea81c.direction;
}
}
