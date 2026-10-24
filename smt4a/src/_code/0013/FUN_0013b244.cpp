/* NON_MATCHING: orthographic camera and normalized look-at view restored; vector constant materialization and VFP scheduling differ. */
#include "gfx/CameraManager.h"
#include "gfx/CameraMatrixCache.h"
#include "shard/S1Mover.h"
#include <math.h>

namespace {
inline f32 dot(const Vec3f &a, const Vec3f &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
inline Vec3f cross(const Vec3f &a, const Vec3f &b)
{
    Vec3f result = {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
    return result;
}
inline void normalize(Vec3f &vector)
{
    f32 inverseLength = 1.0f / sqrtf(dot(vector, vector));
    vector.x *= inverseLength;
    vector.y *= inverseLength;
    vector.z *= inverseLength;
}
}
extern "C" {
void asdCameraInitializeDefaults(ManagedCamera *camera, s32 enabled);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_0015a20c(ManagedCamera *camera, f32 left, f32 top, f32 right, f32 bottom, f32 nearClip, f32 farClip);
void FUN_0015a1b4(ManagedCamera *camera, const Matrix34Data *view);
void uiSetFloatPair(ManagedCamera *camera, f32 distance, f32 scale);
void asdCameraRegister(ManagedCamera *camera);

// Initialize a screen-sized orthographic camera and a normalized look-at view along the Z axis.
void FUN_0013b244(ManagedCamera *camera, f32 distance, f32 offsetX, f32 offsetY, f32 scale)
{
    struct DefaultCameraView {
        ManagedCamera camera;
        f32 distance;
        f32 offsetX;
        f32 offsetY;
        f32 focusDistance;
        f32 weight;
    };
    asdCameraInitializeDefaults(camera, 1);
    f32 width = (f32)asdGxPresetsGetByKind(0);
    f32 height = (f32)asdGxPresetsGetHeightByKind(0);
    FUN_0015a20c(camera, 0.0f, height, width, 0.0f, 1.0f, 1.0f);
    DefaultCameraView *work = reinterpret_cast<DefaultCameraView *>(camera);
    work->distance = distance;
    work->weight = 1.0f;
    work->focusDistance = distance;
    work->offsetX = offsetX;
    work->offsetY = offsetY;
    Vec3f eye = {0.0f, 0.0f, distance};
    Vec3f forward = {0.0f, 0.0f, distance - 0.0f};
    Vec3f worldUp = {0.0f, 1.0f, 0.0f};
    normalize(forward);
    Vec3f right = cross(worldUp, forward);
    normalize(right);
    Vec3f up = cross(forward, right);
    Matrix34Data view = {{
        right.x, right.y, right.z, -dot(eye, right),
        up.x, up.y, up.z, -dot(eye, up),
        forward.x, forward.y, forward.z, -dot(eye, forward)
    }};
    FUN_0015a1b4(camera, &view);
    uiSetFloatPair(camera, distance, scale);
    asdCameraRegister(camera);
}
}
