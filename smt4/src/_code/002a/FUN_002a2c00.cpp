/* NON_MATCHING: same quaternion product; retail evaluates and stores the components in a different grouping (two stores of two floats), so the multiply-accumulate order differs. */
#include "gfx/VectorScratch.h"

extern "C" {

/* Multiplies the scratch quaternion `direction` by the quaternion `origin`, storing the product in `direction`. */
void FUN_002a2c00(void)
{
    Vector4 a = g_vectorScratch.first.vector;
    Vector4 b = g_vectorScratch.second.vector;

    g_vectorScratch.first.vector.x = (a.y * b.z - a.z * b.y) + b.x * a.w + a.x * b.w;
    g_vectorScratch.first.vector.y = (a.z * b.x - a.x * b.z) + b.y * a.w + a.y * b.w;
    g_vectorScratch.first.vector.z = (a.x * b.y - a.y * b.x) + b.z * a.w + a.z * b.w;
    g_vectorScratch.first.vector.w = a.w * b.w - (a.x * b.x + a.y * b.y + a.z * b.z);
}

} /* extern "C" */
