/* NON_MATCHING: CSE replaces retail global reloads, scratch copies use GPR blocks, and an unused native local-z clear is omitted; O2 may change optimization. */
#include <math.h>
#include "shard/S1Mover.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "gfx/VectorScratch.h"

namespace {
struct ProjectionScratch {
    u8 unk00[0x10];
    EffectColor point;
};
// The SDK writes xyz; the shared working register also carries a fourth component.
union ProjectedPoint {
    Vec3f coordinates;
    EffectColor value;
};
}

extern "C" {
extern ProjectionScratch g_effectProjectionScratch;
u32 asdCameraGetSavedRenderPairs(void);
void cameraProjectToScreen(Vec3f*, s32, u32, const Vec3f*);
void renderGetCameraViewMatrix(Matrix44*);

/* Project the working point and scale a world-space radius by camera distance. */
f32 screenEffectProjectWorldRadius(f32 radius)
{
    const EffectColor original = g_vectorScratch.first.color;
    const u32 camera = asdCameraGetSavedRenderPairs();
    g_effectProjectionScratch.point = g_vectorScratch.first.color;
    const Vec3f input = {
        g_effectProjectionScratch.point.red, g_effectProjectionScratch.point.green, g_effectProjectionScratch.point.blue
    };
    ProjectedPoint projected;
    cameraProjectToScreen(&projected.coordinates, 0, camera, &input);
    projected.value.alpha = 0.0f;
    const EffectColor screenPoint = projected.value;
    g_vectorScratch.first.color = screenPoint;

    Matrix44 matrix;
    renderGetCameraViewMatrix(&matrix);
    g_vectorScratch.first.color = original;
    g_effectProjectionScratch.point.red = matrix.values[3];
    g_effectProjectionScratch.point.green = matrix.values[7];
    g_effectProjectionScratch.point.blue = matrix.values[11];
    g_vectorScratch.second.color = g_effectProjectionScratch.point;

    // The shared working register is reused for the camera-relative difference.
    g_vectorScratch.first.color.red -= g_vectorScratch.second.color.red;
    g_vectorScratch.first.color.green -= g_vectorScratch.second.color.green;
    g_vectorScratch.first.color.blue -= g_vectorScratch.second.color.blue;
    g_vectorScratch.first.color.alpha -= g_vectorScratch.second.color.alpha;
    const f32 distance = sqrtf(
        g_vectorScratch.first.color.red * g_vectorScratch.first.color.red +
        g_vectorScratch.first.color.green * g_vectorScratch.first.color.green +
        g_vectorScratch.first.color.blue * g_vectorScratch.first.color.blue);
    g_vectorScratch.first.color = screenPoint;
    const f32 scaledRadius = radius * 650.0f / distance;
    return scaledRadius > 1500.0f ? 1500.0f : scaledRadius;
}
} // extern "C"
