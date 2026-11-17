#include "common.h"

namespace { struct MatrixHalf { f32 values[8]; }; struct Matrix44 { MatrixHalf first; MatrixHalf second; }; struct MatrixState { u8 padding[0x180]; Matrix44 matrix; }; }

extern "C" {
/* Reads or updates the requested state. */
extern MatrixState g_vectorScratch;
void matrixCopyToGlobal(const Matrix44 *matrix)
{
    g_vectorScratch.matrix.first = matrix->first;
    g_vectorScratch.matrix.second = matrix->second;
}
}
