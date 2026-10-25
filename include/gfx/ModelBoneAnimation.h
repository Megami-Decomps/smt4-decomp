#ifndef GFX_MODELBONEANIMATION_H
#define GFX_MODELBONEANIMATION_H
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "gfx/ModelBoneLookup.h"

struct ModelBoneAnimationResource {
    u8 unk00[0x10];
    f32 duration;
};
struct ModelBoneAnimationTarget {
    u8 unk00[8];
    ModelBoneAnimationResource *resource;
};
struct ModelBoneAnimationInstance : AsdMotionInstance {
    u8 unk5c;
    u8 separateTransforms;
};
struct ModelBoneAnimationCreateInfo {
    void *resource;
    f32 duration;
    u32 options;
    u8 enabled;
};
typedef char ModelBoneAnimationLayoutCheck[
    offsetof(ModelBoneAnimationTarget, resource) == 8 &&
    offsetof(ModelBoneAnimationResource, duration) == 0x10 &&
    offsetof(ModelBoneAnimationInstance, separateTransforms) == 0x5d &&
    offsetof(AsdMotionInstanceVtbl, target.bind) == 0xc &&
    sizeof(AsdMotionInstanceVtbl) == 0x28 && sizeof(ModelBoneAnimationCreateInfo) == 0x10 ? 1 : -1];
#endif
