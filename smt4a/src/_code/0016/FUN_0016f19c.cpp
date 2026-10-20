/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared here as functions) */
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_005c14c0; /* service session handle */

/* IPC request 0x0014 with one parameter; returns the transport result, or the service's result word
 * when the transport succeeded. */
s32 FUN_0016f19c(u32 arg)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();
    cmd->header = 0x00140040;
    cmd->words[0] = arg;
    s32 result = nn_svc_SendSyncRequest(DAT_005c14c0);
    if (result >= 0) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
