/* NON_MATCHING: retail inlines btlStageUpdateNodePositions (defined just before this function in the same
 * original file) with a zero position; across units armcc emits the call instead. */
#include "shard/W6_W6Match1_BattleStageModel.h"

extern "C" {

s32 FUN_002adee0(BattleStageNode *node);
void FUN_002a0428(BattleStageNode *node, s32 enable);
void FUN_002e1230(BattleStageNode *node, s32 enable);
void animOwnerSetScale(BattleStageNode *node, f32 scale);
void FUN_002a04f0(s32 value);

/* Once all three stage nodes have loaded, shows them at full scale and places them at the origin; returns whether they were ready. */
u32 FUN_00340558(BattleStageModel *stage)
{
    s32 index;

    for (index = 0; index < 3; index++) {
        if (stage->scene.nodes[index] != NULL && !FUN_002adee0(stage->scene.nodes[index])) {
            return 0;
        }
    }
    for (index = 0; index < 3; index++) {
        if (stage->scene.nodes[index] != NULL) {
            FUN_002a0428(stage->scene.nodes[index], 1);
            FUN_002e1230(stage->scene.nodes[index], 1);
            animOwnerSetScale(stage->scene.nodes[index], 1.0f);
        }
    }
    NodeVec3 origin = { 0.0f, 0.0f, 0.0f };
    btlStageUpdateNodePositions(stage, origin);
    FUN_002a04f0(0);
    return 1;
}

} /* extern "C" */
