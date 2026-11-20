#include "common.h"
#include "gfx/LightRegistry.h"

/* A scene group root: the scene node header, then its child list. */
struct AsdSceneGroup {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 children[0x10];
};

/* A model node attached to one of the two scene groups. */
struct AsdModelGroupLink {
    /* 0x00 */ s32 group; /* 0 or 1; -1 when detached */
    /* 0x04 */ void *node;
};

extern "C" {

extern AsdSceneGroup *g_asdModelSlotArray1[];
extern void *g_asdModelSceneRoots[2];                  /* scene traverser per group */
extern void *g_asdModelTransformBuilder[2];    /* transform builder per group */

void nw_gfx_SceneNode_AttachChild(AsdSceneGroup *parent, void *child);
u8 asdModelSlotVectorRemove(u8 *children, void *child);

/* Moves a model node into scene group 0 or 1 (or detaches it with -1) and re-traverses every group
 * it left or joined. */
void FUN_002e113c(AsdModelGroupLink *link, s32 group)
{
    s32 previous = link->group;

    if (previous == group) {
        return;
    }
    link->group = group;
    if (link->group == 0 || link->group == 1) {
        nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray1[link->group], link->node);
    } else if (link->group == -1) {
        asdModelSlotVectorRemove(g_asdModelSlotArray1[previous]->children, link->node);
    }
    if (link->group == 0 || previous == 0) {
        sceneTraverserVisit(g_asdModelSceneRoots[0], g_asdModelTransformBuilder[0]);
    }
    if (link->group == 1 || previous == 1) {
        sceneTraverserVisit(g_asdModelSceneRoots[1], g_asdModelTransformBuilder[1]);
    }
}

} /* extern "C" */
