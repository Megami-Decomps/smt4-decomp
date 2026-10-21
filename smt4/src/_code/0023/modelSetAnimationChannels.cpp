#include "common.h"

struct ModelAnimationState;
struct ModelAnimationOwner {
    u32 unk00[2];                // 0x00
    ModelAnimationState* model;  // 0x08
};

extern "C" {
void modelSelectPrimaryMotion(ModelAnimationState* model, s32 index, f32 blend);
void modelSelectSecondaryMotion(ModelAnimationState* model, s32 index, f32 blend);
void FUN_002a55ec(ModelAnimationState* model, s32 index, f32 blend);

// Applies the animation selection to all three model animation channels.
void modelSetAnimationChannels(ModelAnimationOwner* owner, s32 index, f32 blend)
{
    modelSelectPrimaryMotion(owner->model, index, blend);
    modelSelectSecondaryMotion(owner->model, index, blend);
    FUN_002a55ec(owner->model, index, blend);
}
}
