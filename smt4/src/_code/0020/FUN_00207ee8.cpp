/* NON_MATCHING: retail copies the first word of DAT_00472550 into the projection input with a core ldr/str through a copied
 * address register (add r1, ip, #0) where the build reuses s0, and writes the screen vector back as four core words
 * (ldm; vmov ip, s0; stm) where the build stores three words and the cleared w separately. */
#include "map/mapDepart.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "code/Code002c.h"
#include "gfx/VectorScratch.h"

extern "C" {
extern Vector4 DAT_00472550;
void FUN_002630e0(f32 *screen, s32 display, void *camera, const MapVector *world);

// Projects the camera scratch direction to screen space and stores it back (w cleared),
// keeping the previous direction in DAT_00472550; returns the projected depth.
f32 FUN_00207ee8(void)
{
    void *camera = reinterpret_cast<void *>(asdCameraGetSavedRenderPairs());
    Vector4 *previous = &DAT_00472550;
    *previous = g_vectorScratch.first.vector;
    MapVector world = { previous->x, previous->y, previous->z };
    Vector4 screen;
    FUN_002630e0(&screen.x, 0, camera, &world);
    screen.w = 0.0f;
    g_vectorScratch.first.vector = screen;
    return screen.z;
}
}
