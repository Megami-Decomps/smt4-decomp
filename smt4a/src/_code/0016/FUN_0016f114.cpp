#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 g_ipcServiceInitResult;

/* Sends a parameterless request to the service (request 0x12). */
extern "C" s32 FUN_0016f114(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x120000);
    s32 result = nn::svc::SendSyncRequest(g_ipcServiceInitResult);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
