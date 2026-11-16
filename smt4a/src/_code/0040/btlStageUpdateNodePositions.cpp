/* NON_MATCHING: only the independent Y/Z VADD scheduling order differs from retail. */
#include "shard/W6_W6Match1_BattleStageModelA.h"

extern "C" void controllerSetPositionXyz(PositionOwner* owner, f32 x, f32 y, f32 z);

extern "C" void btlStageUpdateNodePositions(BattleStageModelA* stage, NodeVec3 position)
{
    for (s32 index = 0; index < 3; ++index) {
        BattleStageNodeA* node = stage->nodes[index];
        if (node != NULL) {
            const NodeVec3& offset = stage->offsets[index];
            NodeVec3 translated = {
                offset.x + position.x, offset.y + position.y, offset.z + position.z
            };
            controllerSetPositionXyz(node->owner, translated.x, translated.y, translated.z);
        }
    }
}
