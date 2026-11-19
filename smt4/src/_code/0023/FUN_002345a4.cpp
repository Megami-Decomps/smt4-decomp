#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {

u32 FUN_00353368(u32 provider, u32 record, u32 identifier);

// Reads a record through the provider; a failed provider check is returned as is,
// otherwise the read result is validated and returned.
WindowStatusResult FUN_002345a4(u32 provider, u32 record, u32 identifier)
{
    nn::Result status = queryFailureResultOrZero(reinterpret_cast<void *>(provider));
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00353368(provider, record, identifier));
    recordValidatePair(reinterpret_cast<void *>(provider), result);
    return result;
}

}
