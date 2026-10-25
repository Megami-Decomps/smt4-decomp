/* NON_MATCHING: translation-copy registers and local-translation floating-point expression scheduling differ. */
#include "common.h"

extern "C" {
// Replace with a translation matrix, apply a local translation, or add a world offset.
f32 *FUN_002a2048(f32 *matrix, const f32 *translation, s32 mode)
{
    f32 *m = matrix;
    switch (mode) {
    case 0:
        m[15] = 1.0f;
        m[10] = 1.0f;
        m[5] = 1.0f;
        m[0] = 1.0f;
        m[3] = 0.0f;
        m[4] = 0.0f;
        m[2] = 0.0f;
        m[1] = 0.0f;
        m[7] = 0.0f;
        m[9] = 0.0f;
        m[8] = 0.0f;
        m[6] = 0.0f;
        m[11] = 0.0f;
        m[14] = 0.0f;
        m[13] = 0.0f;
        m[12] = 0.0f;
        m[12] = translation[0];
        m[13] = translation[1];
        m[14] = translation[2];
        return matrix;
    case 1:
        m[12] = translation[0] * m[0] + translation[1] * m[4] +
                translation[2] * m[8] + m[12];
        m[13] = translation[0] * m[1] + translation[1] * m[5] +
                translation[2] * m[9] + m[13];
        m[14] = translation[0] * m[2] + translation[1] * m[6] +
                translation[2] * m[10] + m[14];
        return matrix;
    case 2:
        m[12] += translation[0];
        m[13] += translation[1];
        m[14] += translation[2];
        return matrix;
    default:
        return NULL;
    }
}
}
