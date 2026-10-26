#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
u32 FUN_0042c1f4(u32 *session, u32 unused, u32 first, u32 second)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x08050080;
    command->words[0] = first;
    command->words[1] = second;
    s32 result = nn::svc::SendSyncRequest(*session);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
