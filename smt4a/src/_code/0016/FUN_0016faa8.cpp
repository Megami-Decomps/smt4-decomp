#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_005c0b18; /* service session handle */

/* IPC request 0x000B with no parameters; returns the transport result, or the service's result
 * word when the transport succeeded, and passes one response word back in *out. */
s32 FUN_0016faa8(u32 *out)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(cmd, 0, 0x000B0000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b18);
    if (nnResultIsSuccess(result)) {
        *out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
