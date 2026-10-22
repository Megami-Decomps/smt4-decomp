/* NON_MATCHING: retail quaternion assignment copies through the stack; this uses direct VFP stores. */
#include "gfx/QuaternionWorkspace.h"

extern "C" {
f32 phaseCosInterpolate(f32);
f32 FUN_002b70cc(f32);
extern QuaternionWorkspace DAT_004ea81c;
}

/* Convert Euler angles in radians to the workspace's rotation quaternion. */
extern "C" void FUN_003f6b88(f32 x, f32 y, f32 z)
{
    f32 halfX = x * -0.5f * 40.743664f;
    f32 cosX = phaseCosInterpolate(halfX);
    f32 sinX = FUN_002b70cc(halfX);
    f32 halfY = y * -0.5f * 40.743664f;
    f32 cosY = phaseCosInterpolate(halfY);
    f32 sinY = FUN_002b70cc(halfY);
    f32 halfZ = z * -0.5f * 40.743664f;
    f32 cosZ = phaseCosInterpolate(halfZ);
    f32 sinZ = FUN_002b70cc(halfZ);
    RotationQuaternion rotation;
    rotation.x = sinZ * sinY * cosX + cosZ * cosY * sinX;
    rotation.y = cosZ * sinY * cosX - sinZ * cosY * sinX;
    rotation.z = sinZ * cosY * cosX + cosZ * sinY * sinX;
    rotation.w = cosZ * cosY * cosX - sinZ * sinY * sinX;
    DAT_004ea81c.rotation = rotation;
}
