#include "common.h"

extern "C" {

/* Applies the scale vector (x, y, z) to the 4x4 matrix `m` (16 floats).
 * mode 0: m becomes the scale matrix; mode 1: rows 0-2 are scaled by x, y, z respectively;
 * mode 2: columns 0-2 are scaled by x, y, z in every row. Returns m, or NULL for an unknown mode. */
f32 *mathMatrixApplyScale(f32 *m, const f32 *scale, int mode)
{
    if (mode == 0) {
        m[0] = m[5] = m[10] = m[15] = 1.0f;
        m[1] = m[2] = m[4] = m[3] = 0.0f;
        m[6] = m[8] = m[9] = m[7] = 0.0f;
        m[12] = m[13] = m[14] = m[11] = 0.0f;
        m[0] = scale[0];
        m[5] = scale[1];
        m[10] = scale[2];
        return m;
    }
    if (mode != 1) {
        if (mode == 2) {
            m[0] = m[0] * scale[0];
            m[1] = m[1] * scale[1];
            m[2] = m[2] * scale[2];
            m[4] = m[4] * scale[0];
            m[5] = m[5] * scale[1];
            m[6] = m[6] * scale[2];
            m[8] = m[8] * scale[0];
            m[9] = m[9] * scale[1];
            m[10] = m[10] * scale[2];
            m[12] = m[12] * scale[0];
            m[13] = m[13] * scale[1];
            m[14] = m[14] * scale[2];
            return m;
        }
        return NULL;
    }
    m[0] = m[0] * scale[0];
    m[1] = m[1] * scale[0];
    m[2] = m[2] * scale[0];
    m[4] = m[4] * scale[1];
    m[5] = m[5] * scale[1];
    m[6] = m[6] * scale[1];
    m[8] = m[8] * scale[2];
    m[9] = m[9] * scale[2];
    m[10] = m[10] * scale[2];
    return m;
}

} /* extern "C" */
