#include "common.h"
#include "gfx/ResourceBounds.h"

/* A baked matrix curve: one matrix per frame after the repeat header. */
struct MatrixCurve {
    /* 0x00 */ f32 startFrame;
    /* 0x04 */ f32 endFrame;
    /* 0x08 */ u8 preRepeat;
    /* 0x09 */ u8 postRepeat;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ nw::math::MTX34 frames[1];
};

extern "C" {
f32 animCurveAdjustFrame(const MatrixCurve *curve, f32 frame);

/* Copies the curve's matrix for `frame` (after the repeat adjustment) to `out` (one past the truncated frame when it lies on the end frame). */
void animCalcBakedMatrixCurve(nw::math::MTX34 *out, const MatrixCurve *curve, f32 frame)
{
    frame = animCurveAdjustFrame(curve, frame);
    u32 index = (u32)frame;
    if (curve->endFrame == frame) {
        index++;
    }
    nn_math_ARMv6_MTX34CopyAsm(out, &curve->frames[index]);
}
}
