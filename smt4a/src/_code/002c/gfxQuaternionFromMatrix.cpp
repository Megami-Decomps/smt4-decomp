#include "gfx/QuaternionWorkspace.h"
#include <math.h>
#include <string.h>

extern "C" {
extern RotationQuaternion DAT_006472dc;

/* Converts a rotation matrix to a quaternion (x, y, z, w) in DAT_006472dc. The diagonal sum is reused for the
 * largest-axis case, as is the scale. */
void gfxQuaternionFromMatrix(const Mtx34 *matrix)
{
    f32 trace = (matrix->m[0][0] + matrix->m[1][1]) + (matrix->m[2][2] + 1.0f);
    f32 quaternion[4];
    f32 scale;
    if (trace >= 1.0f) {
        scale = sqrtf(trace) * 2.0f;
        quaternion[3] = scale * -0.25f;
        quaternion[0] = (matrix->m[1][2] - matrix->m[2][1]) / scale;
        quaternion[1] = (matrix->m[2][0] - matrix->m[0][2]) / scale;
        quaternion[2] = (matrix->m[0][1] - matrix->m[1][0]) / scale;
    } else {
        u8 first;
        if (matrix->m[0][0] > matrix->m[1][1])
            first = 0;
        else
            first = 1;
        if (matrix->m[first][first] < matrix->m[2][2]) {
            first = 2;
        }
        u8 second = (first + 1) % 3;
        u8 third = (second + 1) % 3;
        trace = ((matrix->m[first][first] - matrix->m[second][second]) -
            matrix->m[third][third]) + 1.0f;
        scale = sqrtf(trace) * 2.0f;
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
