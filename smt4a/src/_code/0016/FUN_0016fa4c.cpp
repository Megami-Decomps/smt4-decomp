/* NON_MATCHING: retail copies r0/r2/r3 into r5-r7 in parameter order before the TLS read, keeps the command base in r4 after an explicit add #128 and stores the 64-bit value with strd; armcc here orders the saved registers differently and uses stm. */
#include "nn/Result.h"
#include <string.h>
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005c0b18; /* 0x471ba4 */

void wordPairCopy(u32 *destination, const u32 *source);

/* Sends command 0x50100 carrying a pair of words and a 64-bit value; on success stores the third reply word. */
s32 FUN_0016fa4c(u32 *reply, const u32 *pair, u64 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x50100);
    wordPairCopy(&command->words[0], pair);
    memcpy(&command->words[2], &value, sizeof value);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b18);
    if (nnResultIsSuccess(result)) {
        *reply = command->words[2];
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
