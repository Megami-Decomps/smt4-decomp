#include "common.h"

struct AnimationModel;
struct AnimationModelHolder {
    u8 unk00[8];
    AnimationModel *model; // 0x08
};

extern "C" {
void FUN_0020fff4(AnimationModel *);
void modelSelectSecondaryMotion(AnimationModel *, s32, f32);
void asdModelSelectSecondaryMotion(AnimationModel *, s32, f32);

// Reset the model animation and select the requested motion with its blend weight.
void asdModelResetAndSelectSecondaryMotion(AnimationModelHolder *instance, s32 motion, f32 blendWeight)
{
    FUN_0020fff4(instance->model);
    modelSelectSecondaryMotion(instance->model, motion, blendWeight);
    asdModelSelectSecondaryMotion(instance->model, motion, blendWeight);
}
}
