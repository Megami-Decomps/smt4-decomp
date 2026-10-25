#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 g_ipcServiceSessionHandle; /* service session handle */

/* IPC request 0x0001 with one parameter and a current-process-id translate descriptor (0x20);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 FUN_00432044(u32 arg)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(cmd, 0, 0x00010042);
    nn::os::SetIpcWord(cmd, 1, arg);
    nn::os::SetIpcWord(cmd, 2, 0x20);
    s32 result = nn::svc::SendSyncRequest(g_ipcServiceSessionHandle);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
