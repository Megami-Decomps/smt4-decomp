#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" s32 g_nnCecdHandle;

/* Sends the parameterless request 0x0e; on success stores the third response word in *out and returns the service's result word. */
extern "C" s32 FUN_0042ffd8(u32 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xe0000);
    s32 result = nn::svc::SendSyncRequest(g_nnCecdHandle);
    if (nnResultIsSuccess(result)) {
        *out = command->words[1];
        result = command->words[0];
    }
    return result;
}
