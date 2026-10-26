#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" u32 DAT_00471b64;

/* Sends the parameterless request 0x0c; on success stores the third response word in *out and returns the service's result word. */
extern "C" s32 FUN_00128de4(u32 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xc0000);
    s32 result = nn::svc::SendSyncRequest(DAT_00471b64);
    if (nnResultIsSuccess(result)) {
        *out = command->words[1];
        result = command->words[0];
    }
    return result;
}
