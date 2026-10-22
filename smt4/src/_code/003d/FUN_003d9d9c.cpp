/* NON_MATCHING: retail supplies an extra zero integer register to the rotation setter and retains different selection-cache addressing. */
/* Resets active model animation players and publishes their selected animation indices. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" {
void modelSetAnimationChannels(void *model, s32 channels, f32 blend);
void animPlayerSetLoopPolicy(void *player, s32 policy);
void FUN_0028c618(void *player, f32 x, f32 y, f32 z);
void FUN_002a0428(void *model, s32 enabled);
void FUN_002d582c(void *model, f32 frame);

void FUN_003d9d9c(void *object)
{
    struct PlayerView {
        u8 unk00[0xC];
        s32 index;
        u8 unk10[0x1C];
        AnimationVisualPart *part;
    };
    struct ModelView {
        u32 flags;
        u32 unk04;
        PlayerView *player;
    };
    struct SlotView {
        ModelView *model;
        u32 animation;
        u8 unk08[0x14];
        s32 listIndex;
        u32 unk20;
        u32 flags;
    };
    struct Selection {
        u32 animation;
        s32 index;
    };
    struct AnimationOwnerView {
        u8 unk000[0x190];
        SlotView slots[50];
        u8 unk960[0x6D0];
        Selection selections[1];
    };
    AnimationOwnerView *owner = (AnimationOwnerView *)object;
    for (s32 i = 0; i < 50; ++i) {
        SlotView *slot = &owner->slots[i];
        if ((slot->flags & 2) && slot->model != NULL) {
            if (slot->model->player->index < 0) {
                FUN_002a0428(slot->model, 1);
            }
            FUN_0028c618(slot->model->player, 0.0f, 0.0f, 0.0f);
            modelSetAnimationChannels(slot->model, 0, 0.0f);
            FUN_002d582c(slot->model, 0.0f);
            animPlayerSetLoopPolicy(slot->model->player, 1);
            ModelView *model = slot->model;
            model->flags |= 2;
            model->player->part->enabled = 0;
            if (slot->listIndex >= 0) {
                Selection *selection = &owner->selections[slot->listIndex];
                selection->animation = slot->animation;
                selection->index = slot->listIndex;
            }
        }
    }
}
}
