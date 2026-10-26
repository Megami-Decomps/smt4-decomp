#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {
extern u32 DAT_005b4480;

u32 FUN_0015aba0(u32 first, u32 second, s32 third, u32 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x001F0084;
    command->words[3] = fourth;
    command->words[0] = first;
    command->words[1] = third;
    command->words[2] = 0;
    command->words[4] = ipcStaticBufferDescriptor(third, 0);
    command->words[5] = second;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
