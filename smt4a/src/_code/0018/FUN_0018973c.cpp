/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared here as functions) */
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_005b479c; /* service session handle */

/* IPC request 0x0001 with two parameters and one static buffer (size bytes at buffer); returns the
 * transport result, or the service's result word when the transport succeeded. */
s32 FUN_0018973c(void *buffer, u32 size, u32 arg)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();
    cmd->header = 0x00010082;
    cmd->words[0] = size;
    cmd->words[1] = arg;
    cmd->words[2] = (size << 4) | 0xC;
    cmd->words[3] = (u32)buffer;
    s32 result = nn_svc_SendSyncRequest(DAT_005b479c);
    if (result >= 0) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
