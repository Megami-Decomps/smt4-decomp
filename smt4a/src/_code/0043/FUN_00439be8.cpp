/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared as functions in S1Ipc.h) */
#include "nn/Result.h"
#include "shard/S1Ipc.h"
#include "shard/S3IpcRequest.h"

extern "C" {

extern u32 DAT_005c0a80;  /* service session handle */

/* IPC request 0x0024 with a six word parameter block, a size and one buffer (size bytes at
 * buffer); passes the 64-bit response back in *out and returns the transport result, or the
 * service's result word when the transport succeeded. */
s32 FUN_00439be8(u64 *out, const IpcParams6 *params, u32 buffer, u32 size)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();

    cmd->header = 0x00240282;
    *(IpcBlock5 *)&cmd->words[0] = params->block;
    cmd->words[5] = params->last;
    cmd->words[9] = size;
    cmd->words[10] = (size << 5) | 10;
    cmd->words[11] = buffer;
    s32 result = nn_svc_SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        *out = *(u64 *)&cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
