/* NON_MATCHING: only the dictionary relative pointer is added as offset+base (retail `addne r2, r3, r0`) and the translation copy loads y,x,z with a str + strd store pair instead of stm + str. */
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "gfx/ModelBoneLookup.h"
extern "C" {
u32 libc_strlen(const char *name);
ResDicPatriciaNode *nw_ut_ResDicPatricia_Get(ResDicPatricia **dictionary, const char *name, u32 length);

// The index of the named bone in the dictionary, or -1.
static __inline s32 findBone(ResDicPatricia **dictionary, const char *name)
{
    if (*dictionary != NULL && name != NULL) {
        ResDicPatriciaNode *node = nw_ut_ResDicPatricia_Get(dictionary, name, libc_strlen(name));
        if (node != NULL)
            return node - (*dictionary)->nodes;
    }
    return -1;
}

// Find a named skeleton bone and copy the translation from its current matrix.
u32 FUN_001ad7cc(AsdMotionModel *model, const char *name, SkeletonVector3 *position)
{
    ModelBoneResource *resource = ModelBoneResource::cast(model->owner->model.resource);
    RelativePointer *skeletonReference = &resource->skeleton;
    ModelBoneSkeleton *skeleton = static_cast<ModelBoneSkeleton *>(skeletonReference->get());
    RelativePointer *dictionaryReference = &skeleton->dictionary;
    ResDicPatricia *dictionary = static_cast<ResDicPatricia *>(dictionaryReference->get());
    s32 bone = findBone(&dictionary, name);
    if (bone < 0) {
        position->values[0] = 0.0f;
        position->values[1] = 0.0f;
        position->values[2] = 0.0f;
        return 0;
    }
    ModelBoneMatrixProvider *provider = model->owner->secondary.skeleton.provider;
    SkeletonMatrix34 *matrix = &provider->vtable->getMatrices(provider)->matrices[bone];
    SkeletonVector3 translation = {{matrix->values[3], matrix->values[7], matrix->values[11]}};
    *position = translation;
    return 1;
}
}
