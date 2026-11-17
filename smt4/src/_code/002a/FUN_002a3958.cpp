/* NON_MATCHING: SDK quaternion/vector copies use different integer/VFP registers, matrix-dot scheduling, and final-call tail sharing. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include <string.h>
#include "gfx/VectorScratch.h"

namespace {
/* The orientation handler, called here with the composed rotation quaternion. */
typedef void (*ApplyEffectRotation)(void *data, const RotationQuaternion *rotation);
}

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);
void FUN_002a2c00(void);
void FUN_002a3ab0(EffectTimelinePart *part, const f32 *origin);

// Rotate the part's local position and propagate the composed rotation to its children.
void FUN_002a3958(EffectTimelinePart *part, const RotationQuaternion *rotation)
{
    VectorScratch *workspace = &g_vectorScratch;
    workspace->first.rotation = *rotation;
    part->transform.rotation = workspace->first.rotation;
    RotationQuaternion parentRotation = workspace->first.rotation;
    gfxQuaternionWorkspaceBuildMatrix();
    memcpy(&workspace->first.rotation, part->transform.localPosition, sizeof(RotationQuaternion));
    f32 x = workspace->first.rotation.x;
    f32 y = workspace->first.rotation.y;
    f32 z = workspace->first.rotation.z;
    RotationQuaternion rotatedPosition = {
        x * workspace->matrix.rows[0][0] + y * workspace->matrix.rows[1][0] + z * workspace->matrix.rows[2][0],
        x * workspace->matrix.rows[0][1] + y * workspace->matrix.rows[1][1] + z * workspace->matrix.rows[2][1],
        x * workspace->matrix.rows[0][2] + y * workspace->matrix.rows[1][2] + z * workspace->matrix.rows[2][2],
        x * workspace->matrix.rows[0][3] + y * workspace->matrix.rows[1][3] + z * workspace->matrix.rows[2][3]
    };
    workspace->first.rotation = rotatedPosition;
    memcpy(part->transform.position, &workspace->first.rotation, sizeof(RotationQuaternion));
    for (EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        workspace->first.rotation = child->transform.rotation;
        workspace->second.rotation = parentRotation;
        FUN_002a2c00();
        RotationQuaternion composed = workspace->first.rotation;
        ApplyEffectRotation apply = reinterpret_cast<ApplyEffectRotation>(
            g_handlerTable[child->block->type].setOrientation);
        if (apply != NULL)
            apply(child->block->data, &composed);
    }
    FUN_002a3ab0(part, part->transform.origin);
}
}
