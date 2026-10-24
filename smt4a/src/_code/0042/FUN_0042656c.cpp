/* NON_MATCHING: armcc merges the header and descriptor stores into stm after a separate add; retail stores the header with writeback (str r1, [r4, #128]!) and the others singly */
/* Sends service command 0x27 (header 0x270002) with `request`; on success stores the reply byte. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_0042656c(u32 request, u8 *reply)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x270002;
    command->words[1] = request;
    command->words[0] = 0x800402;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        *reply = *(const u8 *)&command->words[1];
        result = command->words[0];
    }
    return result;
}
}
