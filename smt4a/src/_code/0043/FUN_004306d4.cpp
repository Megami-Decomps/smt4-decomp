#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" s32 DAT_005c1fc8;

/* Sends one word to the service (request 0x0b). */
extern "C" s32 FUN_004306d4(u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xb0040);
    nn::os::SetIpcWord(command, 1, value);
    s32 result = nn::svc::SendSyncRequest(DAT_005c1fc8);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
