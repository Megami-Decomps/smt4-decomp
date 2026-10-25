/* NON_MATCHING: group-root loads and the traversal-bank selection are scheduled differently. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct SceneNode;
struct SceneTraverser;
struct ModelTransformBuilder;
struct SceneLightCounter {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[0x14];
};

extern "C" {
extern SceneNode *sceneGroup1Root[2];
extern SceneNode *sceneGroup2Root[2];
extern SceneTraverser *DAT_00464b7c[2];
extern ModelTransformBuilder *g_asdModelTransformBuilder[2];
extern SceneLightCounter g_asdLightCount[2];
void nw_gfx_SceneNode_AttachChild(SceneNode *parent, SceneNode *child);
void sceneTraverserVisit(SceneTraverser *traverser, ModelTransformBuilder *builder);

void FUN_001c0998(SceneNode *node, s32 group)
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
    if (root) {
        nw_gfx_SceneNode_AttachChild(root, node);
        u32 bank = group >= 3;
        sceneTraverserVisit(DAT_00464b7c[bank], g_asdModelTransformBuilder[bank]);
        ++g_asdLightCount[bank].count;
    }
}
}
