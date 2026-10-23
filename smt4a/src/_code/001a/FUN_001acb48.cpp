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
typedef void (*ApplyEffectRotation)(void *data, const RotationQuaternion *rotation);
}

extern "C" {
extern EffectRotationWorkspace DAT_006471dc;
extern Handler g_handlerTable[];
void FUN_001bc460(void);
void FUN_001bc3e4(void);
void FUN_001b4eb8(EffectTimelinePart *part, const f32 *origin);

// Rotate the part's local position and propagate the composed rotation to its children.
void FUN_001acb48(EffectTimelinePart *part, const RotationQuaternion *rotation)
{
    EffectRotationWorkspace *workspace = &DAT_006471dc;
    workspace->base.rotation = *rotation;
    part->transform.rotation = workspace->base.rotation;
    RotationQuaternion parentRotation = workspace->base.rotation;
    FUN_001bc460();
    memcpy(&workspace->base.rotation, part->transform.localPosition, sizeof(RotationQuaternion));
    f32 x = workspace->base.rotation.x;
    f32 y = workspace->base.rotation.y;
    f32 z = workspace->base.rotation.z;
    RotationQuaternion rotatedPosition = {
        x * workspace->matrix[0][0] + y * workspace->matrix[1][0] + z * workspace->matrix[2][0],
        x * workspace->matrix[0][1] + y * workspace->matrix[1][1] + z * workspace->matrix[2][1],
        x * workspace->matrix[0][2] + y * workspace->matrix[1][2] + z * workspace->matrix[2][2],
        x * workspace->matrix[0][3] + y * workspace->matrix[1][3] + z * workspace->matrix[2][3]
    };
    workspace->base.rotation = rotatedPosition;
    memcpy(part->transform.position, &workspace->base.rotation, sizeof(RotationQuaternion));
    for (EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        workspace->base.rotation = child->transform.rotation;
        workspace->factor = parentRotation;
        FUN_001bc3e4();
        RotationQuaternion composed = workspace->base.rotation;
        ApplyEffectRotation apply = reinterpret_cast<ApplyEffectRotation>(
            g_handlerTable[child->block->type].callback24);
        if (apply != NULL)
            apply(child->block->data, &composed);
    }
    FUN_001b4eb8(part, part->transform.origin);
}
}
