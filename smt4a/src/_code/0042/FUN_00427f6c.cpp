/* NON_MATCHING: the owner status is an nn::Result (fixes retail's lsrs-before-copy order) and the block status a plain s32; remaining: retail keeps the owner in r5 and the destination in r4, and its frame (80) has an extra 8-byte slot at sp+0 below the result (block at sp+16, result at sp+8). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
extern "C" {
u32 FUN_00439664(void*);
void rt_memcpy(void*, const void*, u32);

// Retrieves a status block, copies its public half, and records the translated result.
WindowStatusResult FUN_00427f6c(void* owner, void* destination)
{
    nn::Result status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    u8 block[64];
    s32 blockStatus = FUN_00439664(block);
    if (!nnResultIsFailure(blockStatus)) {
        rt_memcpy(destination, block, 32);
        blockStatus = 0;
    }
    WindowStatusResult result(blockStatus);
    recordValidatePair(owner, result);
    return result;
}
}
