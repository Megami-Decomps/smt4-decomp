/* NON_MATCHING: global matrix addresses fold into large offsets, changing base registers and VFP load scheduling; 107 vs 106 instructions, no stack matrix copy. */
#include "shard/W8Match1_MatrixRotation.h"
namespace {
inline void premultiply(Matrix44 &right, const Matrix44 &left)
{
    Matrix44 result = {{
        left.values[0]*right.values[0] + left.values[4]*right.values[1] + left.values[8]*right.values[2] + left.values[12]*right.values[3],
        left.values[1]*right.values[0] + left.values[5]*right.values[1] + left.values[9]*right.values[2] + left.values[13]*right.values[3],
        left.values[2]*right.values[0] + left.values[6]*right.values[1] + left.values[10]*right.values[2] + left.values[14]*right.values[3],
        left.values[3]*right.values[0] + left.values[7]*right.values[1] + left.values[11]*right.values[2] + left.values[15]*right.values[3],
        left.values[0]*right.values[4] + left.values[4]*right.values[5] + left.values[8]*right.values[6] + left.values[12]*right.values[7],
        left.values[1]*right.values[4] + left.values[5]*right.values[5] + left.values[9]*right.values[6] + left.values[13]*right.values[7],
        left.values[2]*right.values[4] + left.values[6]*right.values[5] + left.values[10]*right.values[6] + left.values[14]*right.values[7],
        left.values[3]*right.values[4] + left.values[7]*right.values[5] + left.values[11]*right.values[6] + left.values[15]*right.values[7],
        left.values[0]*right.values[8] + left.values[4]*right.values[9] + left.values[8]*right.values[10] + left.values[12]*right.values[11],
        left.values[1]*right.values[8] + left.values[5]*right.values[9] + left.values[9]*right.values[10] + left.values[13]*right.values[11],
        left.values[2]*right.values[8] + left.values[6]*right.values[9] + left.values[10]*right.values[10] + left.values[14]*right.values[11],
        left.values[3]*right.values[8] + left.values[7]*right.values[9] + left.values[11]*right.values[10] + left.values[15]*right.values[11],
        left.values[0]*right.values[12] + left.values[4]*right.values[13] + left.values[8]*right.values[14] + left.values[12]*right.values[15],
        left.values[1]*right.values[12] + left.values[5]*right.values[13] + left.values[9]*right.values[14] + left.values[13]*right.values[15],
        left.values[2]*right.values[12] + left.values[6]*right.values[13] + left.values[10]*right.values[14] + left.values[14]*right.values[15],
        left.values[3]*right.values[12] + left.values[7]*right.values[13] + left.values[11]*right.values[14] + left.values[15]*right.values[15]
    }};
    right = result;
}
}
extern "C" {
extern MatrixRotationWork DAT_004ea81c;

// Premultiply the current matrix by the next matrix in the global transform work.
void FUN_002482d4()
{
    // The second matrix follows the documented 0x180-byte rotation-work prefix.
    struct MatrixCompositionView { MatrixRotationWork work; Matrix44 transform; };
    typedef char MatrixCompositionOffset[offsetof(MatrixCompositionView, transform) == 0x180 ? 1 : -1];
    MatrixCompositionView *view = reinterpret_cast<MatrixCompositionView *>(&DAT_004ea81c);
    premultiply(view->work.rotation, view->transform);
}
}