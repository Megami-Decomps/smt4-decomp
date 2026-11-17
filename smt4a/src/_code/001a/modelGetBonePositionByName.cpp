/* NON_MATCHING: only the translation copy differs: retail loads y,x,z and stores with a str + strd pair, armcc here uses stm + str. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
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
u32 modelGetBonePositionByName(AsdMdlNode *model, const char *name, SkeletonVector3 *position)
{
    ModelBoneResource *resource = ModelBoneResource::cast(model->sceneNode->boneResource);
    ModelBoneSkeleton *skeleton = resource->skeleton.get();
    ResDicPatricia *dictionary = skeleton->dictionary.get();
    s32 bone = findBone(&dictionary, name);
    if (bone < 0) {
        position->values[0] = 0.0f;
        position->values[1] = 0.0f;
        position->values[2] = 0.0f;
        return 0;
    }
    ModelBoneMatrixProvider *provider = model->sceneNode->skeleton;
    SkeletonMatrix34 *matrix = &provider->vtable->getMatrices(provider)->matrices[bone];
    SkeletonVector3 translation = {{matrix->values[3], matrix->values[7], matrix->values[11]}};
    *position = translation;
    return 1;
}
}
