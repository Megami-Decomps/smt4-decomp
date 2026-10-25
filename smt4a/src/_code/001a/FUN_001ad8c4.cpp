/* NON_MATCHING: null-result lifetime, mask-query operands and bind/create argument registers differ. */
#include "gfx/ModelBoneAnimation.h"
extern "C" {
s32 nw_anim_res_ResAnim_IsFullBakedAnim(void **resource);
void nw_gfx_SkeletalModel_SetFullBakedAnimEnabled(AsdTrackOwner *owner, s32 enabled);
void *asdMemoryGetDefaultAllocator();
ModelBoneAnimationInstance *FUN_001b8108(ModelBoneAnimationCreateInfo *info, void *allocator);

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
    ModelBoneAnimationInstance *instance = NULL;
    if (animationResource != NULL) {
        void *allocator = asdMemoryGetDefaultAllocator();
        ModelBoneAnimationCreateInfo info;
        info.resource = animationResource;
        info.duration = duration;
        info.options = options;
        info.enabled = 1;
        instance = FUN_001b8108(&info, allocator);
        instance->separateTransforms = !combinedTransforms;
    }
    instance->vtbl->target.bind(instance, target);
    return instance;
}
}
