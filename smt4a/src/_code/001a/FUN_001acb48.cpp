/* NON_MATCHING: SDK quaternion/vector copies use different integer/VFP registers, matrix-dot scheduling, and final-call tail sharing. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include <string.h>
#include "gfx/VectorScratch.h"

namespace {
// The composition factor and matrix extend beyond the shared quaternion workspace prefix.
/* The orientation handler, called here with the composed rotation quaternion. */
typedef void (*ApplyEffectRotation)(void *data, const RotationQuaternion *rotation);
}

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);
void FUN_001bc3e4(void);
void FUN_001b4eb8(EffectTimelinePart *part, const f32 *origin);

// Rotate the part's local position and propagate the composed rotation to its children.
void FUN_001acb48(EffectTimelinePart *part, const RotationQuaternion *rotation)
{
    g_vectorScratch.first.rotation = *rotation;
    part->transform.rotation = g_vectorScratch.first.rotation;
    RotationQuaternion parentRotation = g_vectorScratch.first.rotation;
    gfxQuaternionWorkspaceBuildMatrix();
    memcpy(&g_vectorScratch.first.rotation, part->transform.localPosition, sizeof(RotationQuaternion));
    f32 x = g_vectorScratch.first.rotation.x;
    f32 y = g_vectorScratch.first.rotation.y;
    f32 z = g_vectorScratch.first.rotation.z;
    RotationQuaternion rotatedPosition = {
        x * g_vectorScratch.matrix.rows[0][0] + y * g_vectorScratch.matrix.rows[1][0] + z * g_vectorScratch.matrix.rows[2][0],
        x * g_vectorScratch.matrix.rows[0][1] + y * g_vectorScratch.matrix.rows[1][1] + z * g_vectorScratch.matrix.rows[2][1],
        x * g_vectorScratch.matrix.rows[0][2] + y * g_vectorScratch.matrix.rows[1][2] + z * g_vectorScratch.matrix.rows[2][2],
        x * g_vectorScratch.matrix.rows[0][3] + y * g_vectorScratch.matrix.rows[1][3] + z * g_vectorScratch.matrix.rows[2][3]
    };
    g_vectorScratch.first.rotation = rotatedPosition;
    memcpy(part->transform.position, &g_vectorScratch.first.rotation, sizeof(RotationQuaternion));
    for (EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        g_vectorScratch.first.rotation = child->transform.rotation;
        g_vectorScratch.second.rotation = parentRotation;
        FUN_001bc3e4();
        RotationQuaternion composed = g_vectorScratch.first.rotation;
        ApplyEffectRotation apply = reinterpret_cast<ApplyEffectRotation>(
            g_handlerTable[child->block->type].setOrientation);
        if (apply != NULL)
            apply(child->block->data, &composed);
    }
    FUN_001b4eb8(part, part->transform.origin);
}
}
