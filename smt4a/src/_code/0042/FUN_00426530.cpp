#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_005b4438;
/* Requests service command 5 with selector 32. */
s32 FUN_00426530(){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 0x50002);nn::os::SetIpcWord(command, 1, 32);s32 result=nn::svc::SendSyncRequest(DAT_005b4438);if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;}
}
