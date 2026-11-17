/* NON_MATCHING: camera vector scratch copies and temporary projection frame differ from retail. */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include <math.h>
#include "code/Code0015.h"
extern "C" {
extern CameraVectorScratch g_vectorScratch;
extern Vector4 g_effectRingScratchColor;
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
void renderGetCameraViewMatrix(Matrix44 *output);

f32 screenEffectProjectWorldRadius(f32 size)
{
    Vector4 saved = g_vectorScratch.direction;
    const ProjectionMatrices *camera = reinterpret_cast<const ProjectionMatrices *>(asdCameraGetSavedRenderPairs());
    g_effectRingScratchColor = g_vectorScratch.direction;
    f32 world[3] = {g_effectRingScratchColor.x, g_effectRingScratchColor.y, g_effectRingScratchColor.z};
    Vector4 projected;
    FUN_002a1850(&projected.x, 0, camera, world);
    projected.w = 0.0f;
    g_vectorScratch.direction = projected;
    Matrix44 view;
    renderGetCameraViewMatrix(&view);
    g_vectorScratch.direction = saved;
    g_effectRingScratchColor.x = view.values[3];
    g_effectRingScratchColor.y = view.values[7];
    g_effectRingScratchColor.z = view.values[11];
    g_vectorScratch.origin = g_effectRingScratchColor;
    g_vectorScratch.direction.x -= g_vectorScratch.origin.x;
    g_vectorScratch.direction.y -= g_vectorScratch.origin.y;
    g_vectorScratch.direction.z -= g_vectorScratch.origin.z;
    g_vectorScratch.direction.w -= g_vectorScratch.origin.w;
    f32 distance = sqrtf(g_vectorScratch.direction.x * g_vectorScratch.direction.x +
                         g_vectorScratch.direction.y * g_vectorScratch.direction.y +
                         g_vectorScratch.direction.z * g_vectorScratch.direction.z);
    g_vectorScratch.direction = projected;
    f32 scale = (size * 650.0f) / distance;
    if (scale > 1500.0f)
        scale = 1500.0f;
    return scale;
}
}
