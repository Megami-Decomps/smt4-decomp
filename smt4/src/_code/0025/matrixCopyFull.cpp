#include "gfx/ModelTransform.h"
#include <string.h>

/* Copies a matrix to separate storage, including the unused lanes of an affine matrix. */
extern "C" void matrixCopyFull(Matrix44 *destination, const Matrix44 *source)
{
    memcpy(destination, source, sizeof(*destination));
}
