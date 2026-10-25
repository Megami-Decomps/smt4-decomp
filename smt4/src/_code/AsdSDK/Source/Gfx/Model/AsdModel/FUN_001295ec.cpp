#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" u32 DAT_00471ba4;

/* Sends the constant 32 to the service. */
extern "C" s32 FUN_001295ec(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x10002);
    u32 value = 32;
    memcpy(&command->words[0], &value, sizeof(value));
    s32 result = nn::svc::SendSyncRequest(DAT_00471ba4);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
