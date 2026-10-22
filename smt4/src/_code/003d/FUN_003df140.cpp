/* NON_MATCHING: Result normalization and native wide division optimize differently; the runtime helper symbol also differs. */
#include "classes/WindowStatus.h"
#include "sys/StorageBlockQuery.h"
#include "nn/Result.h"
extern "C" {
u32 FUN_0035fd5c(s64*, const StorageQueryRequest*, void*, u32);

WindowStatusResult FUN_003df140(const StorageQueryContext* const* context, u32* blocks)
{
    const StorageQueryContext* source = *context;
    s64 bytes;
    StorageQueryRequest request;
    request.unk11 = 1;
    request.parameters = source->parameters;
    u32 status = FUN_0035fd5c(&bytes, &request, source->buffer, source->bufferSize);
    if (!nnResultIsFailure(status)) {
        status = 0;
    }
    if (!nnResultIsFailure(status)) {
        s64 rounded = (bytes + 0x1FFFF) & 0xFFFE0000LL;
        *blocks = (u32)(rounded / 0x20000);
    }
    return WindowStatusResult(status);
}
}
