#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_004655f8;

/* Sends a request with one parameter and the constant 32 to the service; returns the reply word on success. */
extern "C" s32 FUN_0010f548(u32 parameter)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x400042);
    nn::os::SetIpcWord(command, 1, parameter);
    nn::os::SetIpcWord(command, 2, 0x20);
    s32 result = nn::svc::SendSyncRequest(DAT_004655f8);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
