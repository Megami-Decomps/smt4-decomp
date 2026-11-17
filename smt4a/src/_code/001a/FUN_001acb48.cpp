/* NON_MATCHING: SDK quaternion/vector copies use different integer/VFP registers, matrix-dot scheduling, and final-call tail sharing. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include <string.h>

namespace {
// The composition factor and matrix extend beyond the shared quaternion workspace prefix.
struct EffectRotationWorkspace {
    QuaternionWorkspace base;
    RotationQuaternion factor;
    u8 unk120[0x20];
    f32 matrix[4][4];
};
typedef char EffectRotationWorkspaceMatrixOffsetCheck[
    offsetof(EffectRotationWorkspace, factor) == 0x110 &&
    offsetof(EffectRotationWorkspace, matrix) == 0x140 ? 1 : -1];
/* The orientation handler, called here with the composed rotation quaternion. */
typedef void (*ApplyEffectRotation)(void *data, const RotationQuaternion *rotation);
}

extern "C" {
extern EffectRotationWorkspace g_vectorScratch;
void FUN_001bc460(void);
void FUN_001bc3e4(void);
void FUN_001b4eb8(EffectTimelinePart *part, const f32 *origin);

// Rotate the part's local position and propagate the composed rotation to its children.
void FUN_001acb48(EffectTimelinePart *part, const RotationQuaternion *rotation)
{
    g_vectorScratch.base.rotation = *rotation;
    part->transform.rotation = g_vectorScratch.base.rotation;
    RotationQuaternion parentRotation = g_vectorScratch.base.rotation;
    FUN_001bc460();
    memcpy(&g_vectorScratch.base.rotation, part->transform.localPosition, sizeof(RotationQuaternion));
    f32 x = g_vectorScratch.base.rotation.x;
    f32 y = g_vectorScratch.base.rotation.y;
    f32 z = g_vectorScratch.base.rotation.z;
    RotationQuaternion rotatedPosition = {
        x * g_vectorScratch.matrix[0][0] + y * g_vectorScratch.matrix[1][0] + z * g_vectorScratch.matrix[2][0],
        x * g_vectorScratch.matrix[0][1] + y * g_vectorScratch.matrix[1][1] + z * g_vectorScratch.matrix[2][1],
        x * g_vectorScratch.matrix[0][2] + y * g_vectorScratch.matrix[1][2] + z * g_vectorScratch.matrix[2][2],
        x * g_vectorScratch.matrix[0][3] + y * g_vectorScratch.matrix[1][3] + z * g_vectorScratch.matrix[2][3]
    };
    g_vectorScratch.base.rotation = rotatedPosition;
    memcpy(part->transform.position, &g_vectorScratch.base.rotation, sizeof(RotationQuaternion));
    for (EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        g_vectorScratch.base.rotation = child->transform.rotation;
        g_vectorScratch.factor = parentRotation;
        FUN_001bc3e4();
        RotationQuaternion composed = g_vectorScratch.base.rotation;
        ApplyEffectRotation apply = reinterpret_cast<ApplyEffectRotation>(
            g_handlerTable[child->block->type].setOrientation);
        if (apply != NULL)
            apply(child->block->data, &composed);
    }
    FUN_001b4eb8(part, part->transform.origin);
}
}
