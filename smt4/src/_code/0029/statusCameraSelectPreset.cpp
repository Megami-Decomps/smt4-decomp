#include "status/StatusCamera.h"

extern "C" void FUN_00258c04(const Vec3 *eye, const Vec3 *direction, const Vec3 *rotation,
                              f32 nearClip, f32 farClip, f32 fov, f32 distance, f32 scale);

/* Select the close-up, full-body or origin camera preset for a status model. */
extern "C" void statusCameraSelectPreset(s32 preset)
{
    Vec3 eye;
    Vec3 direction;
    Vec3 rotation;
    switch (preset) {
    case 0:
        eye.x = 0.0f;
        eye.y = 6.3f;
        eye.z = 4.5f;
        direction.x = 0.0f;
        direction.y = 0.0f;
        direction.z = -1.0f;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = 0.0f;
        FUN_00258c04(&eye, &direction, &rotation, 0.1f, 25600.0f, 35.0f, 4.5f, 2.8f);
        break;
    case 1:
        eye.x = 0.0f;
        eye.y = 13.0f;
        eye.z = 120.0f;
        direction.x = 0.0f;
        direction.y = 0.0f;
        direction.z = -1.0f;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = 0.0f;
        FUN_00258c04(&eye, &direction, &rotation, 1.0f, 10000.0f, 34.3f, 120.0f, 0.25f);
        break;
    case 2:
        eye.x = 0.0f;
        eye.y = 0.0f;
        eye.z = 0.0f;
        direction.x = 0.0f;
        direction.y = 0.0f;
        direction.z = -1.0f;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = 0.0f;
        FUN_00258c04(&eye, &direction, &rotation, 1.0f, 10000.0f, 34.3f, 10.0f, 0.25f);
        break;
    }
}
