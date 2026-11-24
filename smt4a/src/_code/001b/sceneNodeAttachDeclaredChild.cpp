/* NON_MATCHING: aggressive vector inlining folds success/failure branches and changes resource-search/register allocation; -O2 candidate. */
#include "nw/gfx/SceneNode.h"

using nw::gfx::SceneChildResource;
using nw::gfx::SceneNode;

extern "C" {

void sceneNodeAttachDeclaredChild(SceneNode *parent, SceneNode *child)
{
    if (child->parent)
        return;
    SceneChildResource *resource = parent->resource;
    s32 index = 0;
    while (index < resource->count && resource->children.get()[index].get() != child->resource)
        ++index;
    if (index >= resource->count)
        return;
    SceneNode *ancestor = parent->parent;
    if (ancestor && (ancestor == child || nw_gfx_SceneNode_IsCircularReference(ancestor, child)))
        return;
    if (child->parent)
        return;
    if (parent->children.nodes.push_back(child))
        child->parent = parent->children.owner;
}

} /* extern "C" */
