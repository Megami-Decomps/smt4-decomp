/* NON_MATCHING: the mode byte and the push {r0-r3, r4-r6, lr} spill match (memcpy of the parameter); armcc orders/merges the command stores differently from retail (retail: strd first/second, stm count/descriptor/buffer) */
#include "nn/svc.h"
#include "nn/Result.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

/* Sends IPC command 0x201 with a static buffer descriptor for `count` elements; returns the reply word or the error. */
u32 FUN_0042687c(u32 handle, u8 mode, u32 first, u32 second, u32 buffer, s32 count)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    command->header = 0x10020104;
    memcpy(&command->words[0], &mode, sizeof(mode));
    command->words[1] = first;
    command->words[2] = second;
    command->words[3] = count;
    command->words[4] = (count << 5) | 10;
    command->words[5] = buffer;
    command->words[7] = handle;
    command->words[6] = (count * 0x180) | 0xc;
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    return nnResultIsSuccess(result) ? command->words[0] : static_cast<u32>(result);
}
}
