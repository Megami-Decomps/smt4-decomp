#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005b4480;

u32 FUN_0018ba38(u32 first, u32 second)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00420080;
    command->words[0] = first;
    command->words[1] = second;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
