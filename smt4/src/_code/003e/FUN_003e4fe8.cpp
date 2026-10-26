/* NON_MATCHING: retail makes a real bl + pop {r4, pc} call (no tail call) after mov r0, r1; armcc tail-calls here. Callee differs per unit (smt4a: FUN_0044be50-family). */
#include "shard/W4_Match1b_Node.h"

extern "C" {

u32 nw_gfx_CalculatedTransform_ConvertQuaternionToMatrix(NodeTransform* transform);

/* Validates and converts the quaternion held by the second argument's transform. */
void FUN_003e4fe8(u32 unused, u32 arg)
{
    nw_gfx_CalculatedTransform_ConvertQuaternionToMatrix(reinterpret_cast<NodeTransform*>(arg));
}

} /* extern "C" */
