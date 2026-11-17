/* NON_MATCHING: same operations; retail loads y, z and x separately (x last) and stores z, w before x/y, where this loads x..z with one vldmia and stores all four at once. */
#include "common.h"
#include "gfx/VectorScratch.h"

namespace {

// Shared effect state: a working point and the matrix that transforms it.
}

extern "C" {

// point = (point.x, point.y, point.z, 1) * matrix
static inline void transformPoint(Vector4 *point, const Vector4 *matrix)
{
    f32 x = point->x;
    f32 y = point->y;
    f32 z = point->z;
    Vector4 result;

    result.x = x * matrix[0].x + y * matrix[1].x + z * matrix[2].x + matrix[3].x;
    result.y = x * matrix[0].y + y * matrix[1].y + z * matrix[2].y + matrix[3].y;
    result.z = x * matrix[0].z + y * matrix[1].z + z * matrix[2].z + matrix[3].z;
    result.w = x * matrix[0].w + y * matrix[1].w + z * matrix[2].w + matrix[3].w;
    *point = result;
}

/* Transform the working point by the shared matrix. */
void FUN_0024317c(void)
{
    transformPoint(&g_vectorScratch.first.vector, g_vectorScratch.matrix.vectors);
}
} /* extern "C" */
