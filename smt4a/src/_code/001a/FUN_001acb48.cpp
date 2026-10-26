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
    DAT_006471dc.base.rotation = *rotation;
    part->transform.rotation = DAT_006471dc.base.rotation;
    RotationQuaternion parentRotation = DAT_006471dc.base.rotation;
    FUN_001bc460();
    memcpy(&DAT_006471dc.base.rotation, part->transform.localPosition, sizeof(RotationQuaternion));
    f32 x = DAT_006471dc.base.rotation.x;
    f32 y = DAT_006471dc.base.rotation.y;
    f32 z = DAT_006471dc.base.rotation.z;
    RotationQuaternion rotatedPosition = {
        x * DAT_006471dc.matrix[0][0] + y * DAT_006471dc.matrix[1][0] + z * DAT_006471dc.matrix[2][0],
        x * DAT_006471dc.matrix[0][1] + y * DAT_006471dc.matrix[1][1] + z * DAT_006471dc.matrix[2][1],
        x * DAT_006471dc.matrix[0][2] + y * DAT_006471dc.matrix[1][2] + z * DAT_006471dc.matrix[2][2],
        x * DAT_006471dc.matrix[0][3] + y * DAT_006471dc.matrix[1][3] + z * DAT_006471dc.matrix[2][3]
    };
    DAT_006471dc.base.rotation = rotatedPosition;
    memcpy(part->transform.position, &DAT_006471dc.base.rotation, sizeof(RotationQuaternion));
    for (EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        DAT_006471dc.base.rotation = child->transform.rotation;
        DAT_006471dc.factor = parentRotation;
        FUN_001bc3e4();
        RotationQuaternion composed = DAT_006471dc.base.rotation;
        ApplyEffectRotation apply = reinterpret_cast<ApplyEffectRotation>(
            g_handlerTable[child->block->type].callback24);
        if (apply != NULL)
            apply(child->block->data, &composed);
    }
    FUN_001b4eb8(part, part->transform.origin);
}
}
