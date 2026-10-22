/* NON_MATCHING: same operations; retail loads y, z and x separately (x last) and stores z, w before x/y, where this loads x..z with one vldmia and stores all four at once. */
#include "common.h"

namespace {
struct Vec4 {
    f32 x, y, z, w;
};

// Shared effect state: a working point and the matrix that transforms it.
struct EffectTransformState {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vec4 point;
    /* 0x110 */ u8 unk110[0x30];
    /* 0x140 */ Vec4 matrix[4];
};
}

extern "C" {

extern EffectTransformState DAT_006471dc;

// point = (point.x, point.y, point.z, 1) * matrix
static inline void transformPoint(Vec4 *point, const Vec4 *matrix)
{
    f32 x = point->x;
    f32 y = point->y;
    f32 z = point->z;
    Vec4 result;

    result.x = x * matrix[0].x + y * matrix[1].x + z * matrix[2].x + matrix[3].x;
    result.y = x * matrix[0].y + y * matrix[1].y + z * matrix[2].y + matrix[3].y;
    result.z = x * matrix[0].z + y * matrix[1].z + z * matrix[2].z + matrix[3].z;
    result.w = x * matrix[0].w + y * matrix[1].w + z * matrix[2].w + matrix[3].w;
    *point = result;
}

/* Transform the working point by the shared matrix. */
void FUN_0038b810(void)
{
    transformPoint(&DAT_006471dc.point, DAT_006471dc.matrix);
}
} /* extern "C" */
