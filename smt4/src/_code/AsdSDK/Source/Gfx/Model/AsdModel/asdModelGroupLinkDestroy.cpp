#include "common.h"

/* A scene group root: the scene node header, then its child list. */
struct AsdSceneGroup {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 children[0x10];
};

struct AsdLinkedNode;
struct AsdNodeOwner;

struct AsdLinkedNodeVtable {
    void (*destroy)(AsdLinkedNode *node);
};

struct AsdNodeOwnerVtable {
    void *unk00[3];
    void (*release)(AsdNodeOwner *owner, AsdLinkedNode *node); /* 0x0C */
};

struct AsdNodeOwner {
    /* 0x00 */ const AsdNodeOwnerVtable *vtable;
};

struct AsdLinkedNode {
    /* 0x00 */ const AsdLinkedNodeVtable *vtable;
    /* 0x04 */ AsdNodeOwner *owner;
};

/* A model node attached to one of the two scene groups. */
struct AsdModelGroupLink {
    /* 0x00 */ s32 group; /* 0 or 1; -1 when detached */
    /* 0x04 */ AsdLinkedNode *node;
};

extern "C" {

extern AsdSceneGroup *g_asdModelSlotArray1[];
extern void *DAT_00464b7c[2];                  /* scene traverser per group */
extern void *g_asdModelTransformBuilder[2];    /* transform builder per group */

u8 FUN_002abbe8(u8 *children, void *child);
void sceneTraverserVisit(void *traverser, void *builder);
void asdMemFree(void *memory);

void nw_gfx_SceneNode_AttachChild(AsdSceneGroup *parent, void *child);

/* Moves the link's node into scene group 0 or 1 (or detaches it with -1) and re-traverses every
 * group it left or joined (FUN_002e113c, inlined here). */
static __inline void asdModelGroupLinkSetGroup(AsdModelGroupLink *link, s32 group)
{
    s32 previous = link->group;

    if (previous == group) {
        return;
    }
    link->group = group;
    if (group == 0 || group == 1) {
        nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray1[group], link->node);
    } else if (group == -1) {
        FUN_002abbe8(g_asdModelSlotArray1[previous]->children, link->node);
    }
    if (link->group == 0 || previous == 0) {
        sceneTraverserVisit(DAT_00464b7c[0], g_asdModelTransformBuilder[0]);
    }
    if (link->group == 1 || previous == 1) {
        sceneTraverserVisit(DAT_00464b7c[1], g_asdModelTransformBuilder[1]);
    }
}

/* Detaches the link's node from its scene group (re-traversing that group), destroys the node
 * and frees the link. */
void asdModelGroupLinkDestroy(AsdModelGroupLink *link)
{
    AsdLinkedNode *node;

    asdModelGroupLinkSetGroup(link, -1);
    node = link->node;
    if (node != NULL) {
        node->vtable->destroy(node);
        node->owner->vtable->release(node->owner, node);
        link->node = NULL;
    }
    asdMemFree(link);
}

} /* extern "C" */
