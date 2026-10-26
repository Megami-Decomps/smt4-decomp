/* NON_MATCHING: retail reloads the first three words of DAT_00472550 through a copied address register after the vector store; ours forwards the loaded values and splits the stores. */
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

    DAT_00472550 = DAT_004ea81c.direction;
    MapVector world = *(MapVector *)&DAT_00472550;
    FUN_002630e0(&screen.x, 0, camera, &world);
    screen.w = 0.0f;
    DAT_004ea81c.direction = screen;
}
}
