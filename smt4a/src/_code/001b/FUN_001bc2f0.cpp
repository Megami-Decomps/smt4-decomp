/* NON_MATCHING: retail quaternion assignment copies through the stack; this uses direct VFP stores. */
#include "gfx/QuaternionWorkspace.h"

extern "C" {
f32 FUN_001b63b0(f32);
f32 FUN_001a1ee0(f32);
extern QuaternionWorkspace DAT_006471dc;
}

/* Convert Euler angles in radians to the workspace's rotation quaternion. */
extern "C" void FUN_001bc2f0(f32 x, f32 y, f32 z)
{
    f32 halfX = x * -0.5f * 40.743664f;
    f32 cosX = FUN_001b63b0(halfX);
    f32 sinX = FUN_001a1ee0(halfX);
    f32 halfY = y * -0.5f * 40.743664f;
    f32 cosY = FUN_001b63b0(halfY);
    f32 sinY = FUN_001a1ee0(halfY);
    f32 halfZ = z * -0.5f * 40.743664f;
    f32 cosZ = FUN_001b63b0(halfZ);
    f32 sinZ = FUN_001a1ee0(halfZ);
    RotationQuaternion rotation;
    rotation.x = sinZ * sinY * cosX + cosZ * cosY * sinX;
    rotation.y = cosZ * sinY * cosX - sinZ * cosY * sinX;
    rotation.z = sinZ * cosY * cosX + cosZ * sinY * sinX;
    rotation.w = cosZ * cosY * cosX - sinZ * sinY * sinX;
    DAT_006471dc.rotation = rotation;
}
