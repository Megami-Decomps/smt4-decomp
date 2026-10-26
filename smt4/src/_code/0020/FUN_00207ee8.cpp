/* NON_MATCHING: retail copies the first three words of DAT_00472550 into the projection input with three core ldr/str through a copied address register and the vector store/load matches; this build copies them with a VFP vstmia, and the write-back of the screen vector differs. */
#include "gfx/CameraVectorScratch.h"
#include "map/mapDepart.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "code/Code002c.h"

extern "C" {
extern CameraVectorScratch DAT_004ea81c;
extern Vector4 DAT_00472550;
void FUN_002630e0(f32 *screen, s32 display, void *camera, const MapVector *world);

// Projects the camera scratch direction to screen space and stores it back (w cleared),
// keeping the previous direction in DAT_00472550.
void FUN_00207ee8(void)
{
    void *camera = reinterpret_cast<void *>(FUN_002c501c());
    Vector4 screen;

    Vector4 *previous = &DAT_00472550;
    *previous = DAT_004ea81c.direction;
    MapVector world = *(MapVector *)previous;
    FUN_002630e0(&screen.x, 0, camera, &world);
    screen.w = 0.0f;
    DAT_004ea81c.direction = screen;
}
}
