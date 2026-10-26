#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {
extern u32 DAT_004656b0;

u32 FUN_0011d744(u32 first, s32 second, u32 third)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00270044;
    command->words[2] = third;
    command->words[0] = second;
    command->words[1] = 0;
    command->words[3] = ipcStaticBufferDescriptor(second, 0);
    command->words[4] = first;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
