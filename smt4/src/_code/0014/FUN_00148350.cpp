#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {
extern u32 DAT_004656b0;

s32 FUN_00148350(u8 first, u32 second, u8 third, u32 fourth, u8 *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x000F0100;
    memcpy(&command->words[0], &first, sizeof(first));
    command->words[1] = second;
    memcpy(&command->words[2], &third, sizeof(third));
    command->words[3] = fourth;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        *output = *reinterpret_cast<u8 *>(&command->words[1]);
        result = command->words[0];
    }
    return result;
}
}
