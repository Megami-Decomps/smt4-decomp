#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" {
BtlMainState *btlGetMainState(void);
void FUN_002a0428(MaterialMergeModel *model, s32 mode);
s32 FUN_0027dab0(BtlMainState *battle, BtlActionRecord *action);
MaterialMergeVariants *FUN_0027da30(BtlMainState *battle, s32 member);
void effectComputeScaledImageBounds(const BattleSpritePlacement *placement, f32 *output, f32 scale);
void modelSetPosition(MaterialMergePose *pose, s32 node, const f32 *position);
void nodeSetTranslation(MaterialMergePose *pose, s32 node, const BattleVector3 *translation);

/* Position a battle model using its selected sprite placement and scaled anchor. */
void FUN_0023c428(MaterialMergeOwner *owner, s32 index)
{
    MaterialMergeModel *model = owner->models.results[index].model;
    MaterialMergeResult *result = &owner->models.results[index];
    if (model != NULL) {
        if (model->pose->state < 0)
            FUN_002a0428(model, 1);
        BtlActionRecord *action = &btlGetMainState()->actions[index];
        s32 variant = FUN_0027dab0(btlGetMainState(), action);
        if (variant < 0)
            variant = 0;
        MaterialMergePlacement *selected = NULL;
        MaterialMergeVariants *variants = FUN_0027da30(btlGetMainState(), action->memberId);
        s32 key = variants->keys[variant];
        for (s32 placement = 0; placement < 50; ++placement) {
            if (owner->placements.entries[placement].key == key) {
                selected = &owner->placements.entries[placement];
                break;
            }
        }
        BattleVector3 placementPosition;
        effectComputeScaledImageBounds(&selected->placement, &placementPosition.x, action->geometry.scale);
        modelSetPosition(owner->models.results[index].model->pose, 0, &placementPosition.x);
        BattleVector3 translation;
        enemyDrawComputeSpriteAnchorOffset(&selected->placement, &translation, action->geometry.scale);
        translation.x += action->geometry.position[0];
        translation.y += action->geometry.position[1];
        translation.z += action->geometry.position[2];
        nodeSetTranslation(result->model->pose, 0, &translation);
    }
}
}
