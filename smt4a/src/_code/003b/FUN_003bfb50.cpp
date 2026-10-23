/* NON_MATCHING: matrix expressions contract to VMLA/VMLS and destination preservation uses r4 instead of retail r3. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/S1Mover.h"

extern "C" {
void matrix43Multiply(Matrix44 *destination, const Matrix44 *first, const Matrix44 *second);
void matrixCopyFull(Matrix44 *destination, const Matrix44 *source);

// Set, pre-multiply, or post-multiply an axis-angle rotation given 1-cosine and sine.
Matrix44 *FUN_003bfb50(Matrix44 *destination, const Vec3f *axis, s32 mode, f32 oneMinusCosine, f32 sine)
{
    f32 x = axis->x;
    f32 y = axis->y;
    f32 z = axis->z;
    f32 yz = y * z * oneMinusCosine;
    f32 zx = z * x * oneMinusCosine;
    f32 xy = x * y * oneMinusCosine;
    Matrix44 rotation;
    rotation.values[0] = 1.0f - (1.0f - x * x) * oneMinusCosine;
    rotation.values[1] = xy + z * sine;
    rotation.values[2] = zx - y * sine;
    rotation.values[3] = 0.0f;
    rotation.values[4] = xy - z * sine;
    rotation.values[5] = 1.0f - (1.0f - y * y) * oneMinusCosine;
    rotation.values[6] = yz + x * sine;
    rotation.values[7] = 0.0f;
    rotation.values[8] = zx + y * sine;
    rotation.values[9] = yz - x * sine;
    rotation.values[10] = 1.0f - (1.0f - z * z) * oneMinusCosine;
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
