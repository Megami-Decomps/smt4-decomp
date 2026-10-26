#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" s32 g_nnCecdHandle;

/* Sends the parameterless request 0x10; on success stores the fourth response word in *out and returns the service's result word. */
extern "C" s32 FUN_003592b8(u32 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x100000);
    s32 result = nn::svc::SendSyncRequest(g_nnCecdHandle);
    if (nnResultIsSuccess(result)) {
        *out = command->words[2];
        result = command->words[0];
    }
    return result;
}
