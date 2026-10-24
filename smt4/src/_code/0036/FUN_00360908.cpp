#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>
extern "C" u32 DAT_00471bac;
/* Queries a byte from the service command response. */
extern "C" s32 FUN_00360908(u8 *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x280000;
    s32 result = nn::svc::SendSyncRequest(DAT_00471bac);
    if (nnResultIsSuccess(result)) {
        memcpy(output, &command->words[1], sizeof(*output));
        result = command->words[0];
    }
    return result;
}
