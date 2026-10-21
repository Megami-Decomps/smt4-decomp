/* NON_MATCHING: only the independent Y and Z VADD scheduling order differs from retail. */
#include "shard/W6_W6Match1_BattleStageModel.h"

extern "C" {
void nodeSetTranslation3f(NodeOwner* owner, u32 reserved, NodeVec3 translation);

void btlStageUpdateNodePositions(BattleStageModel* stage, NodeVec3 position)
{
    for (s32 index = 0; index < 3; ++index) {
        BattleStageNode* node = stage->scene.nodes[index];
        if (node != NULL) {
            const NodeVec3& offset = stage->scene.offsets[index];
            NodeVec3 translated = {
                offset.x + position.x, offset.y + position.y, offset.z + position.z
            };
            nodeSetTranslation3f(node->owner, 0, translated);
        }
    }
}
}
