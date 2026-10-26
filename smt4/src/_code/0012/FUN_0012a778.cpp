#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" u32 DAT_004656b0;

/* Sends the typed scalar parameter to the service. */
extern "C" s32 FUN_0012a778(u8 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x3b0040);
    memcpy(&command->words[0], &value, sizeof(value));
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
