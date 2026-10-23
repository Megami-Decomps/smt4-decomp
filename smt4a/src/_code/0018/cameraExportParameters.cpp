#include "gfx/CameraParameters.h"

extern "C" {
const Vec3f *FUN_001a7848(const CameraParameterSource *);
const Vec3f *FUN_001a7818(const CameraParameterSource *);
const Vec3f *FUN_001a777c(const CameraParameterSource *);
f32 FUN_001a78bc(const CameraParameterSource *);
void FUN_0019eb14(CameraParameters *);
void FUN_0019ec04(CameraParameters *);
void FUN_001a77ac(const CameraParameterSource *, f32 *, f32 *, f32 *, f32 *);

/* Export pose and projection controls from the camera's active orientation mode. */
void cameraExportParameters(CameraParameters *output, const CameraParameterOwner *owner)
{
    const CameraParameterSource *camera = owner->camera;
    output->eye.x = camera->transform[0][3];
    output->eye.y = camera->transform[1][3];
    output->eye.z = camera->transform[2][3];
    switch ((u8)camera->projection->mode) {
    case 0: {
        const Vec3f *target = FUN_001a7848(camera);
        output->target.x = target->x;
        output->target.y = target->y;
        output->target.z = target->z;
        output->roll = FUN_001a78bc(camera);
        FUN_0019eb14(output);
        break;
    }
    case 1: {
        const Vec3f *target = FUN_001a7848(camera);
        output->target.x = target->x;
        output->target.y = target->y;
        output->target.z = target->z;
        const Vec3f *up = FUN_001a7818(camera);
        output->up.x = up->x;
        output->up.y = up->y;
        output->up.z = up->z;
        break;
    }
    case 2: {
        const Vec3f *rotation = FUN_001a777c(camera);
        output->rotation.x = rotation->x;
        output->rotation.y = rotation->y;
        output->rotation.z = rotation->z;
        FUN_0019ec04(output);
        break;
    }
    }
    FUN_001a77ac(camera, &output->fieldOfView, &output->aspect, &output->nearClip, &output->farClip);
    output->fieldOfView *= 57.295776f;
}
}
