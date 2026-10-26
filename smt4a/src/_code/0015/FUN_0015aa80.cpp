/* NON_MATCHING: readable IPC stub; only the callee-saved register assignment of the three output pointers differs. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005b4480;

s32 FUN_0015aa80(u32 *outputC, u32 first, u32 *outputA, u32 *outputB)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00010040;
    command->words[0] = first;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if ((s32)(result & 0x80000000) >= 0) {
        *outputA = command->words[1];
        *outputB = command->words[2];
        *outputC = command->words[4];
        result = command->words[0];
    }
    return result;
}
}
