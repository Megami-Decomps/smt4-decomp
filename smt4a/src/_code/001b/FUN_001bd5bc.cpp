#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_005c0a80;  /* service session handle */

/* IPC request 0x001D with no parameters; returns the transport result, or the service's result
 * word when the transport succeeded, and passes one response word back in *out. */
s32 FUN_001bd5bc(u32 *out)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(cmd, 0, 0x001D0000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        *out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
