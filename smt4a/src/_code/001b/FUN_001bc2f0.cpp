/* NON_MATCHING: retail quaternion assignment copies through the stack; this uses direct VFP stores. */
#include "gfx/QuaternionWorkspace.h"
#include "gfx/VectorScratch.h"

extern "C" {
f32 phaseCosine(f32);
f32 phaseSine(f32);
}

/* Convert Euler angles in radians to the workspace's rotation quaternion. */
extern "C" void FUN_001bc2f0(f32 x, f32 y, f32 z)
{
    f32 halfX = x * -0.5f * 40.743664f;
    f32 cosX = phaseCosine(halfX);
    f32 sinX = phaseSine(halfX);
    f32 halfY = y * -0.5f * 40.743664f;
    f32 cosY = phaseCosine(halfY);
    f32 sinY = phaseSine(halfY);
    f32 halfZ = z * -0.5f * 40.743664f;
    f32 cosZ = phaseCosine(halfZ);
    f32 sinZ = phaseSine(halfZ);
    RotationQuaternion rotation;
    rotation.x = sinZ * sinY * cosX + cosZ * cosY * sinX;
    rotation.y = cosZ * sinY * cosX - sinZ * cosY * sinX;
    rotation.z = sinZ * cosY * cosX + cosZ * sinY * sinX;
    rotation.w = cosZ * cosY * cosX - sinZ * sinY * sinX;
    g_vectorScratch.first.rotation = rotation;
}
