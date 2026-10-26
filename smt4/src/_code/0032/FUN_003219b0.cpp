/* NON_MATCHING: multifile frame/r3 now match; the arithmetic uses retail's non-contracted products (shared x/y/z*sine, (1-v*v)*k), but the VFP register numbering and instruction schedule of the matrix build differ (retail loads the axis with one vldmia {s4-s6}). */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/S1Mover.h"

extern "C" {
void matrix43Multiply(Matrix44 *destination, const Matrix44 *first, const Matrix44 *second);
void matrixCopyFull(Matrix44 *destination, const Matrix44 *source);

// Set, pre-multiply, or post-multiply an axis-angle rotation given 1-cosine and sine.
Matrix44 *FUN_003219b0(Matrix44 *destination, const Vec3f *axis, s32 mode, f32 oneMinusCosine, f32 sine)
{
    f32 x = axis->x;
    f32 y = axis->y;
    f32 z = axis->z;
    f32 yz = y * z * oneMinusCosine;
    f32 zx = z * x * oneMinusCosine;
    f32 zz = (1.0f - z * z) * oneMinusCosine;
    f32 xx = (1.0f - x * x) * oneMinusCosine;
    f32 yy = (1.0f - y * y) * oneMinusCosine;
    f32 xy = x * y * oneMinusCosine;
    f32 xs = x * sine;
    f32 ys = y * sine;
    f32 zs = z * sine;
    Matrix44 rotation;
    rotation.values[0] = 1.0f - xx;
    rotation.values[1] = xy + zs;
    rotation.values[2] = zx - ys;
    rotation.values[3] = 0.0f;
    rotation.values[4] = xy - zs;
    rotation.values[5] = 1.0f - yy;
    rotation.values[6] = yz + xs;
    rotation.values[7] = 0.0f;
    rotation.values[8] = zx + ys;
    rotation.values[9] = yz - xs;
    rotation.values[10] = 1.0f - zz;
    rotation.values[11] = 0.0f;
    rotation.values[12] = 0.0f;
    rotation.values[13] = 0.0f;
    rotation.values[14] = 0.0f;
    rotation.values[15] = 1.0f;
    Matrix44 product;
    switch (mode) {
    case 0:
        matrixCopyFull(destination, &rotation);
        break;
    case 1:
        matrix43Multiply(&product, &rotation, destination);
        matrixCopyFull(destination, &product);
        break;
    case 2:
        matrix43Multiply(&product, destination, &rotation);
        matrixCopyFull(destination, &product);
        break;
    default:
        return NULL;
    }
    return destination;
}
}
