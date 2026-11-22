/* NON_MATCHING: 91 lines off with nw::ut::MoveArray's push_back (as FUN_00515a9c): retail keeps the parent in r6 and
 * the node in r5, moves the node into r1 before the circular-reference test, and loads begin/end with one ldm. */
#include "shard/W6_W6Match7_SceneAttachment.h"
#include "classes/AsdAllocatorObject.h"
#include "nw/ut/MoveArray.h"

struct SceneNodeChildren {
    SceneNode *owner;
    nw::ut::MoveArray<SceneNode *> nodes;

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
    bool attached = nodes.push_back(node);
    if (attached) {
        node->parent = owner;
    }
    return attached;
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

extern "C" void FUN_002246d0(const SceneNodeCollection *source, SceneNode *parent)
{
    for (s32 i = 0; i < source->count; ++i) {
        parent->attachChild(source->nodes[i]);
    }
}
