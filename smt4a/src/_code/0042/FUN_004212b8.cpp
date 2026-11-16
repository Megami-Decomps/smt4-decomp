/* NON_MATCHING: with the null-checked scene-model getter the index load now precedes the container test as in retail; only `mov r1, #0` and `mov r4, #1` are swapped. */
#include "common.h"

struct MoriScene;
struct MoriSceneModel;
struct SceneModelContainer {
    u8 unk00[8];
    MoriScene *scene; // 0x08
};
struct SceneCompletionOwner {
    u8 unk00[8];
    SceneModelContainer *container; // 0x08
    u8 unk0c[0x20];
    s32 state; // 0x2c
};

extern "C" {
MoriSceneModel *ptrVectorAt(MoriScene *scene, s32 index);
u32 FUN_004ffa14(MoriSceneModel *model);
u32 animationIsClipComplete(MoriSceneModel *model);

/* The container's scene model at index, or NULL without a container. */
static __inline MoriSceneModel *ownerGetSceneModel(const SceneCompletionOwner *owner, s32 index)
{
    const SceneModelContainer *container = owner->container;
    if (container == NULL)
        return NULL;
    return ptrVectorAt(container->scene, index);
}

// In state three, require both completion predicates when a scene model exists.
bool FUN_004212b8(SceneCompletionOwner *owner)
{
    if (owner->state == 3) {
        bool complete = true;
        MoriSceneModel *model = ownerGetSceneModel(owner, 0);
        if (model != NULL) {
            if (FUN_004ffa14(model) == 0) {
                complete = false;
            }
            if (animationIsClipComplete(model) == 0) {
                complete = false;
            }
        }
        return complete;
    }
    return false;
}
}
