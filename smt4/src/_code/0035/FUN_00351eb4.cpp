#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_004655f8;
/* Requests service command 5 with selector 32. */
s32 FUN_00351eb4(){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 0x50002);nn::os::SetIpcWord(command, 1, 32);s32 result=nn::svc::SendSyncRequest(DAT_004655f8);if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;}
}
