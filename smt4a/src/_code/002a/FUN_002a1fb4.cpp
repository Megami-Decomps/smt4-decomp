/* NON_MATCHING: separate-unit calls spill the destination instead of retaining it in retail's unmodified r3. */
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {
void matrix43Multiply(Matrix44 *destination, const Matrix44 *first, const Matrix44 *second);
void matrixCopyFull(Matrix44 *destination, const Matrix44 *source);

Matrix44 *FUN_002a1fb4(Matrix44 *destination, const Matrix44 *source, s32 mode)
{
    Matrix44 product;
    switch (mode) {
    case 0:
        matrixCopyFull(destination, source);
        break;
    case 1:
        matrix43Multiply(&product, source, destination);
        matrixCopyFull(destination, &product);
        break;
    case 2:
        matrix43Multiply(&product, destination, source);
        matrixCopyFull(destination, &product);
        break;
    default:
        return NULL;
    }
    return destination;
}
}
