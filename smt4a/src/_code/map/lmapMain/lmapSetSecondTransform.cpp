#include "common.h"

extern "C" {

extern f32 DAT_005f1a18[6];

void lmapSetSecondTransform(f32 x, f32 y, f32 z, f32 a, f32 b, f32 c)
{
    DAT_005f1a18[0] = x;
    DAT_005f1a18[1] = y;
    DAT_005f1a18[2] = z;
    DAT_005f1a18[3] = a;
    DAT_005f1a18[4] = b;
    DAT_005f1a18[5] = c;
}

} /* extern "C" */
