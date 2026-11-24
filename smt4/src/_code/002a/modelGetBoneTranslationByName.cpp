#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gfx/ModelBoneLookup.h"
#include "nw/math/MTX44Transform.h"
#include <string.h>
extern "C" {
u32 libc_strlen(const char *name);
ResDicPatriciaNode *nw_ut_ResDicPatricia_Get(ResDicPatricia **dictionary, const char *name, u32 length);

/* Finds a bone by name in the resource dictionary, returning -1 when absent. */
static __inline s32 findBone(ResDicPatricia **dictionary, const char *name)
{
    if (*dictionary != NULL && name != NULL) {
        ResDicPatriciaNode *node = nw_ut_ResDicPatricia_Get(dictionary, name, libc_strlen(name));
        if (node != NULL)
            return node - (*dictionary)->nodes;
    }
    return -1;
}

/* Finds a named skeleton bone and copies the translation from its current matrix. */
u32 modelGetBoneTranslationByName(AsdMdlNode *model, const char *name, SkeletonVector3 *position)
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
    nw::math::VEC3Value translation(matrix->values[3], matrix->values[7], matrix->values[11]);
    memcpy(position, &translation, sizeof(*position));
    return 1;
}
} /* extern "C" */
