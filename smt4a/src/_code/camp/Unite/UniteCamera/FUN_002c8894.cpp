#include "status/StatusCamera.h"

/* The point the unite camera orbits: its position, look-at point, up vector and angles. */
struct UniteCameraTarget {
    /* 0x00 */ Vec3 position;
    /* 0x0C */ u8 unk0c[0xc];
    /* 0x18 */ Vec3 lookAt;
    /* 0x24 */ Vec3 up;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ f32 pitch;
    /* 0x3C */ f32 yaw;
};

struct UniteCamera {
    /* 0x000 */ u8 unk000[0x50c];
    /* 0x50C */ UniteCameraTarget *target;
};

extern "C" {
extern UniteCamera *g_uniteCamera;
f32 FUN_001bc124(f32 angle);
f32 FUN_001bbf0c(f32 angle);
void FUN_0014f0dc(UniteCamera *camera, UniteCameraTarget *target, const Vec3 *eye, const Vec3 *lookAt);
void FUN_00280070(UniteCamera *camera, s32 mode, Vec3 up);

/* Places the unite camera one unit from its target along the target's pitch and yaw and looks at
 * the target's look-at point. */
void FUN_002c8894(void)
{
    UniteCamera *camera = g_uniteCamera;

    if (camera != NULL) {
        Vec3 eye = camera->target->position;
        eye.x -= FUN_001bc124(camera->target->yaw);
        eye.y += FUN_001bc124(camera->target->pitch);
        eye.z -= FUN_001bbf0c(camera->target->yaw);
        FUN_0014f0dc(camera, camera->target, &eye, &camera->target->lookAt);
        FUN_00280070(camera, 0, camera->target->up);
    }
}

} /* extern "C" */
