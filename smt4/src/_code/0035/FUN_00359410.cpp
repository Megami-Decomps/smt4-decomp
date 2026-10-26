#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {
extern u32 g_nnCecdHandle;

u32 FUN_00359410(u32 first, u32 second, s32 third, u32 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x000900C2;
    command->words[0] = first;
    command->words[1] = third;
    command->words[2] = fourth;
    command->words[3] = ipcMappedBufferDescriptor(third, 10);
    command->words[4] = second;
    s32 result = nn::svc::SendSyncRequest(g_nnCecdHandle);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
