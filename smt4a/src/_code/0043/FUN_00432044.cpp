/* NON_MATCHING: svc 0x32 and the thread-pointer read match via nn/svc.h; retail stores the current-process-id descriptor (0x20) with its own str after the parameter, where armcc pairs the two stores into one strd. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern u32 g_ipcServiceSessionHandle; /* service session handle */

/* IPC request 0x0001 with one parameter and a current-process-id translate descriptor (0x20);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 FUN_00432044(u32 arg)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    cmd->header = 0x00010042;
    cmd->words[0] = arg;
    cmd->words[1] = 0x20;
    s32 result = nn::svc::SendSyncRequest(g_ipcServiceSessionHandle);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
