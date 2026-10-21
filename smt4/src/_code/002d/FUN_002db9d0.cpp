#include "common.h"

namespace { struct MatrixHalf { f32 values[8]; }; struct Matrix44 { MatrixHalf first; MatrixHalf second; }; struct MatrixState { u8 padding[0x180]; Matrix44 matrix; }; }

extern "C" {
/* Reads or updates the requested state. */
extern MatrixState DAT_004ea81c;
void FUN_002db9d0(const Matrix44 *matrix)
{
    DAT_004ea81c.matrix.first = matrix->first;
    DAT_004ea81c.matrix.second = matrix->second;
}
}
