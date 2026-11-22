/* NON_MATCHING: aggressive vector inlining folds success/failure branches and changes resource-search/register allocation; -O2 candidate. */
#include "nw/ut/MoveArray.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include <new>
#include <memory>

struct SceneChildResource {
    u8 unk00[0x20];
    s32 count;
    ResourceRelativePointer<ResourceRelativePointer<SceneChildResource> > children;
};
struct SceneNodePrefix {
    u8 unk00[8];
    SceneChildResource *resource;
    SceneNodePrefix *parent;
};
struct SceneChildSet {
    SceneNodePrefix node;
    SceneNodePrefix *owner;
    nw::ut::MoveArray<SceneNodePrefix *> children;
};
extern "C" {
u32 nw_gfx_SceneNode_IsCircularReference(SceneNodePrefix *, SceneNodePrefix *);

void sceneNodeAttachDeclaredChild(SceneChildSet *parent, SceneNodePrefix *child)
{
    if (child->parent)
        return;
    SceneChildResource *resource = parent->node.resource;
    s32 index = 0;
    while (index < resource->count && resource->children.get()[index].get() != child->resource)
        ++index;
    if (index >= resource->count)
        return;
    SceneNodePrefix *ancestor = parent->node.parent;
    if (ancestor && (ancestor == child || nw_gfx_SceneNode_IsCircularReference(ancestor, child)))
        return;
    if (child->parent)
        return;
    if (parent->children.push_back(child))
        child->parent = parent->owner;
}
}
