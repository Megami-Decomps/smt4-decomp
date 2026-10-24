/* NON_MATCHING: same phase-sampler family as FUN_001aff14: retail batches the three phase wrap loops and keeps the translation terms in s-registers across the rotation build, which armcc schedules differently here (about 320 diff lines). */
#include "gfx/EulerPhaseRotation.h"

/* One pose source: where the node sits, how it is turned (radians) and where it is moved to. */
struct PoseSource {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 origin[3];
    /* 0x14 */ f32 angles[3];
    /* 0x20 */ f32 translation[3];
    /* 0x2C */ u8 unk2C[0x38];
};
typedef char PoseSourceSizeCheck[sizeof(PoseSource) == 0x64 ? 1 : -1];

struct PoseNode {
    /* 0x00 */ u32 flags; /* bit 1: the matrix is valid */
    /* 0x04 */ f32 origin[3];
    /* 0x10 */ Matrix34Data matrix;
};
typedef char PoseNodeSizeCheck[sizeof(PoseNode) == 0x40 ? 1 : -1];

struct PoseOwner {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ PoseSource *sources;
};

struct PoseBuffer {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ PoseNode *nodes;
    /* 0x10 */ u32 count;
};

extern "C" {
extern const PhaseTrigEntry DAT_00536d14[256];
void nn_math_ARMv6_MTX34MultAsm(Matrix34Data *destination, const Matrix34Data *first, const Matrix34Data *second);

/* Builds the node matrices of the pose buffer: the Euler rotation of each source (a full turn is 256 phase units),
 * then its translation. */
void FUN_00193c08(PoseOwner *owner, PoseBuffer *buffer)
{
    for (u32 i = 0; i < buffer->count; i++) {
        PoseNode *node = &buffer->nodes[i];
        PoseSource *source = &owner->sources[i];
        node->origin[0] = source->origin[0];
        node->origin[1] = source->origin[1];
        node->origin[2] = source->origin[2];
        const f32 radiansToPhase = 40.743664f;
        buildEulerPhaseRotation(&node->matrix, 1, DAT_00536d14, source->angles[0] * radiansToPhase,
                                source->angles[1] * radiansToPhase, source->angles[2] * radiansToPhase);
        Matrix34Data translate;
        translate.values[0] = 1.0f;
        translate.values[1] = 0.0f;
        translate.values[2] = 0.0f;
        translate.values[3] = source->translation[0];
        translate.values[4] = 0.0f;
        translate.values[5] = 1.0f;
        translate.values[6] = 0.0f;
        translate.values[7] = source->translation[1];
        translate.values[8] = 0.0f;
        translate.values[9] = 0.0f;
        translate.values[10] = 1.0f;
        translate.values[11] = source->translation[2];
        nn_math_ARMv6_MTX34MultAsm(&node->matrix, &translate, &node->matrix);
        node->flags = source->flags;
        node->flags |= 2;
    }
}
}
