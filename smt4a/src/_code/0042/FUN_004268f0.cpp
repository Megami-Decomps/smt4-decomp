#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {

extern u32 DAT_005c149c;  /* service session handle */

/* IPC request 0x1009 with one byte and two word parameters; returns the transport result, or the
 * service's result word when the transport succeeded, and passes one response byte back in *out. */
s32 FUN_004268f0(u8 *out, u8 arg1, u32 arg2, u32 arg3)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(cmd, 0, 0x100900C0);
    memcpy(&cmd->words[0], &arg1, sizeof(arg1));
    nn::os::SetIpcWord(cmd, 2, arg2);
    nn::os::SetIpcWord(cmd, 3, arg3);
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        *out = *(u8 *)&cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
