#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 g_ipcServiceSessionHandle; /* service session handle */

/* IPC request 0x0014 with one parameter; returns the transport result, or the service's result word
 * when the transport succeeded. */
s32 FUN_0016f19c(u32 arg)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(cmd, 0, 0x00140040);
    nn::os::SetIpcWord(cmd, 1, arg);
    s32 result = nn::svc::SendSyncRequest(g_ipcServiceSessionHandle);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
