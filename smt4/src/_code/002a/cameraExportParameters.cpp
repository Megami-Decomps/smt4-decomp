#include "gfx/CameraParameters.h"

extern "C" {
const Vec3f *FUN_0014d018(const CameraParameterSource *);
const Vec3f *FUN_0014cfe8(const CameraParameterSource *);
const Vec3f *FUN_002a86a4(const CameraParameterSource *);
f32 FUN_0014d08c(const CameraParameterSource *);
void FUN_00145e54(CameraParameters *);
void FUN_00145f44(CameraParameters *);
void FUN_002a8638(const CameraParameterSource *, f32 *, f32 *, f32 *, f32 *);

/* Export pose and projection controls from the camera's active orientation mode. */
void cameraExportParameters(CameraParameters *output, const CameraParameterOwner *owner)
{
    const CameraParameterSource *camera = owner->camera;
    output->eye.x = camera->transform[0][3];
    output->eye.y = camera->transform[1][3];
    output->eye.z = camera->transform[2][3];
    switch ((u8)camera->projection->mode) {
    case 0: {
        const Vec3f *target = FUN_0014d018(camera);
        output->target.x = target->x;
        output->target.y = target->y;
        output->target.z = target->z;
        output->roll = FUN_0014d08c(camera);
        FUN_00145e54(output);
        break;
    }
    case 1: {
        const Vec3f *target = FUN_0014d018(camera);
        output->target.x = target->x;
        output->target.y = target->y;
        output->target.z = target->z;
        const Vec3f *up = FUN_0014cfe8(camera);
        output->up.x = up->x;
        output->up.y = up->y;
        output->up.z = up->z;
        break;
    }
    case 2: {
        const Vec3f *rotation = FUN_002a86a4(camera);
        output->rotation.x = rotation->x;
        output->rotation.y = rotation->y;
        output->rotation.z = rotation->z;
        FUN_00145f44(output);
        break;
    }
    }
    FUN_002a8638(camera, &output->fieldOfView, &output->aspect, &output->nearClip, &output->farClip);
    output->fieldOfView *= 57.295776f;
}
}
