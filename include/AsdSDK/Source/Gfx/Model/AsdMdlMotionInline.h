/* Inline bodies the model's motion code was compiled with: the scene node's animation-object setters
 * (nw::gfx's Set...AnimObject, each guarded by its animation group) and modelSelectSecondaryMotion's body
 * (smt4 0x287098) for the callers retail inlined it into: asdMdlNodeBuildMotionTables selects motion 0
 * with no blend, which leaves the speed reset, the setMotion call and the index store (the index kept in
 * a register of its own). */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMDLMOTIONINLINE_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMDLMOTIONINLINE_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* nw::gfx::SkeletalModel::SetSkeletalAnimObject: the object that plays the skeletal animation group. */
static __inline void asdMdlSceneNodeSetSkeletalAnimObject(AsdMdlSceneNode *sceneNode, void *object, s32 slot = 0)
{
    if (sceneNode->activeTarget != NULL) {
        sceneNode->trackList->setItem(sceneNode->activeIndex, object, slot);
    }
}

/* nw::gfx::Model::SetMaterialAnimObject: the object that plays the material (secondary) animation group. */
static __inline void asdMdlSceneNodeSetMaterialAnimObject(AsdMdlSceneNode *sceneNode, void *object, s32 slot = 0)
{
    if (sceneNode->secondaryActive != 0) {
        sceneNode->trackList->setItem(sceneNode->secondaryIndex, object, slot);
    }
}

/* nw::gfx::Model::SetVisibilityAnimObject: the object that plays the visibility animation group. */
static __inline void asdMdlSceneNodeSetVisibilityAnimObject(AsdMdlSceneNode *sceneNode, void *object, s32 slot = 0)
{
    if (sceneNode->visibilityGroup != NULL) {
        sceneNode->trackList->setItem(sceneNode->visibilityIndex, object, slot);
    }
}

/* How far the model's secondary track lets a blend run (0 without a track). */
static __inline f32 asdMdlSecondaryMotionBlendLimit(const AsdMdlNode *model)
{
    if (model->secondaryMotionCount > 0 && model->sceneNode->secondaryActive != 0) {
        AsdMdlSceneNode *sceneNode = model->sceneNode;
        AsdTrackNode *node = sceneNode->trackList->getItem(sceneNode->secondaryIndex, 0);
        if (node != NULL)
            return static_cast<AsdTrackBlendNode *>(node)->blendLimit;
    }
    return 0.0f;
}

/* Selects a secondary motion and updates its interpolation without exceeding the track's limit
 * (modelSelectSecondaryMotion is this body; asdMdlNodeBuildMotionTables has it inlined). */
static __inline void asdMdlSelectSecondaryMotion(AsdMdlNode *model, s32 index, f32 blend)
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
        f32 limit = asdMdlSecondaryMotionBlendLimit(model);
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

#endif
