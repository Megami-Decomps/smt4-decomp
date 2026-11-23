#include "common.h"
#include "game/GameStateA.h"
#include <math.h>
#include "nw/math/VEC3.h"
#include "code/Code0015.h"

using namespace nw::math;

struct CameraView {
    u8 unk00[4];
    VEC3 eye;    // 0x04
    VEC3 target; // 0x10
};

struct NaviMainView {
    u8 unk00[0x48];
    f32 unk48; // 0x48
};

extern "C" {
extern NaviMainView* g_naviMain;
f32 mathAtan2Angle256(f32 directionX, f32 directionZ);
}

// Heading of the camera's horizontal view direction in degrees (0..360), or the navigation map's own on the alternate map.
extern "C" f32 cameraViewHeadingDegrees(void)
{
    CameraView *camera = reinterpret_cast<CameraView *>(asdCameraGetSavedRenderPairs());
    VEC3 direction;
    VEC3Sub(&direction, &camera->target, &camera->eye);
    direction.y = 0.0f;
    VEC3Normalize(&direction, &direction);
    f32 angle = 360.0f + mathAtan2Angle256(direction.x, direction.z) * 1.40625f;
    if (angle > 360.0f)
        angle -= 360.0f;

    if (g_gameState.alternateNaviMap != 0)
        angle = g_naviMain->unk48;

    return angle;
}
