/* NON_MATCHING: the initial scratch copy's address registers and scheduling differ; the xyz reloads and the
 * final four-word store now match. */
#include "code/Code002c.h"
#include "gfx/VectorScratch.h"
#include "map/MapVector.h"

/* The vector-copy inline used by the adjacent scratch operations. */
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

extern "C" {
extern Vector4 DAT_00472550;
void cameraProjectToScreen(f32 *screen, s32 display, void *camera, const MapVector *world);

/* Projects the scratch point to screen space, retaining the original in the effect scratch vector. */
f32 FUN_00207ee8(void)
{
    void *camera = (void *)asdCameraGetSavedRenderPairs();
    vector4Copy(&g_vectorScratch.first.vector, &DAT_00472550);
    MapVector world = { DAT_00472550.x, DAT_00472550.y, DAT_00472550.z };
    Vector4 screen;
    cameraProjectToScreen(&screen.x, 0, camera, &world);
    screen.w = 0.0f;
    vector4Copy(&screen, &g_vectorScratch.first.vector);
    return screen.z;
}

} /* extern "C" */
