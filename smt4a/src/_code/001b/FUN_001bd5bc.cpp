/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared as functions in S1Ipc.h) */
#include "nn/Result.h"
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_005c0a80;  /* service session handle */

/* IPC request 0x001D with no parameters; returns the transport result, or the service's result
 * word when the transport succeeded, and passes one response word back in *out. */
s32 FUN_001bd5bc(u32 *out)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();

    cmd->header = 0x001D0000;
    s32 result = nn_svc_SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        *out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
