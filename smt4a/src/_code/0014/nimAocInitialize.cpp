#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 g_nimAocSession;

/* Sends a parameterless request to the service. */
extern "C" s32 nimAocInitialize(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x210000);
    s32 result = nn::svc::SendSyncRequest(g_nimAocSession);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
