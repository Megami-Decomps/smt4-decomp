/* NON_MATCHING: retail keeps the sign flags of the constant 0 angles live (conditional vneg on constant-false flags, 240-byte frame) where built folds them (231 rows vs 234); the quad setup is the same. */
#include "common.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {

/* One queued quad (0x7C bytes): its rectangle, two ids, the four rotated corners and the four
 * vectors derived from neighbouring corners. */
typedef struct QuadRecord {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 zero04;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 right;
    /* 0x10 */ f32 zero10;
    /* 0x14 */ f32 bottom;
    /* 0x18 */ u16 idA;
    /* 0x1A */ u16 idB;
    /* 0x1C */ PhaseVector corner[4];
    /* 0x4C */ PhaseVector edge[4];
} QuadRecord;

extern const PhaseTrigEntry DAT_00536d14[];
extern QuadRecord DAT_00614d7c[];
extern s32 DAT_006160dc;

void nn_math_ARMv6_VEC3TransformAsm_2AD44C(PhaseVector *out, const f32 *matrix, const PhaseVector *in);
void FUN_003250ac(PhaseVector *out, PhaseVector from, PhaseVector to);

/* Queues a width x height quad at (x, y) turned by `degrees` around the Y axis: the corners are
 * rotated through the rotation matrix of the three angles and moved to the position. */
void FUN_002de124(u16 idA, u16 idB, f32 x, f32 y, f32 width, f32 height, f32 degrees)
{
    QuadRecord *quad = &DAT_00614d7c[DAT_006160dc];
    PhaseVector local[4];
    PhaseVector point;
    f32 matrix[12];

    quad->x = x;
    quad->zero04 = 0.0f;
    quad->y = y;
    quad->right = x + width;
    quad->zero10 = 0.0f;
    quad->bottom = y + height;
    quad->idA = idA;
    quad->idB = idB;
    PhaseSinCos a = samplePhase(DAT_00536d14, 0.0f);
    PhaseSinCos b = samplePhase(DAT_00536d14, degrees * 0.71111107f);
    PhaseSinCos c = samplePhase(DAT_00536d14, 0.0f);

    matrix[0] = c.cosine * b.cosine;
    matrix[1] = a.sine * c.cosine * b.sine - a.cosine * c.sine;
    matrix[2] = a.sine * c.sine + a.cosine * c.cosine * b.sine;
    matrix[3] = 0.0f;
    matrix[4] = c.sine * b.cosine;
    matrix[5] = a.cosine * c.cosine + a.sine * c.sine * b.sine;
    matrix[6] = a.cosine * c.sine * b.sine - a.sine * c.cosine;
    matrix[7] = 0.0f;
    matrix[8] = -b.sine;
    matrix[9] = a.sine * b.cosine;
    matrix[10] = a.cosine * b.cosine;
    matrix[11] = 0.0f;
    point.x = 0.0f;
    point.y = 0.0f;
    point.z = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&local[0], matrix, &point);
    point.x = width;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&local[1], matrix, &point);
    point.z = -height;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&local[2], matrix, &point);
    point.x = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&local[3], matrix, &point);
    for (s32 i = 0; i < 4; i++) {
        local[i].x += x;
        local[i].z += y;
    }
    quad->corner[0] = local[3];
    quad->corner[1] = local[0];
    quad->corner[2] = local[2];
    quad->corner[3] = local[1];
    FUN_003250ac(&quad->edge[0], quad->corner[0], quad->corner[1]);
    FUN_003250ac(&quad->edge[1], quad->corner[1], quad->corner[3]);
    FUN_003250ac(&quad->edge[2], quad->corner[2], quad->corner[0]);
    FUN_003250ac(&quad->edge[3], quad->corner[3], quad->corner[2]);
    DAT_006160dc++;
}

}
