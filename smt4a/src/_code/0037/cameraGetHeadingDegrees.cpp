#include "map/LmapViewGlobals.h"

extern "C" {

f32 __hardfp_atan2f(f32 x, f32 y);

f32 cameraGetHeadingDegrees(void)
{
    LmapViewA *view = DAT_005806a0.view;
    f32 x = view->savedEye.x - view->savedTarget.x;
    f32 z = view->savedEye.z - view->savedTarget.z;
    return __hardfp_atan2f(x, z) * 57.3248405456543f;
}

} /* extern "C" */
