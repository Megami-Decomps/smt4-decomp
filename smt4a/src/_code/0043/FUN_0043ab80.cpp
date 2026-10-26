#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>
extern "C" u32 DAT_005c0b4c;
/* Queries a byte from the service command response. */
extern "C" s32 FUN_0043ab80(u8 *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x280000);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b4c);
    if (nnResultIsSuccess(result)) {
        memcpy(output, &command->words[1], sizeof(*output));
        result = command->words[0];
    }
    return result;
}
