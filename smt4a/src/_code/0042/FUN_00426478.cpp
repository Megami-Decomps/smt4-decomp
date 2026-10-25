/* NON_MATCHING: needs --cpu=5TE (no stm merging; identical with it for FUN_00426530); then only store scheduling/constant hoisting differs */
/* Sends service command 4 (header 0x40006) with two parameters and a buffer descriptor; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_00426478(u32 buffer, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x40006);
    nn::os::SetIpcWord(command, 3, 0);
    nn::os::SetIpcWord(command, 4, size);
    nn::os::SetIpcWord(command, 1, 32);
    nn::os::SetIpcWord(command, 5, 0x800402);
    nn::os::SetIpcWord(command, 6, buffer);
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
