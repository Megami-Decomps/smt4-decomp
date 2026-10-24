/* NON_MATCHING: retail interleaves the three phase samples (one load/convert pass per angle, sign flags kept in registers) where the inline samplePhase calls run one after another; the matrix and flags are the same (178 vs 184 rows). */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {

/* A placement description: position, rotation in degrees, an offset and the flag bits. */
typedef struct PlacementSource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 options;             /* 1 2 4 8 0x10 select the transform flags */
    /* 0x08 */ u8 unk08[0x18];
    /* 0x20 */ PhaseVector position;
    /* 0x2C */ PhaseVector rotation;    /* x, y, z in degrees */
    /* 0x38 */ PhaseVector offset;
} PlacementSource;

/* A placement transform: a 3x3 rotation with the offset stored in the last column, the position
 * and the transform flags. */
typedef struct PlacementTransform {
    /* 0x00 */ f32 m[12];
    /* 0x30 */ PhaseVector position;
    /* 0x3C */ u32 flags;
} PlacementTransform;

extern const PhaseTrigEntry DAT_00536d14[];

/* Builds the placement transform from `source`: the rotation matrix from the three angles
 * (65536 steps per turn, sampled from the phase table), the offset and the flag bits. */
void FUN_001b7e24(PlacementTransform *transform, const PlacementSource *source)
{
    transform->position = source->position;
    f32 angleX = source->rotation.x * 40.743664f;
    f32 angleY = source->rotation.y * 40.743664f;
    f32 angleZ = source->rotation.z * 40.743664f;
    PhaseSinCos x = samplePhase(DAT_00536d14, angleX);
    PhaseSinCos y = samplePhase(DAT_00536d14, angleY);
    PhaseSinCos z = samplePhase(DAT_00536d14, angleZ);

    transform->m[8] = -y.sine;
    transform->m[4] = z.sine * y.cosine;
    transform->m[9] = x.sine * y.cosine;
    transform->m[10] = x.cosine * y.cosine;
    transform->m[6] = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    transform->m[5] = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    transform->m[0] = z.cosine * y.cosine;
    transform->m[1] = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    transform->m[2] = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    transform->m[3] = 0.0f;
    transform->m[7] = 0.0f;
    transform->m[11] = 0.0f;
    transform->m[3] = source->offset.x;
    transform->m[7] = source->offset.y;
    transform->m[11] = source->offset.z;
    transform->flags |= 0x800;
    if ((~source->options & 1) == 0) {
        transform->flags |= 0x20;
    }
    bool second = (~source->options & 2) == 0;

    if (second) {
        transform->flags |= 0x100;
    }
    bool third = (~source->options & 4) == 0;

    if (third) {
        transform->flags |= 0x80;
    }
    if ((~source->options & 8) == 0) {
        transform->flags |= 0x200;
    }
    if ((~source->options & 0x10) == 0) {
        transform->flags |= 0x400;
    }
    if (second && third) {
        transform->flags |= 0x40;
    }
}

}
