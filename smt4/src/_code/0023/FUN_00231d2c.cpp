/* NON_MATCHING: only VFP temporary register numbering differs (s2/s4/s5 vs s2/s3/s4 in the normalize). */
#include "common.h"
#include <math.h>

struct Vec3 {
    f32 x, y, z;

    Vec3(f32 ax, f32 ay, f32 az) : x(ax), y(ay), z(az) {}

    void normalize()
    {
        f32 inverse = 1.0f / sqrtf(x * x + y * y + z * z);
        x *= inverse;
        y *= inverse;
        z *= inverse;
    }
};

struct CameraView {
    u8 unk00[4];
    Vec3 eye;    // 0x04
    Vec3 target; // 0x10
};

// Positive IEEE-754 values order like their signed bit patterns; the engine compares them that way.
static __inline bool floatBitsGreater(f32 value, s32 limitBits)
{
    union { f32 value; s32 bits; } representation;
    representation.value = value;
    return representation.bits > limitBits;
}

extern "C" {

CameraView *FUN_002c501c(void);
f32 FUN_0024c418(f32 y, f32 x);

// Heading of the camera's horizontal view direction in degrees, wrapped into the 0..360 range.
f32 FUN_00231d2c(void)
{
    CameraView *camera = FUN_002c501c();
    Vec3 direction(camera->target.x - camera->eye.x, 0.0f, camera->target.z - camera->eye.z);
    direction.normalize();
    f32 degrees = 360.0f + FUN_0024c418(direction.x, direction.z) * 1.40625f;
    if (floatBitsGreater(degrees, 0x43b40000)) {
        degrees -= 360.0f;
    }
    return degrees;
}

} /* extern "C" */
