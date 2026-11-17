/* NON_MATCHING: retail loads the matrix rows as 4-float vldmia groups and the vector components singly, then multiplies in a different register order; ours loads the elements separately. */
#include "shard/W5_W5Match2_PlainData.h"
#include "gfx/VectorScratch.h"

extern "C" {

/* The camera scratch block, extended to the transform matrix at 0x140. */

// Transforms the scratch direction by the scratch matrix (row vector times matrix, w ignored).
void FUN_0037ee54(void)
{
    const f32 (*m)[4] = (const f32 (*)[4])g_vectorScratch.matrix.matrix.values;
    Vector4 *v = &g_vectorScratch.first.vector;
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;

    Vector4 result;

    result.x = x * m[0][0] + y * m[1][0] + z * m[2][0];
    result.y = x * m[0][1] + y * m[1][1] + z * m[2][1];
    result.z = x * m[0][2] + y * m[1][2] + z * m[2][2];
    result.w = x * m[0][3] + y * m[1][3] + z * m[2][3];
    *v = result;
}

}
