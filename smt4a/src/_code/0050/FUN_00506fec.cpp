/* NON_MATCHING: retail makes a real bl + pop {r4, pc} call (no tail call) after mov r0, r1; armcc tail-calls here. */
#include "shard/W4_Match1b_Node.h"

extern "C" {

u32 FUN_0044b9bc(float *matrix);

/* Validates and converts the quaternion held by the second argument's transform. */
void FUN_00506fec(u32 unused, u32 arg)
{
    FUN_0044b9bc(reinterpret_cast<float *>(arg));
}

} /* extern "C" */
