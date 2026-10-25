/* NON_MATCHING: the mode byte and the push {r0-r3, r4-r6, lr} spill match (memcpy of the parameter); armcc orders/merges the command stores differently from retail (retail: strd first/second, stm count/descriptor/buffer) */
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/Result.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

/* Sends IPC command 0x201 with a static buffer descriptor for `count` elements; returns the reply word or the error. */
u32 FUN_0042687c(u32 handle, u8 mode, u32 first, u32 second, u32 buffer, s32 count)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(command, 0, 0x10020104);
    memcpy(&command->words[0], &mode, sizeof(mode));
    nn::os::SetIpcWord(command, 2, first);
    nn::os::SetIpcWord(command, 3, second);
    nn::os::SetIpcWord(command, 4, count);
    nn::os::SetIpcWord(command, 5, (count << 5) | 10);
    nn::os::SetIpcWord(command, 6, buffer);
    nn::os::SetIpcWord(command, 7, (count * 0x180) | 0xc);
    nn::os::SetIpcWord(command, 8, handle);
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    return nnResultIsSuccess(result) ? command->words[0] : static_cast<u32>(result);
}
}
