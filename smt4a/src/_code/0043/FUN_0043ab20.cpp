#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" u32 DAT_005c0b4c;
/* Sends the parameterless service request and returns its service result. */
extern "C" s32 FUN_0043ab20()
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x260000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b4c);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
