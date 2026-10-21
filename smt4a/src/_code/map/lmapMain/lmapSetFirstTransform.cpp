#include "common.h"

extern "C" {

extern f32 DAT_005f1a30[6];

void lmapSetFirstTransform(f32 x, f32 y, f32 z, f32 a, f32 b, f32 c)
{
    DAT_005f1a30[0] = x;
    DAT_005f1a30[1] = y;
    DAT_005f1a30[2] = z;
    DAT_005f1a30[3] = a;
    DAT_005f1a30[4] = b;
    DAT_005f1a30[5] = c;
}

} /* extern "C" */
