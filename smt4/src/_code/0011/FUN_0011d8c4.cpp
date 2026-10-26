#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_004656b0;

/* Sends one word to the service (request 0x19). */
extern "C" s32 FUN_0011d8c4(u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x190040);
    nn::os::SetIpcWord(command, 1, value);
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
