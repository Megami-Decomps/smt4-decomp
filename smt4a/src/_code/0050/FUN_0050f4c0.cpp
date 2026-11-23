#include "classes/SceneCameraElement.h"

struct CameraVec3 {
    f32 x;
    f32 y;
    f32 z;
    CameraVec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) {}
};

CameraVec3 g_camPos(0.0f, 100.0f, 1280.0f);
CameraVec3 g_camTarget(0.0f, 0.0f, 0.0f);
CameraVec3 g_camUp(0.0f, 1.0f, 0.0f);
SceneCameraElementPairA g_itemPair;
