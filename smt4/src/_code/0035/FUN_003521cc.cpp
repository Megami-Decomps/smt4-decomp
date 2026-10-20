/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared as functions in S1Ipc.h) */
#include "nn/Result.h"
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_00472a58;  /* service session handle */

/* IPC request 0x1009 with one byte and two word parameters; returns the transport result, or the
 * service's result word when the transport succeeded, and passes one response byte back in *out. */
s32 FUN_003521cc(u8 *out, u8 arg1, u32 arg2, u32 arg3)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();

    cmd->header = 0x100900C0;
    *(u8 *)&cmd->words[0] = arg1;
    cmd->words[1] = arg2;
    cmd->words[2] = arg3;
    s32 result = nn_svc_SendSyncRequest(DAT_00472a58);
    if (nnResultIsSuccess(result)) {
        *out = *(u8 *)&cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
