#ifndef NW_GFX_SCENENODE_H
#define NW_GFX_SCENENODE_H

#include "common.h"
#include "nw/ut/MoveArray.h"

namespace nw {
namespace gfx {

class SceneNode;

/* The children a node owns, plus the node they report as their parent. */
struct SceneNodeChildren {
    /* 0x00 */ SceneNode *owner;
    /* 0x04 */ ut::MoveArray<SceneNode *> nodes;

    bool attach(SceneNode *node);
};

class SceneNode {
public:
    bool attachChild(SceneNode *node);

    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ SceneNode *parent;
    /* 0x10 */ SceneNodeChildren children;
};

} /* namespace gfx */
} /* namespace nw */

extern "C" bool nw_gfx_SceneNode_IsCircularReference(const nw::gfx::SceneNode *node, const nw::gfx::SceneNode *reference);

namespace nw {
namespace gfx {

/* Adds a parentless node to the children, which then report their owner as parent. */
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

/* Whether `node` is this node's parent or one of its ancestors: the body of
 * nw_gfx_SceneNode_IsCircularReference, which recurses up the parents. */
inline bool sceneNodeIsCircularReference(const SceneNode *self, const SceneNode *node)
{
    const SceneNode *ancestor = self->parent;
    if (ancestor == NULL) {
        return false;
    }
    if (ancestor == node) {
        return true;
    }
    return nw_gfx_SceneNode_IsCircularReference(ancestor, node);
}

/* Attaches a node unless that would make this node its own ancestor. */
inline bool SceneNode::attachChild(SceneNode *node)
{
    if (sceneNodeIsCircularReference(this, node)) {
        return false;
    }
    return children.attach(node);
}

} /* namespace gfx */
} /* namespace nw */

#endif
