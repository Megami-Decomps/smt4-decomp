/* NON_MATCHING: CSE replaces retail global reloads, scratch copies use GPR blocks, and an unused native local-z clear is omitted; O2 may change optimization. */
#include <math.h>
#include "shard/S1Mover.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match3_EffectColor.h"

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
extern EffectColorProductState DAT_004ea81c;
extern ProjectionScratch g_effectProjectionScratch;
u32 FUN_002c501c(void);
void FUN_002630e0(Vec3f*, s32, u32, const Vec3f*);
void FUN_0028c92c(Matrix44*);

/* Project the working point and scale a world-space radius by camera distance. */
f32 screenEffectProjectWorldRadius(f32 radius)
{
    const EffectColor original = DAT_004ea81c.color;
    const u32 camera = FUN_002c501c();
    g_effectProjectionScratch.point = DAT_004ea81c.color;
    const Vec3f input = {
        g_effectProjectionScratch.point.red, g_effectProjectionScratch.point.green, g_effectProjectionScratch.point.blue
    };
    ProjectedPoint projected;
    FUN_002630e0(&projected.coordinates, 0, camera, &input);
    projected.value.alpha = 0.0f;
    const EffectColor screenPoint = projected.value;
    DAT_004ea81c.color = screenPoint;

    Matrix44 matrix;
    FUN_0028c92c(&matrix);
    DAT_004ea81c.color = original;
    g_effectProjectionScratch.point.red = matrix.values[3];
    g_effectProjectionScratch.point.green = matrix.values[7];
    g_effectProjectionScratch.point.blue = matrix.values[11];
    DAT_004ea81c.factor = g_effectProjectionScratch.point;

    // The shared working register is reused for the camera-relative difference.
    DAT_004ea81c.color.red -= DAT_004ea81c.factor.red;
    DAT_004ea81c.color.green -= DAT_004ea81c.factor.green;
    DAT_004ea81c.color.blue -= DAT_004ea81c.factor.blue;
    DAT_004ea81c.color.alpha -= DAT_004ea81c.factor.alpha;
    const f32 distance = sqrtf(
        DAT_004ea81c.color.red * DAT_004ea81c.color.red +
        DAT_004ea81c.color.green * DAT_004ea81c.color.green +
        DAT_004ea81c.color.blue * DAT_004ea81c.color.blue);
    DAT_004ea81c.color = screenPoint;
    const f32 scaledRadius = radius * 650.0f / distance;
    return scaledRadius > 1500.0f ? 1500.0f : scaledRadius;
}
} // extern "C"
