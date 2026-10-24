/* NON_MATCHING: same quaternion product; retail evaluates and stores the components in a different grouping (two stores of two floats), so the multiply-accumulate order differs. */
#include "gfx/CameraVectorScratch.h"

extern "C" {

extern CameraVectorScratch DAT_004ea81c;

/* Multiplies the scratch quaternion `direction` by the quaternion `origin`, storing the product in `direction`. */
void FUN_002a2c00(void)
{
    Vector4 a = DAT_004ea81c.direction;
    Vector4 b = DAT_004ea81c.origin;

    DAT_004ea81c.direction.x = (a.y * b.z - a.z * b.y) + b.x * a.w + a.x * b.w;
    DAT_004ea81c.direction.y = (a.z * b.x - a.x * b.z) + b.y * a.w + a.y * b.w;
    DAT_004ea81c.direction.z = (a.x * b.y - a.y * b.x) + b.z * a.w + a.z * b.w;
    DAT_004ea81c.direction.w = a.w * b.w - (a.x * b.x + a.y * b.y + a.z * b.z);
}

} /* extern "C" */
