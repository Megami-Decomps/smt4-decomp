#include "common.h"
#include "shard/W4_Match1b_Node.h"

extern "C" {

/* Sets the translation column of the owner's node transform and flags it as changed. */
void FUN_0029a014(NodeOwner *owner, f32 x, f32 y, f32 z)
{
    NodeObject *object = owner->object;

    object->transform.m[0][3] = x;
    object->transform.m[1][3] = y;
    object->transform.m[2][3] = z;
    object->transform.flags |= NODE_FLAG_TRANSFORM_DIRTY;
}

} /* extern "C" */
