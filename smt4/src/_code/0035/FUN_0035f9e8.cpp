#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
extern u32 DAT_004719e8;

s32 FUN_0035f9e8(void *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00180000;
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if ((s32)(result & 0x80000000) >= 0) {
        u32 *source = &command->words[1];
        rt_memcpy(output, source, 0x40);
        result = command->words[0];
    }
    return result;
}
}
