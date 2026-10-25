#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_004719e8;

/* Sends a parameterless request to the service. */
extern "C" s32 FUN_0010ff1c(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x210000);
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
