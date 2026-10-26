#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" u32 DAT_005c0b4c;
/* Queries a handle from the service command response. */
extern "C" s32 FUN_0043ac34(u32 *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0xf0000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b4c);
    if (nnResultIsSuccess(result)) {
        *output = command->words[2];
        result = command->words[0];
    }
    return result;
}
