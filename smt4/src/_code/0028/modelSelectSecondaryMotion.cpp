/* NON_MATCHING: virtual-call operands, track accessor setup and blend-store scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"

static __inline f32 secondaryMotionBlendLimit(const AsdMotionModel *model)
{
    if (model->secondary.motionCount > 0 && model->owner->secondary.active != 0) {
        AsdTrackOwner *owner = model->owner;
        AsdTrackNode *node = owner->list->getItem(owner->secondary.index, 0);
        if (node != NULL)
            return static_cast<AsdTrackBlendNode *>(node)->blendLimit;
    }
    return 0.0f;
}

// Select a secondary motion and update its interpolation without exceeding the track's limit.
extern "C" void modelSelectSecondaryMotion(AsdMotionModel *model, s32 index, f32 blend)
{
    model->secondaryRate.speed = 1.0f;
    if (index < 0 || model->secondary.motionCount <= 0 || index >= model->secondary.motionCount)
        return;
    AsdMotionInstance *instance = model->secondary.instance;
    if (instance == NULL)
        return;
    instance->vtbl->setMotion(instance, model->secondary.motionTable[index]);
    model->secondary.currentMotion = index;
    if (blend != 0.0f) {
        f32 limit = secondaryMotionBlendLimit(model);
        if (blend > limit)
            blend = limit;
        f32 nextBlend = instance->interpolate(instance->interpolateContext,
            instance->blendFrom, instance->blendLimit, blend);
        f32 previousBlend = instance->blend;
        instance->blend = nextBlend;
        instance->previousBlend = previousBlend;
        instance->blendChanged = 1;
    }
}
