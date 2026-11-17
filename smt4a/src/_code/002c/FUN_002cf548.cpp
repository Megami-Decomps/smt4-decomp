/* NON_MATCHING: retail moves the 0.0f w through ip into a four-register stm for the final Vector4 copy and orders the world-vector copy before the first vldm; armcc stores w separately (vstr). */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "code/Code0015.h"
#include "gfx/VectorScratch.h"

extern "C" {

extern Vector4 g_effectRingScratchColor;

void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);

/* Saves the camera target, projects it through the current camera and returns the resulting z. */
f32 FUN_002cf548(void)
{
    const ProjectionMatrices *camera = reinterpret_cast<const ProjectionMatrices *>(asdCameraGetSavedRenderPairs());
    g_effectRingScratchColor = g_vectorScratch.first.vector;
    f32 world[3] = {g_effectRingScratchColor.x, g_effectRingScratchColor.y, g_effectRingScratchColor.z};
    Vector4 projected;
    FUN_002a1850(&projected.x, 0, camera, world);
    projected.w = 0.0f;
    g_vectorScratch.first.vector = projected;
    return projected.z;
}

} /* extern "C" */
