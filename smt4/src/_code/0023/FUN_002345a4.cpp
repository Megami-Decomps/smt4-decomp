/* NON_MATCHING: callee-saved register numbering (provider lands in r7, retail r5) and the failure test copies the status to r1 first. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_0023a1f8(u32 provider);
u32 FUN_00353368(u32 provider, u32 record, u32 identifier);

// Reads a record through the provider; a failed provider check is returned as is,
// otherwise the read result is validated and returned.
WindowStatusResult FUN_002345a4(u32 provider, u32 record, u32 identifier)
{
    s32 status = FUN_0023a1f8(provider);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00353368(provider, record, identifier));
    recordValidatePair(reinterpret_cast<void *>(provider), result);
    return result;
}

}
