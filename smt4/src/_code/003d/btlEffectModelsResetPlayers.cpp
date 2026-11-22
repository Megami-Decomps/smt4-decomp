/* Resets active model animation players and publishes their selected animation indices. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" {
void modelSetAnimationChannels(void *model, s32 channels, f32 blend);
void animPlayerSetLoopPolicy(void *player, s32 policy);
void modelPartSetRotationDegrees(void *player, s32 index, f32 x, f32 y, f32 z);
void lightOwnerRegister(void *model, s32 enabled);
void animOwnerSetScale(void *model, f32 frame);

void btlEffectModelsResetPlayers(void *object)
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
        u8 unk960[0x6A0];
        struct {
            u8 unk000[0x30];
            Selection selections[1];
        } tail;
    };
    AnimationOwnerView *owner = (AnimationOwnerView *)object;
    for (s32 i = 0; i < 50; ++i) {
        SlotView *slot = &owner->slots[i];
        if ((slot->flags & 2) && slot->model != NULL) {
            if (slot->model->player->index < 0) {
                lightOwnerRegister(slot->model, 1);
            }
            modelPartSetRotationDegrees(slot->model->player, 0, 0.0f, 0.0f, 0.0f);
            modelSetAnimationChannels(slot->model, 0, 0.0f);
            animOwnerSetScale(slot->model, 0.0f);
            animPlayerSetLoopPolicy(slot->model->player, 1);
            ModelView *model = slot->model;
            model->flags |= 2;
            model->player->part->enabled = 0;
            s32 index = slot->listIndex;
            if (index >= 0) {
                owner->tail.selections[index].animation = slot->animation;
                owner->tail.selections[index].index = slot->listIndex;
            }
        }
    }
}
}
