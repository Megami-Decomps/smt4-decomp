#include "common.h"

extern "C" {

/* Applies the translation vector (x, y, z) to the 4x4 matrix `m` (16 floats).
 * mode 0: m becomes the translation matrix; mode 1: m is translated in its own (local) frame;
 * mode 2: the translation is added to m's world offset. Returns m, or NULL for an unknown mode. */
f32 *mathMatrixApplyTranslation(f32 *m, const f32 *translation, s32 mode)
{
    if (mode == 0) {
        m[0] = m[5] = m[10] = m[15] = 1.0f;
        m[1] = m[2] = m[4] = m[3] = 0.0f;
        m[6] = m[8] = m[9] = m[7] = 0.0f;
        m[12] = m[13] = m[14] = m[11] = 0.0f;
        m[12] = translation[0];
        m[13] = translation[1];
        m[14] = translation[2];
        return m;
    }
    if (mode != 1) {
        if (mode == 2) {
            m[12] = m[12] + translation[0];
            m[13] = m[13] + translation[1];
            m[14] = m[14] + translation[2];
            return m;
        }
        return NULL;
    }
    m[12] = translation[0] * m[0] + translation[1] * m[4] + translation[2] * m[8] + m[12];
    m[13] = translation[0] * m[1] + translation[1] * m[5] + translation[2] * m[9] + m[13];
    m[14] = translation[0] * m[2] + translation[1] * m[6] + translation[2] * m[10] + m[14];
    return m;
}

} /* extern "C" */
