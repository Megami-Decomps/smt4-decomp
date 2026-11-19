/* NON_MATCHING: the owner status is an nn::Result (fixes retail's lsrs-before-copy order) and the block status a plain s32; remaining: retail keeps the owner in r5 and the destination in r4, and its frame (80) has an extra 8-byte slot at sp+0 below the translated result (block at sp+16, result at sp+8). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
nn::Result queryFailureResultOrZero(void *owner);
u32 FUN_0035f7dc(void*);

// Retrieves a status block, copies its public half, and records the translated result.
WindowStatusResult FUN_00353154(void* owner, void* destination)
{
    nn::Result status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    u8 block[64];
    s32 blockStatus = FUN_0035f7dc(block);
    if (!nnResultIsFailure(blockStatus)) {
        rt_memcpy(destination, block, 32);
        blockStatus = 0;
    }
    WindowStatusResult translated(blockStatus);
    recordValidatePair(owner, translated);
    return translated;
}
}
