/* NON_MATCHING: retail copies the three stack words (id, flags) with core ldm/stm; armcc -Otime uses vldm/vstm here. */
#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

/* Sends service command 0x7 (header 0x10070102) carrying `count` and three more words and a descriptor sized from `count`; on success stores the first reply word. */
s32 FUN_00426a1c(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x10070102;
    command->words[0] = count;
    memcpy(&command->words[1], &id, sizeof id);
    command->words[3] = flags;
    command->words[4] = (count * 0x180) | 0xC;
    command->words[5] = descriptorAddress;
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        *reply = command->words[1];
        result = command->words[0];
    }
    return result;
}
}
