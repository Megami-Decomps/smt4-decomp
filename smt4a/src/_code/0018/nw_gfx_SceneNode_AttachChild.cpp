/* NON_MATCHING: with the circular-reference test inlined as its real body, only registers differ: retail keeps the child in r6 and the grown capacity in r7 (here swapped) and sets the false/true constants r8/r9 in the other order. */
#include "nw/gfx/SceneNode.h"

/* SceneNode::attachChild: add a free node under `parent` unless that would make a node its own ancestor. */
extern "C" bool nw_gfx_SceneNode_AttachChild(nw::gfx::SceneNode *parent, nw::gfx::SceneNode *child)
{
    return parent->attachChild(child);
}
