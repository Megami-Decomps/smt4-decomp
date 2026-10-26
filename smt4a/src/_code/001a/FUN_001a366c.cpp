#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_005b4480;

/* Sends one word to the service (request 0x3f). */
extern "C" s32 FUN_001a366c(u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x3f0040);
    nn::os::SetIpcWord(command, 1, value);
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
