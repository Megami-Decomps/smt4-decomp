/* NON_MATCHING: same quaternion product; retail evaluates and stores the components in a different grouping (two stores of two floats), so the multiply-accumulate order differs. */
#include "gfx/CameraVectorScratch.h"

extern "C" {

extern CameraVectorScratch DAT_006471dc;

/* Multiplies the scratch quaternion `direction` by the quaternion `origin`, storing the product in `direction`. */
void FUN_001bc3e4(void)
{
    Vector4 a = DAT_006471dc.direction;
    Vector4 b = DAT_006471dc.origin;

    DAT_006471dc.direction.x = (a.y * b.z - a.z * b.y) + b.x * a.w + a.x * b.w;
    DAT_006471dc.direction.y = (a.z * b.x - a.x * b.z) + b.y * a.w + a.y * b.w;
    DAT_006471dc.direction.z = (a.x * b.y - a.y * b.x) + b.z * a.w + a.z * b.w;
    DAT_006471dc.direction.w = a.w * b.w - (a.x * b.x + a.y * b.y + a.z * b.z);
}

} /* extern "C" */
