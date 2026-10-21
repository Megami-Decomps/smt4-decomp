/* NON_MATCHING: aggressive vector inlining folds success/failure branches and changes resource-search/register allocation; -O2 candidate. */
#include "classes/AsdAllocatorObject.h"
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
typedef SceneNodePrefix *SceneChildPointer;
struct SceneChildVector {
    AsdAllocatorObject *allocator;
    SceneChildPointer *begin, *end;
    u32 flags;

    bool reserve(s32 capacity)
    {
        if ((s32)(flags & 0x3fffffff) >= capacity)
            return true;
        if (!allocator || (flags & 0xc0000000) != 0x40000000)
            return false;
        SceneChildPointer *storage = (SceneChildPointer *)allocator->allocate(capacity * sizeof(SceneChildPointer), 0x20);
        if (!storage)
            return false;
        s32 size = 0;
        if (begin != end) {
            std::uninitialized_copy(begin, end, storage);
            size = end - begin;
        }
        if (begin) {
            end = begin;
            allocator->release(begin);
        }
        end = storage + size;
        begin = storage;
        flags = (flags & 0xc0000000) | capacity;
        return true;
    }

    bool append(SceneChildPointer child)
    {
        s32 capacity = flags & 0x3fffffff;
        if (capacity <= end - begin && !reserve(capacity ? capacity * 2 : 1))
            return false;
        new (end) SceneChildPointer(child);
        ++end;
        return true;
    }
};
struct SceneChildSet {
    SceneNodePrefix node;
    SceneNodePrefix *owner;
    SceneChildVector children;
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
    if (parent->children.append(child))
        child->parent = parent->owner;
}
}
