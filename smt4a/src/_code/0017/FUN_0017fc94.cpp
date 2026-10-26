/* NON_MATCHING: retail loads the whole 3x4 matrix with one vldmia {s0-s11} and the offset with vldmia {s12-s14}; armcc splits the struct copy into vldr/vldm pieces for every f32 array/struct shape tried. */
#include "common.h"

struct Vector3 {
    f32 v[3];
};

struct Matrix3x4 {
    f32 m[12];
};

extern "C" void FUN_0017fc94(Matrix3x4* destination,
                              const Vector3* translation,
                              const Matrix3x4* source)
{
    Matrix3x4 result = *source;
    result.m[3] += translation->v[0];
    result.m[7] += translation->v[1];
    result.m[11] += translation->v[2];
    *destination = result;
}
