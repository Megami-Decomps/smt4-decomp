#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005c0ae4;

u32 FUN_0016f1d4(u32 first, s32 second, u32 third, u32 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x000B00C2;
    command->words[0] = second;
    command->words[1] = third;
    command->words[2] = fourth;
    nn::os::SetIpcWord(command, 4, (second << 5) | 0xC);
    command->words[4] = first;

    s32 result = nn::svc::SendSyncRequest(DAT_005c0ae4);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
