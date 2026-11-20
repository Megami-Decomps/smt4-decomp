/* NON_MATCHING: switch and bank selection match (FUN_001c0998 shape); retail hoists a zero into r7 at entry (pushing r4-r8) and stores lastGroup/unk14 as one strd (r6,r7); this build loads the zero late and stores the fields singly. */
#include "common.h"
#include "shard/W6_W6Match7_SceneAttachment.h"

/* The part of a scene node collection that records which scene group it was registered in. */
struct SceneGroupSlot {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 group;
    /* 0x10 */ s32 lastGroup;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
};

struct SceneTraverser;
struct ModelTransformBuilder;
struct SceneLightCounter {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[0x14];
};

extern "C" {

void asdLightActivate(u32 slot);
extern SceneNode *sceneGroup1Root[2];  /* groups 1 and 4 */
extern SceneNode *sceneGroup2Root[2];  /* groups 2 and 5 */
extern SceneTraverser *g_asdModelSceneRoots[2];
extern ModelTransformBuilder *g_asdModelTransformBuilder[2];
extern SceneLightCounter g_asdLightCount[2];
void sceneTraverserVisit(SceneTraverser *traverser, ModelTransformBuilder *builder);

/* Attaches the collection to the root of scene group 1, 2, 4 or 5, visits that bank's scene and records the group. */
void sceneNodeCollectionRegisterGroup(SceneGroupSlot *collection, s32 group)
{
    SceneNode *root;
    switch (group) {
    case 1:
        root = sceneGroup1Root[0];
        break;
    case 2:
        root = sceneGroup2Root[0];
        asdLightActivate(0);
        break;
    case 4:
        root = sceneGroup1Root[1];
        break;
    case 5:
        root = sceneGroup2Root[1];
        asdLightActivate(1);
        break;
    default:
        return;
    }
    if (SceneNode *parent = root) {
        sceneNodeCollectionAttach((const SceneNodeCollection *)collection, parent);
        s32 bank;
        if (group < 3)
            bank = 0;
        else
            bank = 1;
        sceneTraverserVisit(g_asdModelSceneRoots[bank], g_asdModelTransformBuilder[bank]);
        ++g_asdLightCount[bank].count;
        collection->lastGroup = collection->group = group;
        collection->unk18 = collection->unk14 = 0;
    }
}

} /* extern "C" */
