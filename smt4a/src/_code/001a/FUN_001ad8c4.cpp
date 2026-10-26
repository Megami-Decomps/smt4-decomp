/* NON_MATCHING: instruction-for-instruction close to retail (the null-result path now keeps retail's shared zero register); callee-saved numbering (owner r5/target r4/skeleton r6/options r7) and the enabled-byte store scheduling differ. */
#include "gfx/ModelBoneAnimation.h"
#include "AsdSDK/Source/Gfx/Model/AsdScene.h"
extern "C" {
s32 nw_anim_res_ResAnim_IsFullBakedAnim(void **resource);
void nw_gfx_SkeletalModel_SetFullBakedAnimEnabled(AsdTrackOwner *owner, s32 enabled);
ModelBoneAnimationInstance *FUN_001b8108(ModelBoneAnimationCreateInfo *info, void *allocator);

static __inline ModelBoneAnimationInstance *createBoneAnimation(void *animationResource, f32 duration, u32 options, bool combinedTransforms)
{
    if (animationResource == NULL) {
        return NULL;
    }
    void *allocator = asdMemoryGetDefaultAllocator();
    ModelBoneAnimationCreateInfo info;
    info.resource = animationResource;
    info.duration = duration;
    info.options = options;
    info.enabled = 1;
    ModelBoneAnimationInstance *instance = FUN_001b8108(&info, allocator);
    instance->separateTransforms = !combinedTransforms;
    return instance;
}

// Build an animation for the model's active skeleton target, then bind it.
ModelBoneAnimationInstance *FUN_001ad8c4(AsdTrackOwner *owner, void *resource, u32 options)
{
    ModelBoneAnimationTarget *target = owner->activeTarget;
    ModelBoneResource *modelResource = ModelBoneResource::cast(owner->model.resource);
    RelativePointer *skeletonReference = &modelResource->skeleton;
    ModelBoneSkeleton *skeleton = static_cast<ModelBoneSkeleton *>(skeletonReference->get());
    if (nw_anim_res_ResAnim_IsFullBakedAnim(&resource))
        nw_gfx_SkeletalModel_SetFullBakedAnimEnabled(owner, 1);
    void *animationResource = resource;
    f32 duration = target->resource->duration;
    bool combinedTransforms = skeleton->hasFlags(2);
    ModelBoneAnimationInstance *instance = createBoneAnimation(animationResource, duration, options, combinedTransforms);
    instance->vtbl->target.bind(instance, target);
    return instance;
}
}
