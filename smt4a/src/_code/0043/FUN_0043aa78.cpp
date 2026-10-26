#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>
extern "C" u32 DAT_005c0b4c;
/* Sends the typed scalar parameter to the service. */
extern "C" s32 FUN_0043aa78(u8 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x10040);
    memcpy(&command->words[0], &value, sizeof(value));
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b4c);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
