#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" s32 g_nnCecdHandle;

/* Sends one word to the service (request 0x0b). */
extern "C" s32 FUN_0035937c(u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xb0040);
    nn::os::SetIpcWord(command, 1, value);
    s32 result = nn::svc::SendSyncRequest(g_nnCecdHandle);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
