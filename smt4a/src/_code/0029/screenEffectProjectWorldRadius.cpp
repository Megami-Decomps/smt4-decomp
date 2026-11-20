/* NON_MATCHING: camera vector scratch copies and temporary projection frame differ from retail. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include <math.h>
#include "code/Code0015.h"
#include "gfx/VectorScratch.h"
extern "C" {
extern Vector4 g_effectRingScratchColor;
void cameraProjectToScreen(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
void renderGetCameraViewMatrix(Matrix44 *output);

f32 screenEffectProjectWorldRadius(f32 size)
{
    Vector4 saved = g_vectorScratch.first.vector;
    const ProjectionMatrices *camera = reinterpret_cast<const ProjectionMatrices *>(asdCameraGetSavedRenderPairs());
    g_effectRingScratchColor = g_vectorScratch.first.vector;
    f32 world[3] = {g_effectRingScratchColor.x, g_effectRingScratchColor.y, g_effectRingScratchColor.z};
    Vector4 projected;
    cameraProjectToScreen(&projected.x, 0, camera, world);
    projected.w = 0.0f;
    g_vectorScratch.first.vector = projected;
    Matrix44 view;
    renderGetCameraViewMatrix(&view);
    g_vectorScratch.first.vector = saved;
    g_effectRingScratchColor.x = view.values[3];
    g_effectRingScratchColor.y = view.values[7];
    g_effectRingScratchColor.z = view.values[11];
    g_vectorScratch.second.vector = g_effectRingScratchColor;
    g_vectorScratch.first.vector.x -= g_vectorScratch.second.vector.x;
    g_vectorScratch.first.vector.y -= g_vectorScratch.second.vector.y;
    g_vectorScratch.first.vector.z -= g_vectorScratch.second.vector.z;
    g_vectorScratch.first.vector.w -= g_vectorScratch.second.vector.w;
    f32 distance = sqrtf(g_vectorScratch.first.vector.x * g_vectorScratch.first.vector.x +
                         g_vectorScratch.first.vector.y * g_vectorScratch.first.vector.y +
                         g_vectorScratch.first.vector.z * g_vectorScratch.first.vector.z);
    g_vectorScratch.first.vector = projected;
    f32 scale = (size * 650.0f) / distance;
    if (scale > 1500.0f)
        scale = 1500.0f;
    return scale;
}
}
