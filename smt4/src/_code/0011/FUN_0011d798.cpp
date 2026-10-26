#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {
extern u32 DAT_004656b0;

s32 FUN_0011d798(u8 first, u8 *outputA, u32 *outputB, u32 *outputC, u32 *outputD)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00050040;
    memcpy(&command->words[0], &first, sizeof(first));
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        *outputA = *reinterpret_cast<u8 *>(&command->words[1]);
        *outputB = command->words[2];
        *outputC = command->words[3];
        *outputD = command->words[4];
        result = command->words[0];
    }
    return result;
}
}
