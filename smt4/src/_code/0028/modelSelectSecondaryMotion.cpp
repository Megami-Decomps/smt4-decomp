/* NON_MATCHING: virtual-call operands, track accessor setup and blend-store scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

static __inline f32 secondaryMotionBlendLimit(const AsdMdlNode *model)
{
    if (model->secondaryMotionCount > 0 && model->sceneNode->secondaryActive != 0) {
        AsdMdlSceneNode *sceneNode = model->sceneNode;
        AsdTrackNode *node = sceneNode->trackList->getItem(sceneNode->secondaryIndex, 0);
        if (node != NULL)
            return static_cast<AsdTrackBlendNode *>(node)->blendLimit;
    }
    return 0.0f;
}

// Select a secondary motion and update its interpolation without exceeding the track's limit.
extern "C" void modelSelectSecondaryMotion(AsdMdlNode *model, s32 index, f32 blend)
{
    model->secondarySpeed = 1.0f;
    if (index < 0 || model->secondaryMotionCount <= 0 || index >= model->secondaryMotionCount)
        return;
    AsdMotionInstance *instance = model->secondaryInstance;
    if (instance == NULL)
        return;
    instance->vtbl->setMotion(instance, model->secondaryMotionTable[index]);
    model->secondaryCurrentMotion = index;
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
