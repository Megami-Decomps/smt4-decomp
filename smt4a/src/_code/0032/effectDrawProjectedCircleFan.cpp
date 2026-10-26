/* NON_MATCHING: projection expressions reassociate and native 280-byte frame shrinks to256; -O2 candidate. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/S1Mover.h"
#include "code/Code0015.h"

extern "C" {
extern void *g_renderCtx;
const Matrix44 *block5B8OwnerGetBlock(void *owner);
void memCopyWords(const void *source, void *destination, u32 bytes);
void FUN_002a1850(Vec3f *out, s32 screen, void *projection, const Vec3f *position);
f32 FUN_001b63b0(f32 phase);
f32 FUN_001a1ee0(f32 phase);
void FUN_0032c810(u32 firstColor, u32 secondColor, Point2 first, Point2 second,
                  f32 depth, f32 thickness);

void effectDrawProjectedCircleFan(const Vec3f *center, u32 color, const Matrix44 *transform, f32 radius, f32 height)
{
    void *projection = reinterpret_cast<void *>(FUN_00152f54());
    if (transform == NULL)
        transform = block5B8OwnerGetBlock(g_renderCtx);
    Matrix44 matrix;
    memCopyWords(transform, &matrix, sizeof(matrix));
    matrix.values[3] = center->x;
    matrix.values[7] = center->y;
    matrix.values[11] = center->z;
    Vec3f projectedCenter;
    FUN_002a1850(&projectedCenter, 0, projection, center);
    Point2 vertices[11];
    u32 colors[11];
    f32 angle = 0.0f;
    for (u32 index = 0; index < 10; ++index) {
        f32 phase = angle * 40.7436638f;
        f32 x = FUN_001b63b0(phase) * radius;
        f32 z = FUN_001a1ee0(phase) * radius;
        f32 reciprocalW = 1.0f / ((matrix.values[13] * height + matrix.values[14] * z) +
                                  (matrix.values[15] + matrix.values[12] * x));
        Vec3f position = {
            ((matrix.values[1] * height + matrix.values[2] * z) + (matrix.values[3] + matrix.values[0] * x)) * reciprocalW,
            ((matrix.values[5] * height + matrix.values[6] * z) + (matrix.values[7] + matrix.values[4] * x)) * reciprocalW,
            ((matrix.values[9] * height + matrix.values[10] * z) + (matrix.values[11] + matrix.values[8] * x)) * reciprocalW
        };
        Vec3f projected;
        FUN_002a1850(&projected, 0, projection, &position);
        Point2 point = { projected.x, projected.y };
        Point2 screenCenter = { projectedCenter.x, projectedCenter.y };
        vertices[index] = point;
        FUN_0032c810(color, color, point, screenCenter, 0.0f, 1.0f);
        angle += 0.628318548f;
        colors[index] = color;
    }
    colors[10] = color;
    vertices[10] = vertices[0];
    for (s32 index = 0; index < 10; ++index)
        FUN_0032c810(colors[index], colors[index + 1], vertices[index], vertices[index + 1], 0.0f, 1.0f);
}
}
