/* NON_MATCHING: the asdLightActivate calls now merge; retail keeps group in r6 and a zero in r7 hoisted to entry so the lastGroup/unk14 stores form one strd (r6,r7), ours allocates group in r4 and the zero late (no strd). */
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

extern "C" {

void asdLightActivate(u32 slot);
void sceneTraverserVisit(u32 first, u32 second);

extern u32 DAT_00464b7c;
extern u32 g_asdModelTransformBuilder;
extern SceneNode *sceneGroup1Root;   /* followed by the group 4 root */
extern SceneNode *sceneGroup2Root;   /* followed by the group 5 root */
extern u32 g_asdLightCount;          /* two six-word records */

/* Attaches the collection to the root of scene group 1, 2, 4 or 5, visits it and counts it. */
void sceneNodeCollectionRegisterGroup(SceneGroupSlot *collection, s32 group)
{
    SceneNode *root;
    s32 half;

    if (group == 1) {
        root = (&sceneGroup1Root)[0];
    } else if (group == 2) {
        root = (&sceneGroup2Root)[0];
        asdLightActivate(0);
    } else if (group == 4) {
        root = (&sceneGroup1Root)[1];
    } else if (group == 5) {
        root = (&sceneGroup2Root)[1];
        asdLightActivate(1);
    } else {
        return;
    }
    if (root != NULL) {
        sceneNodeCollectionAttach((const SceneNodeCollection *)collection, root);
        half = group >= 3;
        sceneTraverserVisit((&DAT_00464b7c)[half], (&g_asdModelTransformBuilder)[half]);
        (&g_asdLightCount)[half * 6]++;
        collection->group = group;
        collection->lastGroup = group;
        collection->unk14 = 0;
        collection->unk18 = 0;
    }
}

} /* extern "C" */
