#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" s32 DAT_005c1fc8;

/* Sends the parameterless request 0x0e; on success stores the third response word in *out and returns the service's result word. */
extern "C" s32 FUN_0043048c(u32 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xe0000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c1fc8);
    if (nnResultIsSuccess(result)) {
        *out = command->words[1];
        result = command->words[0];
    }
    return result;
}
