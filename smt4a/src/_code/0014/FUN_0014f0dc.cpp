/* NON_MATCHING: pose subtraction reuses a VFP input instead of reloading it; matrix copy grouping and scratch scheduling differ. */
#include "gfx/CameraMatrixCache.h"
#include "status/StatusCamera.h"

extern "C" {
void FUN_0018aa5c(Matrix34Data *matrix, const Vec3 *eye, const Vec3 *up, const Vec3 *target);
void FUN_00162330(Matrix34Data *destination, const Matrix34Data *source);
void memCopyWords(const void *source, void *destination, u32 byteCount);
void nn_math_ARMv6_MTX44TransposeAsm(Matrix44 *destination, const Matrix44 *source);
void FUN_0015a1bc(void *parameters, const Matrix34Data *view);

// Install a nondegenerate look-at pose and refresh the camera's cached matrix forms.
void FUN_0014f0dc(CameraMatrixCache *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up)
{
    // The pose/matrices occupy the canonical cache's +1 byte-aligned padding; adding float fields would shift it.
    struct LookAtView {
        u8 enabled;
        u8 dirty;
        u8 unk02[2];
        Vec3 eye;
        Vec3 target;
        Vec3 up;
        u8 unk28[0x10];
        Matrix34Data view;
        Matrix44 expanded;
        u8 unk0A8[0x80];
        Matrix34Data normal;
        u8 unk158[0x40];
        Matrix44 transposed;
    };
    typedef char LookAtViewOffsets[offsetof(LookAtView, eye) == 4 &&
        offsetof(LookAtView, view) == 0x38 && offsetof(LookAtView, expanded) == 0x68 &&
        offsetof(LookAtView, normal) == 0x128 && offsetof(LookAtView, transposed) == 0x198 ? 1 : -1];
    LookAtView *view = (LookAtView *)camera;
    view->eye = *eye;
    view->target = *target;
    view->up = *up;
    view->dirty = 0;
    f32 x = view->eye.x - view->target.x;
    f32 y = view->eye.y - view->target.y;
    f32 z = view->eye.z - view->target.z;
    f32 lengthSquared = x * x + y * y + z * z;
    if (lengthSquared == 0.0f) {
        return;
    }
    f32 inverseLength = 1.0f / __sqrtf(lengthSquared);
    f32 alignment = x * inverseLength * up->x + y * inverseLength * up->y + z * inverseLength * up->z;
    if (alignment == 1.0f || alignment == -1.0f) {
        return;
    }
    FUN_0018aa5c(&view->view, &view->eye, &view->up, &view->target);
    FUN_00162330(&view->normal, &view->view);
    memCopyWords(&view->view, &view->expanded, 0x30);
    view->expanded.values[12] = 0.0f;
    view->expanded.values[13] = 0.0f;
    view->expanded.values[14] = 0.0f;
    view->expanded.values[15] = 1.0f;
    view->transposed = view->expanded;
    nn_math_ARMv6_MTX44TransposeAsm(&view->transposed, &view->transposed);
    if (view->enabled != 0) {
        FUN_0015a1bc(&camera->parameters, &view->view);
    }
}
}
