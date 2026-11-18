#include "map/LmapPlayerModel.h"
#include "shard/W6_W6Match5_ArmySummon.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
void nodeSetTranslation3f(AsdMdlNode *node, s32 index, NodeVec3 translation);

// Restore the summoned model's root translation and rotation to zero.
void armySummonResetRootTransform(ArmySummonState *state)
{
    if (state->model) {
        NodeVec3 zero = nodeVec3(0.0f, 0.0f, 0.0f);
        nodeSetTranslation3f(state->model->node, 0, zero);
        modelPartSetRotationDegrees(state->model->node, 0, zero);
    }
}
}
