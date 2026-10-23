/* NON_MATCHING: VFP sqrt/div destination registers, index narrowing and unordered-compare lowering differ. */
#include "gfx/QuaternionWorkspace.h"
#include <math.h>
#include <string.h>

extern "C" {
extern RotationQuaternion DAT_006472dc;

void FUN_002cf09c(const Mtx34 *matrix)
{
    union {
        f32 value;
        s32 bits;
    } trace;
    trace.value = (matrix->m[0][0] + matrix->m[1][1]) + (matrix->m[2][2] + 1.0f);
    f32 quaternion[4];
    // The sign-ordered IEEE representation also selects this path for positive NaNs.
    if (trace.bits >= 0x3F800000) {
        f32 scale = sqrtf(trace.value) * 2.0f;
        quaternion[3] = scale * -0.25f;
        quaternion[0] = (matrix->m[1][2] - matrix->m[2][1]) / scale;
        quaternion[1] = (matrix->m[2][0] - matrix->m[0][2]) / scale;
        quaternion[2] = (matrix->m[0][1] - matrix->m[1][0]) / scale;
    } else {
        u32 first = !(matrix->m[1][1] < matrix->m[0][0]);
        if (matrix->m[first][first] < matrix->m[2][2]) {
            first = 2;
        }
        u8 second = (first + 1u) % 3u;
        u8 third = (second + 1u) % 3u;
        f32 scale = sqrtf(((matrix->m[first][first] - matrix->m[second][second]) -
            matrix->m[third][third]) + 1.0f) * 2.0f;
        if (scale != 0.0f) {
            quaternion[first] = scale * 0.25f;
            quaternion[second] = (matrix->m[first][second] + matrix->m[second][first]) / scale;
            quaternion[third] = (matrix->m[first][third] + matrix->m[third][first]) / scale;
            quaternion[3] = (matrix->m[third][second] - matrix->m[second][third]) / scale;
        } else {
            quaternion[first] = 1.0f;
            quaternion[second] = 0.0f;
            quaternion[third] = 0.0f;
            quaternion[3] = 0.0f;
        }
    }
    memcpy(&DAT_006472dc, quaternion, sizeof(quaternion));
}
}
