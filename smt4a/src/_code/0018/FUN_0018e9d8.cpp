/* NON_MATCHING: retail keeps `false` (r8) and `true` (r9) in registers from function entry and returns a circular reference with a literal 0 (child in r6, capacity in r7); the build materializes `true` later and shares the r8 exit. The MoveArray growth path matches. */
#include "nw/gfx/SceneNode.h"

/* SceneNode::attachChild: add a free node under `parent` unless that would make a node its own ancestor. */
extern "C" bool FUN_0018e9d8(nw::gfx::SceneNode *parent, nw::gfx::SceneNode *child)
{
    return parent->attachChild(child);
}
