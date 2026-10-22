/* NON_MATCHING: Signed result tests and aggregate-return register allocation differ. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
extern "C" {
u32 FUN_004283cc(void*);
u32 FUN_00439664(void*);
void rt_memcpy(void*, const void*, u32);
void recordValidatePair(void*, WindowStatusResult);

// Retrieves a status block, copies its public half, and records the translated result.
WindowStatusResult FUN_00427f6c(void* owner, void* destination)
{
    u32 status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    u8 block[64];
    status = FUN_00439664(block);
    if (!nnResultIsFailure(status)) {
        rt_memcpy(destination, block, 32);
        status = 0;
    }
    WindowStatusResult result(status);
    recordValidatePair(owner, result);
    return result;
}
}
