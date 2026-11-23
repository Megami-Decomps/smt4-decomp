#include "common.h"
#include <math.h>
#include "nw/math/VEC3.h"
#include "battle/btlMain.h"
#include "code/Code002c.h"

using namespace nw::math;

struct CameraView {
    u8 unk00[4];
    VEC3 eye;    // 0x04
    VEC3 target; // 0x10
};

extern "C" {

f32 mathAtan2Angle256(f32 y, f32 x);

// Heading of the camera's horizontal view direction in degrees, wrapped into the 0..360 range.
f32 cameraViewHeadingDegrees(void)
{
    CameraView *camera = reinterpret_cast<CameraView *>(asdCameraGetSavedRenderPairs());
    VEC3 direction;
    VEC3Sub(&direction, &camera->target, &camera->eye);
    direction.y = 0.0f;
    VEC3Normalize(&direction, &direction);
    f32 degrees = 360.0f + mathAtan2Angle256(direction.x, direction.z) * 1.40625f;
    if (degrees > 360.0f) {
        degrees -= 360.0f;
    }
    return degrees;
}

} /* extern "C" */
