#include "common.h"
#include "shard/W4_Match1b_Node.h"
#include "shard/nodeSetScale.h"

extern "C" {

/* Sets the scale of the owner's node transform and flags it as changed. */
void nodeSetScale(NodeOwner *owner, NodeVec3 scale)
{
    NodeTransform *transform = &owner->object->transform;

    transform->scale = scale;
    transform->flags |= NODE_FLAG_TRANSFORM_DIRTY;
}

} /* extern "C" */
