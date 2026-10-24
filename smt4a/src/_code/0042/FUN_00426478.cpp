/* NON_MATCHING: needs --cpu=5TE (no stm merging; identical with it for FUN_00426530); then only store scheduling/constant hoisting differs */
/* Sends service command 4 (header 0x40006) with two parameters and a buffer descriptor; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_00426478(u32 buffer, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x40006;
    command->words[3] = size;
    command->words[2] = 0;
    command->words[0] = 32;
    command->words[5] = buffer;
    command->words[4] = 0x800402;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
