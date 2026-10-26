#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_005c0b18;

/* Sends one word to the service. */
extern "C" s32 FUN_0018a8ec(u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x90040);
    nn::os::SetIpcWord(command, 1, value);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b18);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
