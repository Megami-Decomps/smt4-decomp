/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared here as functions) */
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_005c0a80; /* service session handle */

/* IPC request 0x0004 with one parameter (length) and one read-only buffer (length bytes at buffer);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 FUN_00439c74(const void *buffer, u32 length)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();
    cmd->header = 0x00040042;
    cmd->words[0] = length;
    cmd->words[1] = (0 << 10) | (length << 14) | 2;
    cmd->words[2] = (u32)buffer;
    s32 result = nn_svc_SendSyncRequest(DAT_005c0a80);
    if (result >= 0) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
