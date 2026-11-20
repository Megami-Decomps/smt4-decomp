/* NON_MATCHING: constructor tail call restored; retail keeps the normalized result in r1 on failure and performs full-width rounding before ll_sdiv. */
#include "classes/WindowStatus.h"
#include "sys/StorageBlockQuery.h"
#include "nn/Result.h"
#include "shard/W6_W6Match2_LongDivision.h"
extern "C" {
u32 FUN_0035fd5c(s64*, const StorageQueryRequest*, void*, u32);

/* Queries the storage size and reports the number of 128 KiB blocks on success. */
WindowStatusResult FUN_003df140(const StorageQueryContext *const *context, u32 *blocks)
{
    enum { BLOCK_SIZE = 128 * 1024 };
    u32 status;
    {
        const StorageQueryContext *source = *context;
        s64 bytes;
        StorageQueryRequest request;
        request.unk11 = 1;
        request.parameters = source->parameters;
        status = FUN_0035fd5c(&bytes, &request, source->buffer, source->bufferSize);
        status = nnResultIsFailure(status) ? status : 0;
        if (!nnResultIsFailure(status)) {
            s64 rounded = (bytes + BLOCK_SIZE - 1) & 0xFFFE0000LL;
            *blocks = (u32)ll_sdiv(rounded, BLOCK_SIZE).quotient;
        }
    }
    return WindowStatusResult(status);
}

} /* extern "C" */
