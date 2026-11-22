/* NON_MATCHING: 329 lines: the quad's corners now carry their edge vectors (24-byte corner records, as retail's
 * offsets show) and the four transformed corners are separate locals (retail's stack holds them apart); retail still
 * keeps the sign flags of the constant 0 angles live (conditional vneg on constant-false flags, 240-byte frame) where
 * the build folds them. The quad array and its count (DAT_006160dc = DAT_00614d7c + 0x1360) are reached from one
 * base in retail: they are defined in this function's file. */
#include "common.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {

/* One corner of a queued quad and the vector derived from it and a neighbouring corner. */
typedef struct QuadCorner {
    /* 0x00 */ PhaseVector position;
    /* 0x0C */ PhaseVector edge;
} QuadCorner;

/* One queued quad (0x7C bytes): its rectangle, two ids and the four rotated corners with their edge
 * vectors. */
typedef struct QuadRecord {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 zero04;
    /* 0x08 */ f32 y;
    /* 0x0C */ f32 right;
    /* 0x10 */ f32 zero10;
    /* 0x14 */ f32 bottom;
    /* 0x18 */ u16 idA;
    /* 0x1A */ u16 idB;
    /* 0x1C */ QuadCorner corners[4];
} QuadRecord;
typedef char QuadRecordSizeCheck[sizeof(QuadRecord) == 0x7C ? 1 : -1];

extern const PhaseTrigEntry g_sinCosTable[];
extern QuadRecord DAT_00614d7c[];
extern s32 DAT_006160dc;

void nn_math_ARMv6_VEC3TransformAsm_2AD44C(PhaseVector *out, const f32 *matrix, const PhaseVector *in);
void vec3DirectionBetween(PhaseVector *out, PhaseVector from, PhaseVector to);

/* Queues a width x height quad at (x, y) turned by `degrees` around the Y axis: the corners are
 * rotated through the rotation matrix of the three angles and moved to the position. */
void FUN_002de124(u16 idA, u16 idB, f32 x, f32 y, f32 width, f32 height, f32 degrees)
{
    QuadRecord *quad = &DAT_00614d7c[DAT_006160dc];
    PhaseVector nearLeft;
    PhaseVector nearRight;
    PhaseVector farRight;
    PhaseVector farLeft;
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
    PhaseSinCos a = samplePhase(g_sinCosTable, 0.0f);
    PhaseSinCos b = samplePhase(g_sinCosTable, degrees * 0.71111107f);
    PhaseSinCos c = samplePhase(g_sinCosTable, 0.0f);

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
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&nearLeft, matrix, &point);
    point.x = width;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&nearRight, matrix, &point);
    point.z = -height;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&farRight, matrix, &point);
    point.x = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&farLeft, matrix, &point);
    nearLeft.x += x;
    nearLeft.z += y;
    nearRight.x += x;
    nearRight.z += y;
    farRight.x += x;
    farRight.z += y;
    farLeft.x += x;
    farLeft.z += y;
    quad->corners[0].position = farLeft;
    quad->corners[1].position = nearLeft;
    quad->corners[2].position = farRight;
    quad->corners[3].position = nearRight;
    vec3DirectionBetween(&quad->corners[0].edge, quad->corners[0].position, quad->corners[1].position);
    vec3DirectionBetween(&quad->corners[1].edge, quad->corners[1].position, quad->corners[3].position);
    vec3DirectionBetween(&quad->corners[2].edge, quad->corners[2].position, quad->corners[0].position);
    vec3DirectionBetween(&quad->corners[3].edge, quad->corners[3].position, quad->corners[2].position);
    DAT_006160dc++;
}

}
