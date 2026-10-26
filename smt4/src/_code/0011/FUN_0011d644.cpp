#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_004656b0;

s32 FUN_0011d644(u32 first, u32 second, u32 *outputA, u32 *outputB)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00020080;
    command->words[0] = first;
    command->words[1] = second;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        *outputA = command->words[2];
        *outputB = command->words[3];
        result = command->words[0];
    }
    return result;
}
}
