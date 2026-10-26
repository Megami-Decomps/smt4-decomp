/* NON_MATCHING: retail moves the 0.0f w through ip into a four-register stm for the final Vector4 copy and orders the world-vector copy before the first vldm; armcc stores w separately (vstr). */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "code/Code0015.h"

extern "C" {

extern CameraVectorScratch DAT_006471dc;
extern Vector4 DAT_005c1120;

void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);

/* Saves the camera target, projects it through the current camera and returns the resulting z. */
f32 FUN_002cf548(void)
{
    const ProjectionMatrices *camera = reinterpret_cast<const ProjectionMatrices *>(FUN_00152f54());
    DAT_005c1120 = DAT_006471dc.direction;
    f32 world[3] = {DAT_005c1120.x, DAT_005c1120.y, DAT_005c1120.z};
    Vector4 projected;
    FUN_002a1850(&projected.x, 0, camera, world);
    projected.w = 0.0f;
    DAT_006471dc.direction = projected;
    return projected.z;
}

} /* extern "C" */
