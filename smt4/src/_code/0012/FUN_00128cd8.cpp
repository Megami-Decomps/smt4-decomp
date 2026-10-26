#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_00472ab0;

/* Sends a parameterless request to the service (request 0x12). */
extern "C" s32 FUN_00128cd8(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x120000);
    s32 result = nn::svc::SendSyncRequest(DAT_00472ab0);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
