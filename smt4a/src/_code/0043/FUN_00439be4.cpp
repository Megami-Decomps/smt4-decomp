#include "common.h"
#include "shard/S3IpcRequest.h"

extern "C" {

s32 FUN_00439be8(u64 *out, const IpcParams6 *params, u32 buffer, u32 size);

/* Forwards to FUN_00439be8, the function that follows it. */
s32 FUN_00439be4(u64 *out, const IpcParams6 *params, u32 buffer, u32 size)
{
    return FUN_00439be8(out, params, buffer, size);
}

} /* extern "C" */
