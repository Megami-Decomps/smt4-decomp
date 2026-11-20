/* Applies `time` to the owner's model: animationEvaluateCallback, modelEvaluateFirstScalarChannel, then FUN_002101cc
 * (placed right after, so the last call is a linker NOP). */
#include "common.h"
#include "code/Code0021_Smt4.h"

struct ModelOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *model;
};

extern "C" {
void animationEvaluateCallback(void *model, f32 time); // declcheck: local (the shared declaration in AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h does not compile here: argument of type "void *" is incompatible with parameter of type "ScalarAnimationOwner *")
void modelEvaluateFirstScalarChannel(void *model, f32 time);
void FUN_002101cc(void *model, f32 time);

void modelOwnerApplyAnimationTime(ModelOwner *owner, f32 time)
{
    animationEvaluateCallback(owner->model, time);
    modelEvaluateFirstScalarChannel(owner->model, time);
    FUN_002101cc(owner->model, time);
}
}
