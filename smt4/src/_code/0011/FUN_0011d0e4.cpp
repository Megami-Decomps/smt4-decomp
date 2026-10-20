#include "common.h"

extern "C" {

typedef struct Vec6 {
    f32 v[6];
} Vec6;

/* Stores its six float arguments (s0-s5) at `out`. */
void FUN_0011d0e4(Vec6 *out, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f)
{
    out->v[0] = a;
    out->v[1] = b;
    out->v[2] = c;
    out->v[3] = d;
    out->v[4] = e;
    out->v[5] = f;
}

} /* extern "C" */
