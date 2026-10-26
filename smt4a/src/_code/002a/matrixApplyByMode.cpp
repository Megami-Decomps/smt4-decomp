#include "shard/W5_W5Match2_PlainData.h"

extern "C" {
void matrix43Multiply(Matrix44 *destination, const Matrix44 *first, const Matrix44 *second);
void matrixCopyFull(Matrix44 *destination, const Matrix44 *source);

Matrix44 *matrixApplyByMode(Matrix44 *destination, const Matrix44 *source, s32 mode)
{
    Matrix44 product;
    Matrix44 *result = destination;
    if (mode == 0) {
        matrixCopyFull(destination, source);
    } else if (mode == 1) {
        matrix43Multiply(&product, source, destination);
        matrixCopyFull(destination, &product);
    } else if (mode == 2) {
        matrix43Multiply(&product, destination, source);
        matrixCopyFull(destination, &product);
    } else {
        result = NULL;
    }
    return result;
}
}
