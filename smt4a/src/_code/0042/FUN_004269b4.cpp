/* NON_MATCHING: the thread-pointer read and the svc are inline-asm-only instructions (declared here as functions) */
#include "shard/S1Ipc.h"

extern "C" {

extern u32 DAT_005c149c; /* service session handle */

/* IPC request 0x1005 with a flag byte, a count, a buffer of count 8-byte records read from `input`
 * and a buffer of count 24-byte records written to `output`; returns the transport result, or the
 * service's result word when the transport succeeded. */
s32 FUN_004269b4(void *output, u8 flag, const void *input, s32 count)
{
    IpcCommandBuffer *cmd = nn_getIpcCommandBuffer();
    cmd->header = 0x10050084;
    *(u8 *)&cmd->words[0] = flag;
    cmd->words[1] = count;
    cmd->words[2] = (count << 7) | 10;
    cmd->words[3] = (u32)input;
    cmd->words[4] = ((count * 3) << 7) | 12;
    cmd->words[5] = (u32)output;
    s32 result = nn_svc_SendSyncRequest(DAT_005c149c);
    if (result >= 0) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
