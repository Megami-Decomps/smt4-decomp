/* NON_MATCHING: command words and result test match retail; retail keeps the constants 0 and 32 in r1/r2 before the stores. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_005b4438;

/* Sends command 0x30 with its output descriptor. */
s32 FUN_00426754(void *buffer)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x300004);
    nn::os::SetIpcWord(command, 4, (u32)buffer);
    nn::os::SetIpcWord(command, 3, 0);
    nn::os::SetIpcWord(command, 1, 32);
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
