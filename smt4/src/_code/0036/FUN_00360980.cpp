#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>
extern "C" u32 DAT_00471bac;
/* Sends the typed scalar parameter to the service. */
extern "C" s32 FUN_00360980(u16 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x1a0040;
    memcpy(&command->words[0], &value, sizeof(value));
    s32 result = nn::svc::SendSyncRequest(DAT_00471bac);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
