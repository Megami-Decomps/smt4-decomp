#include "common.h"

extern "C" {

#define FLOAT_ONE 0x3f800000

/* Builds a translation matrix (identity with `translation` in the last column) in dst; copies the floats as raw words. */
void mtxMakeTranslation(u32 *dst, u32 *translation)
{
    u32 y;

    dst[1] = 0;
    dst[0] = FLOAT_ONE;
    dst[2] = 0;
    dst[3] = translation[0];
    dst[4] = 0;
    dst[5] = FLOAT_ONE;
    dst[6] = 0;
    y = translation[1];
    dst[8] = 0;
    dst[7] = y;
    dst[9] = 0;
    dst[10] = FLOAT_ONE;
    dst[11] = translation[2];
    dst[12] = 0;
    dst[13] = 0;
    dst[14] = 0;
    dst[15] = FLOAT_ONE;
}

} /* extern "C" */
