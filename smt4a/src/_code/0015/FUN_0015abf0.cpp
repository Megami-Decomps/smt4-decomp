#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_005b4480;

/* Sends a parameterless request to the service (request 0x2b). */
extern "C" s32 FUN_0015abf0(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x2b0000);
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
