#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_00472ad8;

u32 FUN_0035ae38(void)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00020002;
    nn::os::SetIpcWord(command, 1, 0x20);
    s32 result = nn::svc::SendSyncRequest(DAT_00472ad8);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
