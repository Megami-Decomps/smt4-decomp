/* NON_MATCHING: btlStageUpdateNodePositions: only the Y and Z VADD order differs; FUN_00340558 (same original file, callee inlined): the zero-vector vadd/vldm grouping differs. */
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

static __inline NodeVec3 nodeVec3Splat(f32 value)
{
    NodeVec3 vector = { value, value, value };
    return vector;
}

s32 modelHasLoadedAttachment(BattleStageNode *node);
void FUN_002a0428(BattleStageNode *node, s32 enable);
void FUN_002e1230(BattleStageNode *node, s32 enable);
void animOwnerSetScale(BattleStageNode *node, f32 scale);
void FUN_002a04f0(s32 value);

/* Once all three stage nodes have loaded, shows them at full scale and places them at the origin; returns whether they were ready. */
u32 FUN_00340558(BattleStageModel *stage)
{
    s32 index;

    for (index = 0; index < 3; index++) {
        if (stage->scene.nodes[index] != NULL && !modelHasLoadedAttachment(stage->scene.nodes[index])) {
            return 0;
        }
    }
    for (index = 0; index < 3; ++index) {
        if (stage->scene.nodes[index] != NULL) {
            FUN_002a0428(stage->scene.nodes[index], 1);
            FUN_002e1230(stage->scene.nodes[index], 1);
            animOwnerSetScale(stage->scene.nodes[index], 1.0f);
        }
    }
    btlStageUpdateNodePositions(stage, nodeVec3Splat(0.0f));
    FUN_002a04f0(0);
    return 1;
}

}
