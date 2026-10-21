/* NON_MATCHING: readable state guard is shrink-wrapped before the push, and the zero index argument is loaded later than retail. */
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
MoriSceneModel *FUN_0040619c(MoriScene *scene, s32 index);
u32 FUN_004ffa14(MoriSceneModel *model);
u32 animationIsClipComplete(MoriSceneModel *model);

// In state three, require both completion predicates when a scene model exists.
bool FUN_004212b8(SceneCompletionOwner *owner)
{
    if (owner->state != 3) {
        return false;
    }
    bool complete = true;
    if (owner->container != NULL) {
        MoriSceneModel *model = FUN_0040619c(owner->container->scene, 0);
        if (model != NULL) {
            if (FUN_004ffa14(model) == 0) {
                complete = false;
            }
            if (animationIsClipComplete(model) == 0) {
                complete = false;
            }
        }
    }
    return complete;
}
}
