#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"
#include <string.h>

extern "C" {

extern u32 DAT_00472a58; /* service session handle */

/* IPC request 0x1005 with a flag byte, a count, a buffer of count 8-byte records read from `input`
 * and a buffer of count 24-byte records written to `output`; returns the transport result, or the
 * service's result word when the transport succeeded. */
s32 FUN_00352290(void *output, u8 flag, const void *input, s32 count)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    cmd->header = 0x10050084;
    memcpy(&cmd->words[0], &flag, sizeof(flag));
    cmd->words[1] = count;
    cmd->words[2] = ipcMappedBufferDescriptor(count * 8, 10);
    cmd->words[3] = (u32)input;
    cmd->words[4] = ipcMappedBufferDescriptor(count * 24, 12);
    cmd->words[5] = (u32)output;
    s32 result = nn::svc::SendSyncRequest(DAT_00472a58);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
