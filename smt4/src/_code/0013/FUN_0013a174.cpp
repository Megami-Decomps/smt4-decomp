#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_00472a50; /* service session handle */

/* IPC request 0x0001 with two parameters and one static buffer (size bytes at buffer); returns the
 * transport result, or the service's result word when the transport succeeded. */
s32 FUN_0013a174(void *buffer, u32 size, u32 arg)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(cmd, 0, 0x00010082);
    nn::os::SetIpcWord(cmd, 1, size);
    nn::os::SetIpcWord(cmd, 2, arg);
    nn::os::SetIpcWord(cmd, 3, (size << 4) | 0xC);
    nn::os::SetIpcWord(cmd, 4, (u32)buffer);
    s32 result = nn::svc::SendSyncRequest(DAT_00472a50);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
