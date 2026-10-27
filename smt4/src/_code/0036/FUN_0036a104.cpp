/* NON_MATCHING: the position now copies as a three-float struct (ldm/stm) like retail; remaining: the three phase lookups schedule with different register pressure (extra saves of r8/r9 and d8-d9, table loads not paired as retail's), and retail also copies the translation as a 3-word struct. */
#include "shard/W6_W6Match6_PhaseTrig.h"

/* Three scalar floats copied as a group. */
struct PhasePosition {
    f32 x, y, z;
};

/* A node transform: three rows of rotation plus translation, then the node position and the dirty flags. */
struct EulerTransform {
    /* 0x00 */ f32 rotation00, rotation01, rotation02;
    /* 0x0C */ f32 translationX;
    /* 0x10 */ f32 rotation10, rotation11, rotation12;
    /* 0x1C */ f32 translationY;
    /* 0x20 */ f32 rotation20, rotation21, rotation22;
    /* 0x2C */ f32 translationZ;
    /* 0x30 */ PhasePosition position;
    /* 0x3C */ u32 flags;
};

/* Description of a placement: position, XYZ Euler angles (radians) and translation. */
struct EulerPlacement {
    /* 0x00 */ PhasePosition position;
    /* 0x0C */ f32 angles[3];
    /* 0x18 */ f32 translation[3];
};

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[];

/* Builds a rotation matrix from XYZ Euler angles and sets its translation and position. */
void FUN_0036a104(EulerTransform *matrix, const EulerPlacement *placement)
{
    matrix->position = placement->position;

    f32 xPhase = placement->angles[0] * 40.743664f;
    f32 yPhase = placement->angles[1] * 40.743664f;
    f32 zPhase = placement->angles[2] * 40.743664f;
    bool xNegative = xPhase < 0.0f;
    f32 xMagnitude = fabsf(xPhase);
    bool yNegative = yPhase < 0.0f;
    f32 yMagnitude = fabsf(yPhase);
    bool zNegative = zPhase < 0.0f;
    f32 zMagnitude = fabsf(zPhase);
    xMagnitude = wrapPhase(xMagnitude);
    yMagnitude = wrapPhase(yMagnitude);
    zMagnitude = wrapPhase(zMagnitude);
    u16 xWhole = (u32)xMagnitude;
    u16 yWhole = (u32)yMagnitude;
    u16 zWhole = (u32)zMagnitude;
    const PhaseTrigEntry *xEntry = &DAT_00407ed0[(u8)xWhole];
    const PhaseTrigEntry *yEntry = &DAT_00407ed0[(u8)yWhole];
    const PhaseTrigEntry *zEntry = &DAT_00407ed0[(u8)zWhole];
    f32 xFraction = xMagnitude - (f32)xWhole;
    f32 yFraction = yMagnitude - (f32)yWhole;
    f32 zFraction = zMagnitude - (f32)zWhole;
    PhaseSinCos x, y, z;
    x.sine = xEntry->sine + xFraction * xEntry->sineDelta;
    x.cosine = xEntry->cosine + xFraction * xEntry->cosineDelta;
    y.sine = yEntry->sine + yFraction * yEntry->sineDelta;
    y.cosine = yEntry->cosine + yFraction * yEntry->cosineDelta;
    z.sine = zEntry->sine + zFraction * zEntry->sineDelta;
    z.cosine = zEntry->cosine + zFraction * zEntry->cosineDelta;
    if (xNegative)
        x.sine = -x.sine;
    if (yNegative)
        y.sine = -y.sine;
    if (zNegative)
        z.sine = -z.sine;
    matrix->rotation20 = -y.sine;
    matrix->rotation00 = z.cosine * y.cosine;
    matrix->rotation10 = z.sine * y.cosine;
    matrix->rotation01 = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    matrix->rotation12 = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    matrix->rotation02 = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    matrix->rotation11 = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    matrix->rotation21 = x.sine * y.cosine;
    matrix->rotation22 = x.cosine * y.cosine;
    matrix->translationX = 0.0f;
    matrix->translationY = 0.0f;
    matrix->translationZ = 0.0f;
    matrix->translationX = placement->translation[0];
    matrix->translationY = placement->translation[1];
    matrix->translationZ = placement->translation[2];
    matrix->flags |= 0x800;
}
}
