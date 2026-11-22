/* NON_MATCHING: push and attach now follow retail's flow (growth result kept, early false return); remaining: retail keeps the parent in r6 and the node in r5 (swapped here), and its element copy walks the source in r0 and the new buffer in r1 (swapped here). */
#include "shard/W6_W6Match7_SceneAttachment.h"
#include "classes/AsdAllocatorObject.h"
#include <new>

struct SceneNodeArray {
    typedef SceneNode *value_type;

    AsdAllocatorObject *allocator;
    value_type *begin;
    value_type *end;
    u32 capacityFlags;

    s32 capacity() const { return capacityFlags & 0x3fffffff; }

    bool reserve(s32 requested)
    {
        if (requested <= capacity()) {
            return true;
        }
        if (allocator == NULL || (capacityFlags & 0xc0000000) != 0x40000000) {
            return false;
        }
        value_type *buffer = static_cast<value_type *>(allocator->allocate(requested * sizeof(value_type), 0x20));
        s32 count = 0;
        value_type *source = begin;
        value_type *limit = end;
        if (source != limit) {
            value_type *destination = buffer;
            do {
                new (destination) value_type(*source);
                ++source;
                ++destination;
            } while (source != limit);
            count = end - begin;
        }
        if (begin != NULL) {
            allocator->release(begin);
        }
        begin = buffer;
        end = buffer + count;
        capacityFlags = (capacityFlags & 0xc0000000) | requested;
        return true;
    }

    bool pushBack(SceneNode *node)
    {
        s32 currentCapacity = capacity();
        bool added = true;
        if (currentCapacity <= end - begin) {
            added = reserve(currentCapacity != 0 ? currentCapacity * 2 : 1);
        }
        if (added) {
            new (end) value_type(node);
            ++end;
        }
        return added;
    }
};

struct SceneNodeChildren {
    SceneNode *owner;
    SceneNodeArray nodes;

    bool attach(SceneNode *node);
};

struct SceneNode {
    u8 unk00[0xc];
    SceneNode *parent;
    SceneNodeChildren children;

    bool attachChild(SceneNode *node);
};

extern "C" bool nw_gfx_SceneNode_IsCircularReference(const SceneNode *node, const SceneNode *reference);

inline bool SceneNodeChildren::attach(SceneNode *node)
{
    if (node->parent != NULL) {
        return false;
    }
    if (!nodes.pushBack(node)) {
        return false;
    }
    node->parent = owner;
    return true;
}

inline bool SceneNode::attachChild(SceneNode *node)
{
    SceneNode *ancestor = parent;
    if (ancestor != NULL &&
        (ancestor == node || nw_gfx_SceneNode_IsCircularReference(ancestor, node))) {
        return false;
    }
    return children.attach(node);
}

struct SceneNodeCollection {
    u8 unk00[0x24];
    SceneNode **nodes;
    s32 count;
};

extern "C" void sceneNodeCollectionAttach(const SceneNodeCollection *source, SceneNode *parent)
{
    for (s32 i = 0; i < source->count; ++i) {
        parent->attachChild(source->nodes[i]);
    }
}
