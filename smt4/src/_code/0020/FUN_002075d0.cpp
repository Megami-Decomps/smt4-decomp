/* NON_MATCHING: the origin words are copied through core registers (retail loads all three into s1-s3 and stores them with one vstmia) and the normalising divides store one by one (retail stores s2-s4 with one vstmia and copies the result with ldm/ldr). */
#include "shard/W5_W5Match2_PlainData.h"
#include <math.h>
#include "gfx/VectorScratch.h"

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
void renderGetCameraViewMatrix(Matrix44* output);

// Compute the normalized XYZ direction from the current camera origin to a target.
void FUN_002075d0(const Vector4* target, Vector4* output)
{
    Matrix44 view;
    renderGetCameraViewMatrix(&view);
    vector4Copy(target, &g_vectorScratch.first.vector);
    g_vectorScratch.second.vector.x = view.values[3];
    g_vectorScratch.second.vector.y = view.values[7];
    g_vectorScratch.second.vector.z = view.values[11];
    g_vectorScratch.second.vector.w = 0.0f;
    vector4Subtract(&g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
    f32 length = sqrtf(g_vectorScratch.first.vector.x * g_vectorScratch.first.vector.x +
                       g_vectorScratch.first.vector.y * g_vectorScratch.first.vector.y +
                       g_vectorScratch.first.vector.z * g_vectorScratch.first.vector.z);
    if (length > 0.0f) {
        g_vectorScratch.first.vector.x /= length;
        g_vectorScratch.first.vector.y /= length;
        g_vectorScratch.first.vector.z /= length;
    }
    *output = g_vectorScratch.first.vector;
}
}
