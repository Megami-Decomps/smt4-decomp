/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared as functions in S1Ipc.h) */
#include "nn/Result.h"
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_004719e8;  /* service session handle */

/* IPC request 0x0003 with a size and one static buffer (size bytes at str); returns the transport
 * result, or the service's result word when the transport succeeded. */
s32 FUN_0035fba0(const char *str, u32 size)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();

    cmd->header = 0x00030042;
    cmd->words[0] = size;
    cmd->words[1] = (0 | size << 14) | 2;
    cmd->words[2] = (u32)str;
    s32 result = nn_svc_SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
