/* NON_MATCHING: armcc pairs the two parameter stores into strd (selector 32 preloaded into r1); retail stores them separately */
/* Sends service command 0x3E (header 0x3E0042) with `request` and the selector 32; on success stores the reply byte. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_0042642c(u32 request, u8 *reply)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x3E0042;
    command->words[0] = request;
    command->words[1] = 32;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        *reply = *(const u8 *)&command->words[1];
        result = command->words[0];
    }
    return result;
}
}
