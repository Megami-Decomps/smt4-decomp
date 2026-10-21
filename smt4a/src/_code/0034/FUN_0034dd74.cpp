#include "common.h"

namespace { struct MatrixHalf { f32 values[8]; }; struct Matrix44 { MatrixHalf first; MatrixHalf second; }; struct MatrixState { u8 padding[0x180]; Matrix44 matrix; }; }

extern "C" {
/* Reads or updates the requested state. */
extern MatrixState DAT_006471dc;
void FUN_0034dd74(const Matrix44 *matrix)
{
    DAT_006471dc.matrix.first = matrix->first;
    DAT_006471dc.matrix.second = matrix->second;
}
}
